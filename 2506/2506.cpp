#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main(){
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cnt++;
            v.push_back(i);
        }
    }
    if(cnt < k)
        cout << 0;
    else
        cout << v[k-1];
    return 0;
}