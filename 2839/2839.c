#include <stdio.h>
int main(){
    int n;
    int cnt = 0;
    scanf("%d", &n);
    while(1){
        if(n == 0)
            break;
        else if(n < 0){
            printf("-1");
            return 0;
        }
        if(n%5 ==0)
            n -= 5;
        else
            n -= 3;
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}