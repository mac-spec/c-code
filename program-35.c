#include<stdio.h>
#include<string.h>
int main()
{
int len,i;
char str[50],temp;
printf("Enter the string : \n");
scanf("%s",str);
len=strlen(str);//using inbuilt length function to calculate the length of the string
for(i=0;i<len/2;i++)//swaps letters before and after the middle letter
{
temp=str[i];           //swapping letters
str[i]=str[len-i-1];
str[len-i-1]=temp;
}
printf("The reversed string is %s",str);
return 0;
}
