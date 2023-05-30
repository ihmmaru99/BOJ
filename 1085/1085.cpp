#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    int x_min = min(x, w-x);
    int y_min = min(y, h-y);
    cout << min(x_min, y_min);
    return 0;
}