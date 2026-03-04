#include<stdio.h>
#include<string.h>//invoking string functions
int main()
{
char s1[10] ="Friends!!";//Storing the original value
printf("The original string\n");
printf("%s\n",s1);
char s2[10];
strcpy(s2,s1);//storing copy of the original value
printf("The copied string\n");
printf("%s",s2);
return 0;
}
