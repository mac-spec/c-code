#include<stdio.h>
int main()
{
int a[10],i,j,n,temp,min;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);//prompting the user to enter array elements
printf("Array before sorting\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);//printing original array
min=a[0];// Assume the current element is the smallest in the remaining original array
for(i=0;i<n-1;i++)
 {

     min=i;// If a smaller element is found, update the index of the minimum element
 for(j=i+1;j<n;j++)
 {

if(a[j]<a[min])
    min=j;
 }


temp=a[i];// swapping
a[i]=a[min];
a[min]=temp;
}

printf("\nArray after sorting\n");
for(i=0;i<n;i++)
     printf("%d\t",a[i]);
}
