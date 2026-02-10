
// Sum of Natural Numbers
#include <stdio.h>
int main()
{

    int num ;
    printf("Enter the number");
    scanf("%d",&num);
    int s,x;
    s=num*(num+1);
    x=(int)(s/2);
    printf("Sum = %d", x);
    return 0;
}
