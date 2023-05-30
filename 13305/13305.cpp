#include <iostream>
#include <vector>

using namespace std;

int dist[100000];
int cost[100000];

int main(){
    int n;
    cin >> n;
    long long cnt, now;
    for(int i=0; i<n-1; i++){
        int a;
        cin >> dist[i];
        
    }
    for(int i=0; i<n; i++){
        cin >> cost[i];
    }
    now = cost[0];
    cnt = now * dist[0];
    for(int i=1; i<n; i++){
        if(now > cost[i])
            now = cost[i];
        cnt += now * dist[i];
    }
    cout << cnt;
    return 0;
}