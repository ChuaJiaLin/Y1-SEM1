//Set 3 lab exercise 1
//Chua Jia Lin A23CS0069

#include<iostream>>
using namespace std;
int main(){
	int product=1,integer,remainder;
	cout<<"Enter an integer number: ";
	cin>>integer;
	while(integer>0){
		remainder=integer%10;
		cout<<remainder<<" * ";
		product=product*remainder;
		integer=integer/10;
	}
	cout<<"= "<<product<<"\n";
	if(product%4==0&&product%5==0&&product%7==0){
		cout<<product<<" is a multiple of 4, 5 and 7\n";
	}
	else if(product%4==0&&product%5==0){
		cout<<product<<" is a multiple of 4 and 5\n";
	}
	else if(product%4==0&&product%7==0){
		cout<<product<<" is a multiple of 4 and 7\n";
	}
	else if(product%5==0&&product%7==0){
		cout<<product<<" is a multiple of 5 and 7\n";
    }
    else if(product%4==0){
		cout<<product<<" is a multiple of 4\n";
    }
    else if(product%5==0){
		cout<<product<<" is a multiple of 5\n";
    }
    else if(product%7==0){
		cout<<product<<" is a multiple of 7\n";
    }
    else{
    	cout<<product<<" is not a multiple of 4, 5 and 7\n";
	}
	return 0;
}

