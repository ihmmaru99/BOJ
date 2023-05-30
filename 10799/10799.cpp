#include <iostream>
#include <stack>

using namespace std;
stack<char> st;

int main(){
    string s;
    cin >> s;
    int total = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(')
            st.push(s[i]);
        else if(s[i] == ')' && s[i-1] == '('){
            st.pop();
            total += st.size();
        }
        else{
            total++;
            st.pop();
        }
    }
    cout << total << '\n';
}