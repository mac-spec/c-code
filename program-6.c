#include<stdio.h>
int main()
{
int a,fact=1,i;
printf("Enter a number\n");
scanf("%d",&a);
if(a==0)
printf("The factorial of 0 is 1");
else if(a<0)
printf("The factorial of the negative numbers never exists");
else{
for(i=1;i<=a;i++)
fact=fact*i;
printf("The factorial of the %d is %d",a,fact);
}}
