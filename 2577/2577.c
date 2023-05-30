#include <stdio.h>
int main(){
    int a, b, c;
    int sum;
    int input;
    int num[10];
    for(int i=0; i<10; i++)
        num[i] = 0;
    scanf("%d\n%d\n%d", &a, &b, &c);
    sum = a * b * c;
    for(int i=0; sum>0; i++){
        input = sum%10;
        num[input] += 1;
        sum /= 10;
    }

    for(int i=0; i<10; i++){
        printf("%d\n", num[i]);
    }

    return 0;
}