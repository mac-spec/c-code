//multiplication of matrix
#include<stdio.h>
int main()
{
int m,n,p,q,i,j,a[10][10],b[10][10],c[10][10],k;
printf("Enter number of rows and number of column of matrix A\n");//prompting th user to enter the order of matrix A
scanf("%d%d",&m,&n);
printf("Enter number of rows and number of column of matrix B\n");//prompting th user to enter the order of matrix B
scanf("%d%d",&p,&q);
if(n==p)//2 mmatrix is multiplied if the column number is equal to row number
{printf("Enter matrix A\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("Enter matrix B\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
printf("Matrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Matrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
    c[i][j]=0;//initialising each block of array to 0
for(k=0;k<n;k++)
{

c[i][j]=c[i][j]+(a[i][k]*b[k][j]);//multiplication of 2 matrices
}
}
}
printf("The matrix after multiplication is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{printf("%d\t",c[i][j]);//displaying the resultant matrix
}
printf("\n");
}

}
else{
    printf("The array multiplication is not possible");// if n is not equal to p
}
}
