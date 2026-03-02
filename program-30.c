//write a 4x4 matrix
#include<stdio.h>
int main()
{
int row,col,i,j;
printf("Enter column size\n");
printf("Enter row matrix\n");
scanf("%d %d",&col,&row);
int a[row][col];
if(row==col)
{
printf("Enter a square matrix");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
    scanf("%d",&a[i][j]);
}
}
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;
        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", a[bottom][i]);
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }
}
else{
    printf("Enter a square matrix");
}
return 0;
}


