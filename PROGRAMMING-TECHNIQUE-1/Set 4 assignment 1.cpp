//Chua Jia Lin A23CS0069 && Gui Kah Sin A23CS0080
#include <iostream>
using namespace std;
int main()
{
    double price=0;
    int quantity;
    string level;
    cout<<"Enter the quantity and level: ";
    cin>>quantity>>level;
    if(level=="Low")
    {
        if((quantity>=0)&&(quantity<15))
        {
            price=quantity*0.3;
        }
        else if((quantity>=15)&&(quantity<=50))
        {
            price=quantity*0.5;
        }
        else
        {
            price=quantity*0.7;
        }
    }
    else
    {
        if((quantity>0)&&(quantity<=10))
        {
            price=quantity*0.2;
        }
        else if((quantity>10)&&(quantity<=20))
        {
            price=quantity*0.3;
        }
        else
        {
            price=quantity*0.6;
        }
    }
    cout<<"Price: RM "<<price;
    return 0;
}
