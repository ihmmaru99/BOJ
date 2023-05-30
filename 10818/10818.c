#include <stdio.h>
int main(){
    int n;
    int num;
    int min = 10000001;
    int max = -10000001;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        if(max < num)
            max = num;
        if(min > num)
            min = num;
    }   
    printf("%d %d", min, max);

    return 0;
}