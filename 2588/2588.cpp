#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int x, y, z;
    x = b / 100;
    y = (b / 10) % 10;
    z = b % 10;
    cout << a*z << '\n';
    cout << a*y << '\n';
    cout << a*x << '\n';
    cout << a*b << '\n';

    return 0;
}