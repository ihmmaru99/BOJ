#include <stdio.h>
int main(){
    int n, a;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        int score[1000];
        int sum = 0;
        for(int j=0; j<a; j++){
            scanf("%d", &score[j]);
            sum += score[j];
        }
        float avg = (float) sum/a;
        int cnt = 0;
        for(int k=0; k<a; k++){
            if(avg < score[k])
                cnt++;
        }
        printf("%.3f%%\n", (double)cnt*100/a);
    }
}