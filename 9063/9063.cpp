#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    vector<int> x;
    vector<int> y;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    int min_x = *min_element(x.begin(), x.end());
    int max_x = *max_element(x.begin(), x.end());
    int min_y = *min_element(y.begin(), y.end());
    int max_y = *max_element(y.begin(), y.end());
    cout << (max_x-min_x) * (max_y - min_y);
}