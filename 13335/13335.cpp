#include <iostream>
#include <queue>
#include <vector>

using namespace std;
vector<int> v;
queue<int> q;

int main(){
    int n, w, L;
    cin >> n >> w >> L;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int time = 0, total = 0;
    for(int i=0; i<n; i++){
        while(1){
            if(q.size() == w){
                total -= q.front();
                q.pop();
            }
            if(total + v[i] <= L)
                break;
            q.push(0);
            time++;
        }
        q.push(v[i]);
        total += v[i];
        time++;
    }
    cout << time + w;
    return 0;
}