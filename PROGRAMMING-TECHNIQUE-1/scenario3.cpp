//Chua Jia Lin A23CS0069
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cctype>
#include<fstream>
using namespace std;
double calculateKeywordPercentage(const char*,int,const char[],int);

double calculateKeywordPercentage(const char* input,int MAX_SIZE,const char keyword[],int length){   
    int keywordcount=0;
    bool iskeyword=false;
    
    for(int i=0;i<MAX_SIZE&&input[i]!='\0';i++){
        if(input[i]!=' '){
            if(strstr(input+i,keyword)==input+i){
                iskeyword=true;
            }
        }
        if(iskeyword==true&&input[i]==' '){
                keywordcount++;
                iskeyword=false;
        }
    }

    return static_cast<double>(keywordcount)/length*100;
}

int main(){
    const int MAX_SIZE=1000;
    int length=1;
    double percentage=0;
    const char keyword[]="data";
    char userInput[MAX_SIZE];

    ifstream infile("input2.txt");
    ofstream outfile("output2.txt");
     
    infile.getline(userInput, MAX_SIZE,'\n');
    
    for(int i=0;i<MAX_SIZE&&userInput[i]!='\0';i++){
        if(userInput[i]==' '){
            length++;
        }
    }

    outfile<<"Input:" <<endl;
    outfile<<userInput;

    for(int j=0;j<MAX_SIZE&&userInput[j]!='\0';j++){
        userInput[j]=tolower(userInput[j]);
    }

    percentage=calculateKeywordPercentage(userInput,MAX_SIZE,keyword,length);

    outfile<<endl<<endl;

    outfile<<"Percentage of lines containing 'data': "<<fixed<<showpoint<<setprecision(2)<<percentage<<"%"<<endl;

    infile.close();
    outfile.close();

    cout<<"Results written to 'output.txt'"<<endl<<endl;
    cout<<"--------------------------------"<<endl;

    system ("pause");
    return 0;
}
