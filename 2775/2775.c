#include <stdio.h>
int main(){
    int n;
    int a,b;
    int num[15][15] = {0};
    for(int i=0; i<15; i++){
        num[0][i] = i;
    }
    for(int i=1; i<15; i++){
        for(int j=1; j<15; j++){
            num[i][j] = num[i-1][j] + num[i][j-1];
        }
    }
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", num[a][b]);
    }
    return 0;
}