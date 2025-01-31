#include <stdio.h>
int sum(int a,int b){
    int sum = a + b;
    return (sum);
}
int main(){
    int a,b;
    printf("Input :");
    scanf("%d , %d",&a,&b);
    printf("Output:%d",sum(a,b));
    return 0;
}