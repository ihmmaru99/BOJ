#include <stdio.h>
int main(){
    int h, m;
    int n;
    scanf("%d %d", &h, &m);
    scanf("%d", &n);
    int a, b;
    a = n/60;
    b = n%60;
    h += a;
    m += b;
    while(m>=60){
        m -= 60;
        h += 1;
    }
    if(h>=24)
        h -= 24;
    
    printf("%d %d", h, m);

    return 0;
}