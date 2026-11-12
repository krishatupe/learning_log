#include<iostream>
using namespace std;

int main(){

//TYPE CONVERSION AND CASTING

//type conversion is implicit (automatic)

char grade = 'A';
//char is stored in ASCII value which is an integer, would display as an integer when stored in int variable for smaller to bigger conversions. for example, int to double
int value = grade ;
cout<<"The ASCII value of grade A stored in int     variable is  "<<value<<endl;

//type casting is explicit (manually carried out by the user) for bigger to smaller conversions. For example, double to int.
double num = 12.678;
int Num = (int)num;
cout<<"The type casted value is  "<<Num<<endl;
cout<<endl;

//INPUTS IN C++

string name;
cout<<"Enter name :-  ";
cin>>name;

string product;
cout<<"Product name :-  ";
cin>>product;

double price;
cout<<"Enter product price :-  ";
cin>>price;

//TYPE CASTING  
int amount = (int)price;
cout<<"The amount to be paid is  "<<amount;
return 0;
}
