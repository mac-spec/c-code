#include<stdio.h>
int main()
{
int i;
printf("*********MENU***********\n 1.Biriyani \n 2.Porota \n 3.Chappati\n Enter your choice number\n");
scanf("%d",&i);
switch(i)
{case 1:printf("Chicken Biriyani will be served within 5 min");
break;
case 2:printf("Porota will be served within 5 min!!!");
break;
case 3:printf("Chappati will be served within 5 min!!!");
break;
default:printf("None of tha above is selected. PLEASE TRY AGAIN!!!");
return 0;
}
}
