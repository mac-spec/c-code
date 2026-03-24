#include<stdio.h>
int n,m;
int climbStairs(int n) {
    int a=1,b=2,temp;
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    for(int i=3;i<=n;i++)
    {
        temp=a+b;
        a=b;
        b=temp;
    }
    return b;
}
int main()
{
printf("Enter the stair case number");
scanf("%d",&n);
m=climbStairs(n);
printf("The total possible ways to reach %d step is %d",n,m);
return 0;
}
