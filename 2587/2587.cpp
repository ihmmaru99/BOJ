#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int middle = 2;
    int num[5];
    int sum = 0;
    for(int i=0; i<5; i++){
        cin >> num[i];
        sum += num[i];
    }
    sort(num, num+5);
    cout << sum/5 << '\n' << num[middle] << '\n';
    return 0;
}