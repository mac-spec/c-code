#include <stdio.h>
#include <string.h>

const char* determine_color(const char* s) {
   int col=s[0] - 'a'+1;
   int row=s[1]-0;
   if((col+row)%2==0)
   return "Black";
   else
   return "White";
return NULL;
}

int main() {
    char s[256];
    scanf("%s", s);
    const char* result = determine_color(s);
    printf("%s\n", result);
    return 0;
}
