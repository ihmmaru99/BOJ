#include <iostream>
#include <deque>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int a;
    int result;
    deque<int> dq;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s == "push_back"){
            cin >> a;
            dq.push_back(a);
        }
        else if(s == "push_front"){
            cin >> a;
            dq.push_front(a);
        }
        else if(s == "front"){
            if(!dq.empty()){
                result = dq.front();
                cout << result << '\n';
            }
            else{
                cout << "-1" << '\n';
            }
        }
        else if(s == "pop_front"){
            if(!dq.empty()){
                result = dq.front();
                cout << result << '\n';
                dq.pop_front();
            }
            else{
                cout << "-1" << '\n';
            }
        }
        else if(s == "pop_back"){
            if(!dq.empty()){
                result = dq.back();
                cout << result << '\n';
                dq.pop_back();
            }
            else{
                cout << "-1" << '\n';
            }
        }
        else if(s == "back"){
            if(!dq.empty()){
                result = dq.back();
                cout << result << '\n';
            }
            else{
                cout << "-1" << '\n';
            }
        }
        else if(s == "size"){
            result = dq.size();
            cout << result << '\n';
        }
        else if(s == "empty"){
            if(!dq.empty()){
                cout << '0' << '\n';
            }
            else{
                cout << '1' << '\n';
            }
        }
    }
}