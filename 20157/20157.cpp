#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

map<pair<int,int>, int> m;
vector<pair<int,int>> v;

int check(int x, int y){
    while(y != 0){
        int temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int main(){
    int n, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        long double x, y;
        cin >> x >> y;
        int l = check(x,y);
        l = abs(l);
        m.insert({make_pair(y/l, x/l), m[make_pair(y/l, x/l)]++});
        v.push_back(make_pair(y/l, x/l));
    }
    for(int i=0; i<v.size(); i++){
        cnt = max(cnt, m[v[i]]);
    }
    cout << cnt << '\n';
    return 0;
}