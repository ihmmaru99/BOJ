#include <stdio.h>
int main(){
    int a, b;
    scanf("%d\n%d", &a, &b);
    int c, d, e;
    c = b/100;
    d = (b%100)/10;
    e = b%10;
    printf("%d\n", a*e);
    printf("%d\n", a*d);
    printf("%d\n", a*c);
    printf("%d\n", a*b);

    return 0;
}