#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    int num[101];
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        num[i] = i;
    }
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        swap(num[a], num[b]);
    }
    for(int i=1; i<=n; i++){
        cout << num[i] << ' ';
    }
    return 0;
}