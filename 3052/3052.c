#include <stdio.h>
int main(){
    int num[42];
    int cnt = 0;
    for(int i=0; i<42; i++)
        num[i] = 0;
    for(int i=0; i<10; i++){
        int a;
        scanf("%d", &a);
        num[a%42] += a;
    }
    for(int i=0; i<42; i++){
        if(num[i] != 0)
            cnt += 1;
    }
    printf("%d", cnt);

    return 0;
}