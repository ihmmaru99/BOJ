#include <iostream>
#include <deque>

using namespace std;

int main(){
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
                dq.pop_front();
            }
            else{
                cout << "-1" << '\n';
            }
        }
        else if(s == "back"){
            if(!dq.empty()){
                result = dq.back();
                cout << result << '\n';
                dq.pop_back();
            }
            else{
                cout << "-1" << '\n';
            }
        }
        else if(s == "size"){
            cout << dq.size() << '\n';
        }
        else if(s == "empty"){
            if(!dq.empty()){
                cout << '1' << '\n';
            }
            else{
                cout << '0' << '\n';
            }
        }
    }
}