#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter the values of a and b\n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("The value of a and b after swapping are %d and %d",a,b);
return 0;
}
