// minimum number from an array
#include<stdio.h>
int main()
{
int array[]={-3,6,3,58,4879,327,57,1123,99};
int min;
min=array[0];
for(int i=0;i<9;i++)
{if(array[i]<min)
min=array[i];
}
printf("The minimum number is %d",min);
return 0;
}
