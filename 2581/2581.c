#include <stdio.h>
int main(){
    int a, b;
    int cnt = 0;
    int min = 10000;
    scanf("%d\n%d", &a, &b);
    for(int i=a; i<=b; i++){
        int count = 0;
        for(int j=1; j<=i; j++){
            if(i%j == 0)
                count++;
        }
        if(count == 2){
            cnt += i;
            if(i<min)
                min = i;
        }
    }
    if(cnt == 0)
        printf("-1");
    else
        printf("%d\n%d", cnt, min);
    return 0;
}