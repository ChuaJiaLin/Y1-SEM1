//CHUA JIA LIN  A23CS0069 
//GUI KAH SIN   A23CS0080 
//Assignment 2 Set 1 
 
#include<iostream> 
using namespace std; 
 
void displayAccountInfo(int &); 
void deposit(int & ,double); 
void withdraw(int & ,double); 
 
void displayAccountInfo(int &balance) 
{ 
    cout<<"<<<<< My Accounts Overview >>>>> "<<endl; 
    cout<<"Account Holder Name: User 1"<<endl; 
    cout<<"Account Number: 1013202341"<<endl; 
    cout<<"Balance: RM "<<balance<<"\n\n\n"; 
} 
 
void deposit(int &balance, double spec_num) 
{   
    balance=balance+spec_num; 
    cout<<"<<<<< Deposit Transaction >>>>>"<<endl; 
    cout<<"Deposit of RM 500 successful.\n\n\n"; 
} 
 
void withdraw(int &balance, double withdrawal) 
{ 
    cout<<"<<<<< Withdrawal Transaction >>>>>"<<endl; 
    if(withdrawal<=balance) 
    {    
        balance=balance-withdrawal; 
        cout<<"Withdrawal of RM 200 successful.\n\n\n"; 
    } 
    else 
        cout<<"Insufficient funds for withdrwal.\n\n\n"; 
} 
 
int main() 
{ 
    int balance=200; 
    double spec_num=500,withdrawal=200; 
    char newloop; 
 
    do{ 
        displayAccountInfo(balance); 
        deposit(balance,spec_num); 
        withdraw(balance,withdrawal); 
        displayAccountInfo(balance); 
 
        cout<<"Do you want to perform another transaction? (Y/N): "; 
        cin>>newloop; 
        cout<<"\n\n"; 
    } while(newloop!='N'&& newloop!='n'); 
    cout<<"\n---------------------------------"<<endl; 
 
    system("pause"); 
    return 0; 
}