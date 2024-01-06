#include <iostream>
#include <string>
using namespace std;

// constants with the associated values
#define WASH 10.0 // the price of WASH service charge
#define VACUUM 7.0 // the price of VACUUM service charge
#define POLISH 15.0 // the price of POLISH service charge

// Task 6: List all function prototypes.
void setType(string &);
void setPackage(int &);
float wash(string);
float vacuum(string);
float polish(string);

// Task 7: (i) Call the functions from Task 1 until Task 5.
int main() {
	string carType; // car type variable
	int wsPkg; // car wash service package
	float totalCharge = 0; // total service charge based on different wash service package with different car type
	
	// call setType function with the parameter carType
	setType(carType);
	
	// call setPackage function with the parameter wsPkg
	setPackage(wsPkg);
	
	// Task 7: (ii) totalCharge is the variable to hold the total service charge based on different wash service package with different car type (sedan or mpv).
	switch (wsPkg) {
		case 1: totalCharge+= wash(carType);
		        break;
		case 2: totalCharge+= vacuum(carType);
		        break;
        case 3: totalCharge+= polish(carType);
		        break;
	}
	cout << endl;
	cout << "Total service charge is " << totalCharge<<endl;
    cout<<"--------------------------------"<<endl;
    system("pause");
	return 0;
}

// Task 1: Function to set car type
void setType(string &carType) {
     cout<<endl;
     cout<<"Enter car type (sedan/mpv): ";
     cin>>carType;
     while(carType!="sedan"&&carType!="mpv"){
           cout<<"Invalid car type. Please enter again: ";
           cin>>carType;
     }
	cout << endl;
}

// Task 2: Function to set wash service package
void setPackage(int &wsPkg) {
     cout<<"1. Basic"<<endl;
     cout<<"2. Deluxe"<<endl;
     cout<<"3. Premium"<<endl;
     cout<<"Choose wash service package (1/2/3): ";
     cin>>wsPkg;
     while(wsPkg!=1&&wsPkg!=2&&wsPkg!=3){
           cout<<"Invalid wash service package. Please enter again: ";
           cin>>wsPkg;
     }
	cout << endl;
}

// Task 3: Function to determine exterior wash service charge based on car type
float wash(string carType) {
    double washcharge;
    if(carType=="mpv")
        washcharge=1.2*WASH;
    else
        washcharge=WASH;
    cout<<"Wash service charge is "<< washcharge <<endl;
    return washcharge;
}

// Task 4: Function to determine interior vacuum service charge based on car type
float vacuum(string carType) {
    double vacuumcharge;
    if(carType=="mpv")
        vacuumcharge=1.05*VACUUM;
    else
        vacuumcharge=VACUUM;
    cout<<"Vacuum service charge is "<< vacuumcharge <<endl;
        return vacuumcharge;
}

// Task 5: Function to determine exterior polish service charge based on car type
float polish(string carType) {
    double polishcharge;
    if(carType=="mpv")
        polishcharge=1.2*POLISH;
    else
        polishcharge=POLISH;
    cout<<"Polish service charge is "<< polishcharge <<endl;
    return polishcharge;
}