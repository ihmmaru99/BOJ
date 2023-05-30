#include <stdio.h>
int main(){
    int a, b, c;
    int cnt;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c)
        cnt = 10000+ 1000*a;
    else if(a==b || b==c)
        cnt = 1000+ 100*b;
    else if(a == c)
        cnt = 1000 + 100*a;
    else{
        if(a>b && a>c)
            cnt = 100*a;
        else if(b>a && b>c)
            cnt = 100*b;
        else
            cnt = 100*c;
    }
    printf("%d", cnt);
    return 0;
}