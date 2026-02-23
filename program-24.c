#include<stdio.h>
int main()
{
    int sum,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%9==0)
        printf("9");
        else{
    sum=n%9;
    printf("%d",sum);
}return 0;
}
