#include<iostream>
using namespace std;

int main()
{
    cout <<"NO. COUNT TILL n\n"<< "(while loop)\n" << endl;
    int n;
    int i=1;
    cout << "Enter value of n :- " << endl;
    cin>>n;
    
    while(i<=n){
    cout << " " <<i;
    i++;
    }
    cout << endl;
    return 0;
}
