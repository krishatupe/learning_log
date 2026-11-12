#include<iostream>
using namespace std;

int main() {
    cout<<"C++ PROGRAM FOR FINDING THE ASCII VALUE OF INPUT STRING CHARACTERS" << endl;
    cout<<endl;
    
    string name;
    cout<<"Enter a three letter word :-  "<<endl;
    cin>>name;
    cout<<endl;
    
    int a = (int)name[0];
    cout<<"The ASCII value of first letter in input is "<<a<<endl;

    int b = (int)name[1];
    cout<<"The ASCII value of second letter in input is "<<b<<endl;

    int c = (int)name[2];
    cout<<"The ASCII value of third letter in input is "<<c<<endl;

    cout<<"The ASCII values are :- "<<a<<" "<<b<<" "<<c<<endl;

    cout<<"Sum of ASCII values of input :- "<<(a+b+c)<<endl;

    return 0;
}
