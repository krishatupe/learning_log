#include<iostream>
using namespace std;

int main() {
    cout<<"🏦 LOAN ELIGIBILITY CHECKER 🏦\n\n";
    int age;
    double inc;
    cout << "Enter your age :- " <<endl;
    cin>>age;
    cout << "Enter your monthly income :- " << endl;
    cin>>inc;

    if(age>=18 && inc>=1500) {
        cout<<"Eligible for loan."<<endl;
    }
    else if(age>=18 && inc<1500) {
        cout << "Income too low for loan" << endl;
    }
    else if(age<18 && inc>=1500) {
        cout << "Age doesn't meet the eligibility criteria for loan" << endl;
    } else if(age<18 && inc<1500){
        cout << "Not eligible." << endl;
        }
   else{
        cout<<"INVALID INPUT.";
        }
        return 0;
    }
