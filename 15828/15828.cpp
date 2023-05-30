#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    int N;
    cin >> N;
    while(1){
        int a;
        cin >> a;
        if(a == -1)
            break;
        else if(a == 0){
            q.pop();
        }
        else{
            if(q.size() < N){
                q.push(a);
            }
        }
    }
    if(q.empty())
        cout << "empty";
    else{
        while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
        }
    }
    return 0;
}