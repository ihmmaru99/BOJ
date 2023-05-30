#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    int num = 0;
    for(int i=0; i<N; i++){
        num += v[i];
        cnt += num;
    }
    cout << cnt;
    return 0;
}