#include <stdio.h>
int main(){
    int n;
    int sum =0;
    scanf("%d", &n);
    char num[100];
    scanf("%s", &num);
    for(int i=0; i<n; i++){
        sum = sum+num[i]-'0';
    }
    printf("%d", sum);
    return 0;
}

//다시 한번 볼것