#include <iostream>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<>> pq;

int main(){
    int n, num, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> num;
        pq.push(num);
    }
    while(pq.size() != 1){
        int x, y;
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        int sum = x + y;
        cnt += sum;
        pq.push(sum);
    }
    cout << cnt;
    return 0;
}