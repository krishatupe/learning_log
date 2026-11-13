#include<stdio.h>
int digitSum(int n){
int sum=0; 
printf ("Inside digitSum function, initially sum = %d, n = %d\n\n",sum, n);
printf("Inside while loop, using operations :-\n sum+=n%10 & n/=10\n");
while(n>0){
sum += n%10;
n/=10;
printf("sum = %d & n = %d\n\n",sum, n);
//here, sum stores the addition of the remainders obtained when n/10, 
//while n stores the quotient, loop continues until quotient is 0 
}
return sum;
}
int main()
{ int n;
    printf("Enter the number:- ");
    if(scanf("%d", &n)==1 && n>=1){
    printf("In the main function, after digitSum function call,\n Sum = %d",digitSum(n));
    }
    else{
    printf("Enter a valid, positive numeric value.");
    }
    return 0;
}
