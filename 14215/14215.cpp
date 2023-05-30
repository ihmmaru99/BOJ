#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    sort(num, num+3);
    if(num[2] >= num[0]+num[1]){
        num[2] = (num[0]+num[1]-1);
    }
    cout << accumulate(begin(num), end(num), 0);
}