#include<stdio.h>
int main()
{
char str1[100],str2[100],str[200];
int i=0,j=0;
printf("Enter the first string : \n");//Accepting the first string
scanf("%s",str1);
printf("Enter the second string : \n");//Accepting the second string
scanf("%s",str2);
while(str1[i]!='\0')//checking if the character is null character
{
str[i]=str1[i];//adding the first string into the empty string array
i++;
}
while(str2[j]!='\0')
{
str[i]=str2[j];//adding the second string into the string array to concatenate with first string
i++;
j++;
}
str[i]='\0';//adding the null character as the last string
printf("The concatenated string is %s",str);
return 0;
}
