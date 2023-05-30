#include <iostream>

using namespace std;

string s[16];

int main(){
    for(int i=0; i<5; i++){
        cin >> s[i];
    }
    for(int i=0; i<15; i++){
        for(int j=0; j<5; j++){
            if(i < s[j].size())
                cout << s[j][i];
        }
    }
    return 0;
}