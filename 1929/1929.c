#include <stdio.h>
int main(){
    int a, b;
    int num[1000000] = {0, };
    num[1] = 1;
    scanf("%d\n%d", &a, &b);
    for(int i=2; i<=b; i++){
        for(int j=2; i*j<=b; j++){
            num[i*j] = 1;
        }
    }
    for(int i=a; i<=b; i++){
        if(num[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}