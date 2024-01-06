#include <iostream>
using namespace std;

// function prototypes
void display_Question(char);//no data type for parameter
void yes_No(char &);//no data type for parameter and the value of ans cannot passed back to main function thus red_zone, close_contact and fever variable are not updated thus causes the incorrect value of status variable
int get_Status(char,char,char);//no data type for parameter

// start main function
int main() {
    char red_zone, close_contact, fever; 
	// two possible character values only: 
	// 'y' -> yes, 'n' -> no
	
    int status; 
	// 0 -> GREEN, 1 -> YELLOW, 2 -> ORANGE, 3 -> RED

    for (int i = 1; i < 4; i++) {//the for loop will only repeat for i=1 and i=2 and will stop when i=3
        display_Question(i);
        if (i == 1)//it assign 1 to the i variable instead of comparing the value of i with 1
            yes_No(red_zone); 
			// set red_zone either 'y' or 'n'
        else if (i == 2)//it assign 2 to the i variable instead of comparing the value of i with 2
            yes_No(close_contact); 
			// set close_contact either 'y' or 'n'
        else
            yes_No(fever); 
			// set fever either 'y' or 'n'
    }

    // get risk status based on red_zone, close_contact, fever parameters
    status = get_Status(red_zone, close_contact, fever);
    cout << "Your Covid-19 risk status is ";
    if (status>=0) {//the while statement will not terminate except status==0
        if (status == 0)  cout << "GREEN";//it assign 0 to the status variable instead of comparing the value of status with 0,if statement does not requires break statement,the condition is not written in the parentheses
        if (status == 1)  cout << "YELLOW"; //it assign 1 to the status variable instead of comparing the value of status with 1,if statement does not requires break statement,the condition is not written in the parentheses
        if (status == 2)  cout << "ORANGE"; //it assign 2 to the status variable instead of comparing the value of status with 2,the condition is not written in the parentheses
        if (status == 3)  cout << "RED";//the condition is not written in the parentheses
    }
    cout << "\n";
    system("pause");//the program will terminates immediately when the program ends
    return 0;
}

// start new user-defined functions
void display_Question(char q) { 
    switch (q){//no open curly braces for switch statement
        case 1: 
			cout << "Living in red zone?\n"; 
			break;
        case 2: 
			cout << "Have a close contact with Covid-19 patient?\n"; 
			break;
        case 3: 
			cout << "Body temperature >= 38 degrees Celcius?\n";
    } //void function is a non-returning function
}

void yes_No(char & ans) {//the value of ans cannot be passed to the main function
    do {
        cout << "Please enter your answer (y / n): ";
        cin >> ans;
    } while (ans != 'n' && ans != 'y');//the while loop should stop when (ans=='n' && ans=='y') but it loops again, & is not and statement
    cout << '\n';
}

int get_Status(char rz, char cc, char f) {
    int s = 0;
    if (rz == 'y') s++;//it assign 'y'' to the rz variable instead of comparing the value of rz with 'y'
    if (cc == 'y') s++;//it assign 'y' to the cc variable instead of comparing the value of cc with 'y'
    if (f == 'y') s++;//it assign 'y' to the f variable instead of comparing the value of f with 'y'
    return s;
}
