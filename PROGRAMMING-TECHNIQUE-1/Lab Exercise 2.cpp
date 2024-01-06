//Chua Jia Lin A23CS0069
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
double distance(int x1, int y1, int x2, int y2);
int main(){
    int x1=1,y1=3,x2=2,y2=6,x3=5,y3=4;
    char coordinate[31];
    char coordinateA[10]="A(1, 3), ";
    char coordinateB[14]="B(2, 6), and ";
    char coordinateC[10]="C(5, 4)";
    strcpy(coordinate, coordinateA);
    strcat(coordinate, coordinateB);
    strcat(coordinate, coordinateC);
    cout<<coordinate<<endl;

    for(int i=0; i<4; i++){
      switch (i){
        case 0: cout<<"\tx\ty"<<endl;
        break;
        case 1: cout<<"A\t"<<x1<<"\t"<<y1<<endl;
        break;
        case 2: cout<<"B\t"<<x2<<"\t"<<y2<<endl;
        break;
        case 3: cout<<"C\t"<<x3<<"\t"<<y3<<endl;
        break;
        default: break;
    }
  }
  
  cout<<"AB = "<<distance(x1,y1,x2,y2)<<endl;
  cout<<"AC = "<<distance(x1,y1,x3,y3)<<endl;
  cout<<"BC = "<<distance(x2,y2,x3,y3)<<endl;
  
    system ("pause");
    return 0;
}

double distance(int x1,int y1, int x2, int y2){
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}