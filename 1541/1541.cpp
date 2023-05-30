#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int check = 1;
    int cnt = 0, num = 0, minus = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            num *= 10;
            num += s[i] - '0';
        }
        else if(s[i] == '+' || s[i] == '-'){
            if(s[i] == '-'){
                if(check == 1){
                    cnt += num;
                    check *= -1;
                }
                else{
                    cnt -= num;
                }
            }
            else{
                if(check == 1)
                    cnt += num;
                else
                    cnt -= num;
            }
            num = 0;
        }
    }
    if(check == 1)
        cnt += num;
    else
        cnt -= num;
    cout << cnt;
    return 0;
}