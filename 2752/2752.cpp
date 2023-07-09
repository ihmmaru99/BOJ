#include <iostream>
#include <algorithm>

using namespace std;

int num[3];

int main(){
    cin >> num[0] >> num[1] >> num[2];
    sort(num, num+3);
    cout << num[0] << ' ' << num[1] << ' ' << num[2] << '\n';

}