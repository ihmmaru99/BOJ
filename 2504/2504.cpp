#include <iostream>
#include <stack>

using namespace std;

stack<char> st;

int main(){
    string s;
    cin >> s;
    int answer = 0, temp = 1;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            temp *= 2;
            st.push(s[i]);
        }
        else if(s[i] == '['){
            temp *= 3;
            st.push('[');
        }
        else if(s[i] == ')'){
            if(st.empty() || st.top() != '('){
                answer = 0;
                break;
            }
            if(s[i-1] == '('){
                answer += temp;
                temp /= 2;
                st.pop();
            }
            else{
                temp /= 2;
                st.pop();
            }
        }
        else if(s[i] == ']'){
            if(st.empty() || st.top() != '['){
                answer = 0;
                break;
            }
            if(s[i-1] == '['){
                answer += temp;
                temp /= 3;
                st.pop();
            }
            else{
                temp /= 3;
                st.pop();
            }
        }
    }
    if(!st.empty())
        answer = 0;
    cout << answer << '\n';
    return 0;
}