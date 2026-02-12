#include<stdio.h>
int main()
{
int n,rem,rev,temp;
printf("Enter a number :\n");
scanf("%d",&n);
temp=n;
if(n<0)
printf("Cannot check the palindrome of a negative number");
else{
while(n>0)
{rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
if(temp==rev)
printf("The %d is a palindrome number",temp);
else
printf("The %d is not a palindrome number",temp);
}
return 0;
}
