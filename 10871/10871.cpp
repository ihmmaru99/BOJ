#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int n, x;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(int i=0; i<n; i++){
        if(v[i] < x){
            cout << v[i] << ' ';
        }
    }
}