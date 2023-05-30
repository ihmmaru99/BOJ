#include <iostream>
#include <stack>
#include <vector>

using namespace std;
vector<char> v;
stack<int> st;

int main(){
    int N;
    cin >> N;
    int cnt = 1;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        while(cnt <= a){
            st.push(cnt);
            v.push_back('+');
            cnt++;
        }
        if(st.top() == a){
            st.pop();
            v.push_back('-');
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << '\n';
    }
    return 0;
}