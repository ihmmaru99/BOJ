#include <stdio.h>
int main(){
    int n, number;
    int a, b;
    int cnt = 0;
    scanf("%d", &n);
    number = n;
    int count = 0;
    while(1){
        if(n == number)
            count += 1;
        if(count == 2)
            break;
        a = n/10;
        b = n%10;
        n = a+b;
        if(n<10){
            n = b*10 + n;
        }
        else
            n = b*10+(n%10);
        cnt += 1;
    }
    printf("%d", cnt);
}