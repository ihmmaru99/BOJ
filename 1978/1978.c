#include <stdio.h>
int main(){
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int a;
        int count = 0;
        scanf("%d", &a);
        for(int i=1; i<=a; i++){
            if(a%i==0)
                count++;
        }
        if(count == 2)
            cnt++;
    }
    printf("%d\n", cnt);
    
    return 0;
}