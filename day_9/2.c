#include <stdio.h>
int square(int a){
    printf("Output: %d",a*a);
}
int main(){
    int a;
    printf("Input : ");
    scanf("%d",&a);
    square(a);
    return 0;
}
