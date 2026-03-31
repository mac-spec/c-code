#include<stdio.h>
int num;
int addDigits(int num) {
    int n;
    if(num==0)
    return 0;
    else
    n=(num-1)%9;
    return 1+n;
}
int main()
{
    int op;
printf("Enter a number:\n");
scanf("%d",&num);
op=addDigits(num);
printf("The single digit formed after the digits of the number is %d",op);
return 0;
}
