#include<iostream>
using namespace std;

int main(){
 cout<<"CLASS CALCULATOR\n\n";

 float mark;
 cout<<"Enter obtained percentage :- ";
 cin>>mark;

  if (mark>=80){
  cout<<"Distinction.\n";
   } else if(mark>=60 && mark<80) {
   cout<<"First Class.\n";
    } else if(mark>=50 && mark<60){
    cout<<"Second class.\n";
     } else if(mark>=34 && mark<50){
     cout << "Third Class" << endl;
  } else {
  cout<<"FAHH!!\n";
 }
return 0;
}
