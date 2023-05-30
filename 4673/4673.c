#include <stdio.h>

int sum(int n){
    int sum = n;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    int arr[100001], i, check;
    for(i=1; i<=10000; i++){
        check = sum(i);
        if(check<=10000)
            arr[check] = 1;
    }
    for(i=1; i<=10000; i++){
        if(arr[i] != 1)
            printf("%d\n", i);
    }
    return 0;
}