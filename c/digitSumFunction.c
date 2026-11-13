#include<stdio.h>
#include<stdlib.h>
int digitSum(int n){
int sum=0; 
printf ("Inside digitSum function, initially sum = %d\n\n",sum);
printf("Inside while loop, using operations :-\n sum+=n%10 & n/=10\n");
while(n>0){
sum += n%10;
n/=10;
printf("sum = %d & n = %d\n\n",sum, n);
//here, sum stores the addition of the remainders obtained when n/10, 
//while n stores the quotient, loop continues until remainder is 0 
}
}
int main()
{ int n;
    printf("Enter the number:- ");
    scanf("%d", &n);
    printf("In the main function, after digitSum function call,\n Sum = %d",digitSum(n));
    return 0;
}
