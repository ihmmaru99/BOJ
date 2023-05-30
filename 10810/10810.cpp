#include <iostream>

using namespace std;

int num[101];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        for(int j=a; j<=b; j++){
            num[j] = c;
        }
    }
    for(int i=1; i<=n; i++){
        cout << num[i] << ' ';
    }
    return 0;
}