#include<stdio.h>
int digitSum (int n) {
    int sum =0;
    while(n>0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main()
{   int a;
    printf("DIGIT ROOT FINDER\n\n");
    printf("Enter the number :- ");
    if(scanf("%d",&a)!=1 || a<1 ) {
            printf("Enter a numeric non-zero value.");
        }
        else {
            int total = digitSum(a);
            while(total>9) {
                total = digitSum(total);
            }
            printf("The digit root is %d", total);
    }
    return 0;
}
