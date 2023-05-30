#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<char> result;
    int n;
    int b;
    char c;
    cin >> n >> b;
    while(n != 0){
        int a = n % b;
        n /= b;
        if(a >=10 && a < b)
            result.push(a+55);
        else
            result.push(a+48);
    }
    while(!result.empty()){
        cout << result.top();
        result.pop();
    }
}