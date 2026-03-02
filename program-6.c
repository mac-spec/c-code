#include<stdio.h>
int main()
{
int a,i;
long fact=1;
printf("Enter a Integer\n");
scanf("%d",&a);
if(a==0)
printf("The Factorial of 0 is 1");
else if(a<0)
printf("There is no Factorial for negative numbers");
else{
for(i=1;i<=a;i++)
fact=fact*i;
printf("The factorial of the %d is %ld",a,fact);
}
return 0;}
