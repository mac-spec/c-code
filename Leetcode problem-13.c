#include<stdio.h>
int romanToInt(char* s)
 {
    int sum=0;
    while(*s!='\0'){
        int ss=0,value=0;
        //To get the current character using pointer
    if(*s=='I')
    ss=1;
    else if(*s=='X')
    ss=10;
    else if(*s=='V')
    ss=5;
    else if(*s=='L')
    ss=50;
    else if(*s=='C')
    ss=100;
    else if(*s=='D')
    ss=500;
    else if(*s=='M')
    ss=1000;
    char next=*(s+1);//Next character of current character
    if(next=='I')
    value=1;
    else if(next=='X')
    value=10;
    else if(next=='V')
    value=5;
    else if(next=='L')
    value=50;
    else if(next=='C')
    value=100;
    else if(next=='D')
    value=500;
    else if(next=='M')
    value=1000;
      if (ss<value) {
            sum-=ss;
        }
         else {
            sum+=ss;
        }
        s++;//incrementing the pointer
    }
return sum;
}
int main()
{
int n;
char ch[10];
printf("Enter the Roman Number\n");
scanf("%s",ch);
n=romanToInt(ch);
printf("The integer number of %s is %d",ch,n);
return 0;
}
