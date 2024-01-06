//CHUA JIA LIN  A23CS0069 
//GUI KAH SIN   A23CS0080 
//Assignment 2 Set 2 
 
#include<iostream> 
using namespace std; 
 
int main() 
{ 
    int item,total_bill; 
    cout<<"Welcome to the Food Ordering System"<<endl; 
    cout<<"1.   Pizza - $10"<<endl; 
    cout<<"2.   Burger - $5"<<endl; 
    cout<<"3.   Sandwich - $7"<<endl; 
    cout<<"Enter the number of item you want to order: "; 
    cin>>item; 
 
    while(item>3) 
    { 
        cout<<"Invalid number. Please enter again: "; 
        cin>>item; 
    } 
    if(item==1) 
        total_bill=10; 
    else if(item==2) 
        total_bill=5; 
    else  
        total_bill=7; 
     
    cout<<"Your total bill is: $"<<total_bill<<endl<<endl<<endl; 
    cout<<"--------------------------------"<<endl; 
 
    system("pause"); 
    return 0; 
}