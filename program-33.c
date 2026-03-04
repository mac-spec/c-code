#include<stdio.h>
#include<string.h>
int main()
{
char s1[10] ="Friends!!";
printf("The original string\n");
printf("%s\n",s1);
char s2[10];
strcpy(s2,s1);
printf("The copied string\n");
printf("%s",s2);
return 0;
}
