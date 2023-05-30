#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;
unordered_map<int, int> um;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        um[a]++;
    }
    int M;
    cin >> M;
    for(int i=0; i<M; i++){
        int b;
        cin >> b;
        cout << um[b] << ' ';
    }
}