#include <stdio.h>
#include <string.h>
int main (){
    char str1[100], str2[100];
    strcpy(str1, "nataan da ");
    strcpy(str2, "LEO");
    printf("%s", strcat(str1,str2));
    return 0;
}