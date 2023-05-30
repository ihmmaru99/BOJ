#include <stdio.h>
int main(){
    int n[9];
    int max = 0;
    int cnt = 0;
    for(int i=0; i<9; i++){
        scanf("%d", &n[i]);
    }
    for(int i=0; i<9; i++){
        if(max<n[i]){
            max = n[i];
            cnt = i;
        }
    }
    printf("%d\n%d", max, cnt+1);
    return 0;
}