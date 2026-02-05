// Simple calculator
#include<stdio.h>
int main()
{
float a,b;
char c;
printf("Enter 2 numbers\n");
scanf("%f%f",&a,&b);
printf("Enter the operator to perform\n");
scanf(" %c",&c);
if(c=='%')
printf("%f",(a/b)*100);
else if(c=='*')
printf("%f",(a*b));
else if(c=='-')
printf("%f",(a-b));
else if(c=='+')
printf("%f",(a+b));
else if(c=='/')
printf("%f",(a/b));
else
printf("Wrong operator");
return 0;
}
