#include <stdio.h>
int find_max(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int main() {
    int a , b , c ;
    printf("Input :");
    scanf("%d , %d , %d",&a,&b,&c);
    printf("Output:%d\n",find_max(a, b, c));
    return 0;
}
