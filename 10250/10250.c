#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        int h, w, n;
        int x, y;
        int number = 0;
        scanf("%d %d %d", &h, &w, &n);
        x = n%h;
        if(x==0)
            x=h;
        y = (n/h)+1;
        if(n%h==0)
            y -= 1;
        number = x*100 + y;
        printf("%d\n", number);
    }
    return 0;
}