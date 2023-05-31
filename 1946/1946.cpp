#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int t, n;
vector<pair<int,int>> v;

int main(){
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(), v.end());
        int check = v.front().second;
        int cnt = 1;
        for(int j=1; j<v.size(); j++){
            if(check > v[j].second){
                check = v[j].second;
                cnt++;
            }
        }
        cout << cnt << '\n';
        v.clear();
    }
    return 0;
}