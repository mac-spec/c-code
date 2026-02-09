#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,real,imag,d,root1,root2;
printf("Enter the values of a,b,c");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);

if(d==0)
{
root1=root2=(-b)/(2*a);
printf("The value of the equations is %.3f", root1);
}
else if(d>0)
{
root1=(((-b)+sqrt(d))/2*a);
root2=(((-b)-sqrt(d))/2*a);
printf("The value of the equation is %.3f %.3f", root1, root2);
}
else
{


real=(-b)/(2*a);
imag=sqrt(fabs(d))/(2*a);
if(imag>=0)
printf("The value of the quadratic equation is %.3f + %.3f i", real, imag);
else
printf("The value of the quadratic equation is %.3f - %.3f i", real, imag);
}
return 0;}


