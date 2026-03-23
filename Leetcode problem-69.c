#include<stdio.h>
int mySqrt(int x) {
    long long int i=0;
    while(i*i<=x)//checks till square of i if its equal to x
    i++;
    return i-1;
}
int main() {
    int Value;
    printf("Enter a number: ");
    scanf("%d",&Value);
    if(Value<0)//Checks if the number is negative number
      {  printf("Invalid input.\n");
        return 1;
    }
    int result = mySqrt(Value);//passing the value to function
    printf("The integer square root of %d is: %d\n",Value,result);
    return 0;
}
