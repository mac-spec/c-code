#include<stdio.h>
int main()
{
int i,size,missing=1,temp=0,j;
printf("Enter the size of the array :\n");
scanf("%d",&size);
int arr[size];
printf("Enter the array elements: \n");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
//Sorting
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
printf("The sorted array is\n");
for(i=0;i<size;i++)
    printf("%d \n",arr[i]);
for(i=0;i<size;i++)
{
if((arr[i]>0) && (arr[i]==missing))

missing+=1;
}
printf("The smallest missing number is %d ",missing);
return 0;
}
