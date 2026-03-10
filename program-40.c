#include <stdio.h>
int add(int a, int b);
int main()
{
    int a,b, sum;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    sum=add(a,b);// Function call
    printf("The sum of %d and %d is: %d\n",a,b,sum);
    return 0;
}
int add(int a, int b)// Function to add two numbers
{
    return a + b;
}
