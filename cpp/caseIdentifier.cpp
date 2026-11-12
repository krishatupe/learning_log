#include<iostream>
using namespace std;

int main()
{
    cout << "PROGRAM TO DETERMINE THE CASE OF ALHABET\n\n" << endl;
    
    char a;
    cout<<"Enter an alphabet :- ";
    cin>>a;
    
    if(a>=65 && a<=90){
    cout<<"Uppercase";
    } else if(a>=97 && a<=122){
    cout << "Lowercase" << endl;
    }
    else{
    cout << "INVALID INPUT" << endl;
    }
    return 0;
}
