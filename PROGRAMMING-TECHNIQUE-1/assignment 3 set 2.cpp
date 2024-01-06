//Chua Jia Lin A23CS0069
//Gui Kah Sin A23CS0080
//Assignment 3 Set 2
#include <iostream>
using namespace std;
const int MAX_OPERATIONS=100;
int operands1[MAX_OPERATIONS];
int results[MAX_OPERATIONS];
int multiplyUsingAddition(int,int);
void displayMainMenu();
void performMultiplication(int&);
void displayResults(int);

int multiplyUsingAddition(int a,int b){
    int result=0;
    for(int i=0;i<b;i++)
       result+=a;
    return result;
}

void displayMainMenu(){
    cout<<endl;
    cout<<"<<<<<Main Menu>>>>>"<<endl;
    cout<<"============================="<<endl;
    cout<<"1. Perform Multiplication"<<endl;
    cout<<"2. Display Results"<<endl;
    cout<<"3. Quit"<<endl;
}

void performMultiplication(int& operationCount){
    int operand,result=1;
    cout<<"Enter the number of operands for multiplication: ";
    cin>>operands1[operationCount];
    for(int i=0;i<operands1[operationCount];i++){
        cout<<"Enter operand "<<(i+1)<<": ";
        cin>>operand;
        result=multiplyUsingAddition(operand,result);
    }
    results[operationCount]=result;
    operationCount++;
}

void displayResults(int operationCount){
    cout<<"Results of Mathematical Operations:"<<endl;
    cout<<"========================================"<<endl;
    for(int i=0;i<operationCount;i++){
        cout<<"Operation "<<(i+1)<<": "<<results[i]<<" (Operands: "<<operands1[i]<<")"<<endl;
    }
}

int main(){
    int operationCount=0;
    int choice;
    do{
        displayMainMenu();
        cout<<"Enter your choice: ";
        cin>>choice;
         while(choice<1 || choice>3){
            cout<<"Invalid choice. Please enter again: ";
            cin>>choice;
        }
        cout<<endl;
        switch (choice){
            case 1: performMultiplication(operationCount);
                    cout<<endl;
                    cout<<"Multiplication performed successfully!"<<endl;
                    break;
            case 2: displayResults(operationCount);
                    cout<<endl;
                    break;
            default: cout<<"Goodbye!"<<endl;
                     break;
        }
    }while(choice!=3);
    cout<<endl;
    cout<<"-------------------------------"<<endl;
    system("pause");
    return 0;
}