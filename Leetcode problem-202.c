#include<stdio.h>
#include<stdbool.h>
int n,op;
bool isHappy(int n) {
    int digi=n,rem;
    while (n != 1 && n != 4) {
        digi=0;
  while(n>0)
  {
    rem=n%10;
    digi=digi+(rem*rem);
    n=n/10;
  }
  n=digi;
}
  if(digi==1)
  return true;
  else
  return false;
}
int main()
{
printf("Enter a number:\n");
scanf("%d",&n);
if(isHappy(n))
printf("%d is a Happy number",n);
else
printf("%d is not a Happy number",n);
return 0;
}
