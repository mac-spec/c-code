#include<stdio.h>
int main()
{
int i,size,max;
printf("Enter the size of the array\n");
scanf("%d",&size);
int arr[size];
printf("Enter the array elements\n");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
max=arr[0];
for(i=0;i<size;i++)
{
if(arr[i]>max){
max=arr[i];}}
printf("The max element is %d",max);

return 0;
}
