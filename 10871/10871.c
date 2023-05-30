#include <stdio.h>
int main(){
    int n, num;
    scanf("%d %d", &n, &num);
    for(int i=1; i<=n; i++){
        int a;
        scanf("%d", &a);
        if(a<num)
            printf("%d ", a);
    }
    return 0;
}