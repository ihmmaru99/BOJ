#include <iostream>

using namespace std;

int sum(int n){
    int result = n;
    while(n > 0){
        result += n % 10;
        n = n/10;
    }
    return result;
}

int main(){
    int num[100001] = {0, }, tmp;
    for(int i=0; i<10001; i++){
        tmp = sum(i);
        if(tmp < 10001)
            num[tmp] = 1;
    }
    for(int i=0; i<10001; i++){
        if(num[i] != 1)
            cout << i << '\n';
    }
}