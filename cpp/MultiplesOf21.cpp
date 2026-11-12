#include<iostream>
using namespace std;

int main()
{
    cout << "Multiples of 21" << endl;
    int n;
    cout << "Enter value of n greater than 21 :- " << endl;
    cin>>n;
    int i = 21;
    if(n>=21) {
        while(i<=n) {
            cout << " " << i;
            i+=21;
        }
    } else {
        cout << "No multiples found." << endl;
    }
    return 0;
}
