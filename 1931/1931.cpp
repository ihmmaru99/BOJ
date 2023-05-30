#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> v;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(), v.end());
    int cnt = 1;
    int count = v[0].first;
    for(int i=1; i<N; i++){
        if(count <= v[i].second){
            cnt++;
            count = v[i].first;
        }
    }
    cout << cnt;
    return 0;
}