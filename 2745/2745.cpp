#include <iostream>

using namespace std;

int main(){
    string n;
    int b;
    cin >> n >> b;
    long long cnt = 0;
    for(int i=0; i<n.size(); i++){
        int result;
        if(n[i] >=65 && n[i] <= 90){
            result = n[i] - 55;
        }
        else{
            result = n[i] - 48;
        }
        cnt *= b;
        cnt += result;
    }
    cout << cnt;
}