#include<stdio.h>
int main()
{
    int i,s=0;
int a[9]={1,2,3,4,5,6,7,7,8};
for(i=0;i<9;i++)
{printf("%d\n",a[i]);
s=s+a[i];}
printf("The sum of the elements: %d",s);
}
