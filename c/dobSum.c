#include<stdio.h>
int digitSum (int n) {
//here, n is just a placeholder, any input from main function usstored in n.
    int sum = 0;
    while(n>0) {
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main() {
    int d,m,y;
    printf("Enter your DOB :- ");
    scanf("%d %d %d", &d, &m, &y);
    int total = digitSum(m) + digitSum(d) + digitSum(y);
    if( d<1 || d>31 || m<1 || m>12 || y<1 ) {
        printf("Invalid Input");
    }
    else {
        while(total>9) {
            total = digitSum(total);
        }
        printf("The sum is %d", total);
    }
    return 0;
}
