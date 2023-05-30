#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> a;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M;
    cin >> N;
    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cin >> M;
    for(int i=0; i<M; i++){
        int y;
        cin >> y;
        if(binary_search(a.begin(), a.end(), y) == true)
            cout << "1" << '\n';
        else
            cout << "0" << '\n';
    }
}