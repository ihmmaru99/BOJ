#include <iostream>
#include <vector>

using namespace std;
vector<pair<int,int>> v;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    for(int i=0; i<v.size(); i++){
        int k = 1;
        for(int j=0; j<v.size(); j++){
            if(v[i].first < v[j].first && v[i].second < v[j].second)
                k++;
        }
        cout << k << ' ';
    }

}