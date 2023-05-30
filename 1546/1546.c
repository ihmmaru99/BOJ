#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    float score[1000];
    float sum=0;
    float max = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &score[i]);
        if(max < score[i])
            max = score[i];
    }
    for(int i=0; i<n; i++){
        score[i] = score[i]/max*100;
        sum += score[i];
    }
    printf("%f", (float)sum/n);

    return 0;
}