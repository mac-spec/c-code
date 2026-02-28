#include<stdio.h>
int main()
{
int n,m;
char ch;
printf("Enter 2 numbers");
scanf("%d%d",&m,&n);
printf("Enter '+' for sum\n Enter '-' for difference\n Enter '/' for difference\n Enter '*' for difference\n");
scanf(" %c",&ch);
switch(ch)
{
case '+':
printf("The sum of %d and %d is %d",m,n,(m+n));
break;
case '-':
printf("The difference of %d and %d is %d",m,n,(m-n));
break;
case '/':
    if(n!=0)
printf("The quotient of %d and %d is %d",m,n,(m/n));
else
    printf("Undefined");
break;
case '*':
printf("The product of %d and %d is %d",m,n,(m*n));
break;
default:
printf("Enter valid operator");
}
}
