#include<stdio.h>
int main()
{
 float si,p,r,t;
 printf("Enter the principal value, rate of interest, maturity time\n");
 scanf("%f %f %f", &p,&r,&t);
 si=(p*r*t)/100;
 printf("si= %f",si);
}
