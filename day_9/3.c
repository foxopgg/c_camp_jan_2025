#include <stdio.h>
int _even(int a){
    if(a/2==0){
        printf("True");
    } else{
        printf("False");
    }
}
int main(){
    int a;
    printf("Input :");
    scanf("%d",&a);
    printf("Output:%d",_even(a));
}