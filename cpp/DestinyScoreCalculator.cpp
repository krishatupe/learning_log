#include<iostream>
using namespace std;

int main(){
cout<<"DESTINY SCORE CALCULATOR 🔮"<<endl;
cout<<endl;

string name;
cout<<"Enter Name :- ";
cin>>name;

int mon;
cout<<"Enter your birth month in digits :- ";
cin>>mon;

int luc;
cout << "Enter your lucky number :- ";
cin>>luc;

int a = name[0];
cout<<"Your name energy is "<<a<<endl;

int f = mon*luc;
cout<<"Your fortune score is "<<f<<endl;
cout<<"Your destiny score is "<<(f+a);

return 0;
}
