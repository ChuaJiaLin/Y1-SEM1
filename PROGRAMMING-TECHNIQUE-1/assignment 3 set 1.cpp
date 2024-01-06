//Chua Jia Lin A23CS0069
//Gui Kah Sin A23CS0080
//Assignment 3 Set 1
#include <iostream>
using namespace std;
const int MAX_BOOKS=2;
string title[MAX_BOOKS];
string author[MAX_BOOKS];
int publicationyear[MAX_BOOKS];
void displayMainMenu();
void addBook(string [],string [],int [],int&);
void displayLibrary(string [],string [],int [],int);
void searchByTitle(string [],string [],int [],int);
int main(){
    int choice,numbook=0;
    do{
         displayMainMenu();
         cout<<"Enter your choice: ";
         cin>>choice;
         while(choice<1 || choice>4){
            cout<<"Invalid choice. Please enter again: ";
            cin>>choice;
         }
         cout<<endl;
         switch (choice){
             case 1: if(numbook<MAX_BOOKS){
                        addBook(title,author,publicationyear,numbook);
                        cout<<endl;
                        cout<<"Book added successfully!";
                     }
                     else
                        cout<<"Sorry, you have reached the maximum number of books.";
                     break;
             case 2: displayLibrary(title,author,publicationyear,numbook);
                     cout<<endl;
                     break;
             case 3: searchByTitle(title,author,publicationyear,numbook);
                     break;
             default: cout<<"Goodbye!"<<endl;
                      break;
         }
         cout<<endl;
    }while(choice!=4);
    cout<<"------------------------------"<<endl;
    system("pause");
    return 0;
}

void displayMainMenu (){
    cout<<endl;
    cout<<"<<<<<Library Management System>>>>>"<<endl;
    cout<<"========================================"<<endl;
    cout<<"1. Add a Book"<<endl;
    cout<<"2. Display Library"<<endl;
    cout<<"3. Search by Title"<<endl;
    cout<<"4. Quit"<<endl;
}

void addBook (string title[],string author[],int publicationyear[],int& numbook){
    cout<<"Enter book title: ";
    cin>>title[numbook];
    cout<<"Enter author name: ";
    cin>>author[numbook];
    cout<<"Enter publication year: ";
    cin>>publicationyear[numbook];
    numbook+=1;
}

void displayLibrary(string title[],string author[],int publicationyear[],int numbook){
    cout<<"Library Contents:"<<endl;
    cout<<"===================="<<endl;
    for(int i=0;i<numbook;i++){
        cout<<"Title: "<<title[i]<<endl;
        cout<<"Author: "<<author[i]<<endl;
        cout<<"Year: "<<publicationyear[i]<<endl<<endl;
    }
}

void searchByTitle(string title[],string author[],int publicationyear[],int numbook){
    string search;
    bool found=false;
    cout<<"Enter the title to search: ";
    cin>>search;
    cout<<endl;
    for(int i=0;i<numbook;i++){
        if(title[i]==search){
            cout<<"Book found:"<<endl;
            cout<<"===================="<<endl;
            cout<<"Title: "<<title[i]<<endl;
            cout<<"Author: "<<author[i]<<endl;
            cout<<"Year: "<<publicationyear[i]<<endl;
            found=true;
            break;
        }
    }
    if(found==false){
        cout<<"Book was not found."<<endl;
    }
} 