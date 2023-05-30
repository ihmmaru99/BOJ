#include <iostream>

using namespace std;

int main(){
    string s = "";
    int n;
    cin >> n;
    for(int i=0; i<n/4; i++){
        s += "long ";
    }
    s += "int";
    cout << s;
}