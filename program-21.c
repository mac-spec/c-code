//count of occurence of value of an array
#include<stdio.h>
int main()
{
int size,i,c=0,ele;
printf("Enter the array size\n");
scanf("%d",&size);
int arr[size];
printf("Enter array elements\n");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
printf("Enter the element to count its occurence\n");
scanf("%d",&ele);
for(i=0;i<=size;i++)
{
if(arr[i]==ele)
c++;
}
printf("%d",c);
return 0;
}
