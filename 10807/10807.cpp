#include <iostream>

using namespace std;

int main(){
    int num[100];
    int N, v;
    int cnt = 0;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num[i];
    }
    cin >> v;
    for(int i=0; i<N; i++){
        if(v == num[i])
            cnt++;
    }
    cout << cnt;
}