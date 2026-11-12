#include<iostream>
using namespace std;

int main(){
cout<<"SHOPPING BILL\n\n\n";

 string n1 = "Cookies";
 double p1 = 220.65;
 int q1;
 
 cout<<"Product :- "<<n1<<endl;
 cout<<"Price :- "<<p1<<endl;

  cout<<"Quantity :- ";
  cin>>q1;
  double a1=p1*q1;
  cout<<"Amount :- "<<a1<<endl;
  cout<<endl;

 string n2 = "Brownies";
 double p2 = 550.45;
 int q2;
 cout<<"Product :- "<<n2<<endl;
 cout<<"Price :- "<<p2<<endl;
 cout<<"Quantity :- ";
 cin>>q2;
 double a2 = p2*q2;
 cout<<"Amount :- "<<a2<<endl;
 cout<<endl;
 
  
 string n3 = "Chocolate milk";
 double p3 = 750.87;
 int q3;
 cout << "Product :- " << n3<<endl;
 cout << "Price :- " << p3<< endl;
 cout << "Quantity :- ";
 cin>>q3;
 double a3 = p3*q3;
 cout<<"Amount :- "<<a3<<endl;
 cout<<endl;
 
 cout<<"Total Bill :- "<<(a1+a2+a3);
 
return 0;
}
