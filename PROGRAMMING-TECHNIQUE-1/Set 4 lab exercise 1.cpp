//Set 4 lab exercise
//Chua Jia Lin A23CS0069

#include <iostream>
using namespace std;
int main(){
	int integer,remainder,product=1;
	cout<<"Enter integer number: ";
	cin>>integer;
	do{
		remainder=integer%10;
		product=product*remainder;
		cout<<remainder<<" * ";
		integer=integer/10;
	} while (integer>0);
	cout<<"= "<<product<<"\n";
	if(!(product%2)){
		if (product%3==0&&product%5==0){
			cout<<product<<" is an even number and multiples of 3 and 5\n";
		}
		else if(product%3==0){
			cout<<product<<" is an even number and multiple of 3\n";
		}
		else if(product%5==0){
			cout<<product<<" is an even number and multiple of 5\n";
		}
		else{
			cout<<product<<" is an even number\n";
		}
	}
	else{
		if (product%3==0&&product%5==0){
			cout<<product<<" is an odd number and multiples of 3 and 5\n";
		}
		else if(product%3==0){
			cout<<product<<" is an odd number and multiple of 3\n";
		}
		else if(product%5==0){
			cout<<product<<" is an odd number and multiple of 5\n";
		}
		else{
			cout<<product<<" is an odd number\n";
		}
		}
	
		return 0;
		system ("pause");
}

