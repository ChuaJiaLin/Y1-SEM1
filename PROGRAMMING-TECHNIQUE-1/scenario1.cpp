//Chua Jia Lin A23CS0069
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cctype>
using namespace std;

double calculateKeywordPercentage(const char[],int,const char[],int);

double calculateKeywordPercentage(const char userInput[],int MAX_SIZE,const char keyword[],int length){   
    int keywordcount=0;
    bool iskeyword=false;

    for(int i=0;i<MAX_SIZE&&userInput[i]!='\0';i++){ 
        if(userInput[i]!=' '){
            if(strstr(userInput+i,keyword)==userInput+i){
                iskeyword=true;
            }
        }

        if(iskeyword==true&&userInput[i]==' '){
            keywordcount++;
            iskeyword=false;
        }
    }

    return static_cast<double>(keywordcount)/length*100;
}

int main(){
    const int MAX_SIZE=1000;
    int length=1;//length=number of words entered(add 1 for last word bcs last word no space cannot update length)
    double percentage=0;
    const char keyword[]="data";
    char userInput[MAX_SIZE];

    cout<<"Enter the input (up to 999 characters, end with an empty line):"<<endl;
    cin.getline(userInput,MAX_SIZE,'\n');

    cout<<endl;

    for(int i=0;i<MAX_SIZE&&userInput[i]!='\0';i++){
        if(userInput[i]==' '){
            length++;
        }
    }

    cout<<"Input:"<<endl;

    for(int j=0;j<MAX_SIZE&&userInput[j]!='\0';j++){
        cout<<userInput[j];
        userInput[j]=tolower(userInput[j]);
    }

    percentage=calculateKeywordPercentage(userInput,MAX_SIZE,keyword,length);
    
    cout<<endl<<endl;
    
    cout<<"Percentage of lines containing 'data': "<<fixed<<showpoint<<setprecision(2)<<percentage<<"%"<<endl<<endl;
    cout<<"--------------------------------"<<endl;
    
    system ("pause");
    return 0;
}