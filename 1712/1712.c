#include <stdio.h>
int main(){
    long a, b, c;
    int cnt = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(b>=c){
        printf("-1");
        return 0;
    }
    else{
        cnt = a/(c-b) + 1;
        printf("%d", cnt);
    }
    return 0;
}