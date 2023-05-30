#include <iostream>
#include <stack>

using namespace std;
stack<int> st;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        if(a != 0){
            st.push(a);
        }
        else{
            st.pop();
        }
    }
    int cnt = 0;
    while(!st.empty()){
        cnt += st.top();
        st.pop();
    }
    cout << cnt;
    return 0;
}