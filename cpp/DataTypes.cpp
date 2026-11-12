#include<iostream> //preprocessor directive
#include<string>
using namespace std;

int main() {
    //cout is an output statement
    //; is the terminator
    cout<<"Hello World!\n"<<"Start of C++ program\n"; 
    cout<<"Krisha<3\n\n";
    // Hello world is called a BOILERPLATE CODE since it's fundamental 

    //PRIMITIVE (FUNDAMENTAL) DATATYPES :-

    char grade1='A';
    cout<<"Character one is "<<grade1<<endl;
    cout<<"Size of character is "<<sizeof(grade1)<<endl;
    cout<<endl;
    //single characters are defined in ''

    bool X=false;
    //in boolean, true=1 and false=0
    cout<<"Boolean value is  "<<X<<endl;
    cout<<"Boolean variable's size is "<<sizeof(X)<<endl;
    cout<<endl;

    int a=15;
    cout<< "Integer is " <<  a << endl;
    cout<<"Size of integer is "<<sizeof(a)<<endl;
    cout<<endl;

    float PI=3.14f;
    cout<<"Float variable is "<<PI<<endl;
    cout<<"Size of float variable is  "<<sizeof(PI)<<endl;
    cout<<endl;

    double exe=100.56;
    cout<<"Double variable is  "<<exe<<endl;
    cout<<"Size of double variable is  "<<sizeof(exe)<<endl;
    cout<<endl;

    string b="boat";
    cout<<"String variable is  "<<b<<endl;
    cout<<"Size of string variable is  "<<sizeof(b)<<endl;
    //double characters defined in " "
    cout<<endl;

    return 0;
}
