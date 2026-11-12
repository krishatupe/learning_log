#include<iostream>
using namespace std;

int main()
{
    cout << "PROGRAM TO FIND IF THE NUMBER IS EVEN OR ODD\n\n";
    int i;
    cout << "Enter input number :- " << endl;
    cin>>i;
    
    //even nos. :- n%2==0 ;
    //odd nos. :- n%2!=0;
    if( i%2 == 0 ) {
    cout << "Number is even." << endl;
    } else {
    cout << "Number is odd." << endl;
    } 
    
    //TERNARY STATEMENTS.
    //((condition)? "statement1" : "statement2".
    cout << "TO DETERMINE WHETHER THE NUMBER IS POSITIVE OR NEGATIVE USING TERNARY STATEMENTS\n\n" << endl;
    int a;
    cout<<"Enter number :-  ";
    cin>>a;
    cout <<( (a>=0)? "positive":"negative" )<< endl;
    return 0;
}
