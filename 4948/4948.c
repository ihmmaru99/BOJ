#include <stdio.h>
int main(){
    int num[246913] = {0};
    num[1] = 1;
    num[0] = 1;
    for(int i=2; i<246913; i++){
        if(!num[i]){
            for(int j=i+i; j<246913; j+=i)
                num[j] = 1;
        }
    }
    while(1){
        int n, cnt=0;
        scanf("%d", &n);
        if(!n)
            break;
        for(int i=n+1; i<=2*n; i++){
            if(!num[i])
                cnt++;
        }
        printf("%d\n", cnt);
    }
}