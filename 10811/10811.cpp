#include <iostream>
#include <algorithm>

using namespace std;

int num[101];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        num[i] = i;
    }
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        for(int j=0; j<=(b-a)/2; j++){
            swap(num[a+j], num[b-j]);
        }
    }
    for(int i=1; i<=n; i++){
        cout << num[i] << ' ';
    }
    return 0;
}