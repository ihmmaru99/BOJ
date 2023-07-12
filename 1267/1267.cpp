#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int y=0, m=0;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        y += (num/30 + 1) * 10;
        m += (num/60 + 1) * 15;
    }
    if(y == m)
        cout << "Y M " << y << '\n';
    else if(y > m)
        cout << "M " << m << '\n';
    else
        cout << "Y " << y << '\n';
    return 0;
}