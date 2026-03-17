#include<stdbool.h>
#include<stdio.h>
bool isPalindrome(int x)
{ int r,cpy;//To store the copy of the original number
long re=0;//to store the reversed number
if(x<0)
return false;
cpy=x;
    while(x!=0)
    {
    r=x%10;
    re=re*10+r;
    x=x/10;
    }
    if(cpy==re)//checks if reversed and original number is equal
    return true;
    else
    return false;
}
int main()
{
    int x;
printf("Enter a number to check if it is a palindrome number\n");
scanf("%d",&x);
bool d=isPalindrome(x);
printf("%s",d?"true":"false");//displaying the boolean result in string format not in numeric 1's or 0's
return 0;
}
