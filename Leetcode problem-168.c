#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* convertToTitle(int columnNumber) {
     char* res=(char*)malloc(10*sizeof(char));
    int i = 0;
while(columnNumber>0) {
        columnNumber--;
        res[i++]=(columnNumber%26)+'A';
        columnNumber/=26;
    }
    res[i]='\0';
    for(int j=0;j<i/2;j++) {
        char temp=res[j];
        res[j]=res[i-1-j];
        res[i-1-j]=temp;
    }
 return res;
}
int main()
{
    int input;
    printf("Enter column number: ");
    if(scanf("%d",&input)==1&&input>0) {
        char* result=convertToTitle(input);
        printf("Excel Title: %s\n", result);
        free(result);
    }
    else
     {
        printf("Please enter a valid positive integer.\n");
    }
    return 0;
}
