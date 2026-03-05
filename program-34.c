#include<stdio.h>
#include<string.h>//to use string functions
int main()
{
int i,count=0;//to count the number of letters
char ch[50];
printf("Enter a string \n");
scanf("%s",ch);
while(ch[i]!='\0')//if the character is not null character then count the number of letters
{
count++;//increase the count by 1
i++;//going through each index in the string array
}
printf("The length of the string is %d",count);
return 0;
}
