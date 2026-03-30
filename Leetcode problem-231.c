#include<stdio.h>
#include<stdbool.h>
bool isPowerOfTwo(int n) {
    return n>0 && (n&(n-1))==0;//Bit-manipulation
}
int main()
{
printf("Enter a number:\n");//prompt the user to enter a number
int n;
bool res;
scanf("%d",&n);
res=isPowerOfTwo(n);//Passing the value to the functions
res==1?printf("True"):printf("False");//Printing True or False instead of 1 or 0
return 0;
}
