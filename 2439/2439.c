#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=n-1; i>=0; i--){
        for(int j=i; j>=1; j--){
            printf(" ");
        }
        for(int j=1; j<=n-i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}