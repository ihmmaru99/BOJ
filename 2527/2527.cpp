#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x1_s, y1_s, x1_e, y1_e, x2_s, y2_s, x2_e, y2_e;
    int xr, xl, yt, yb, xd, yd;
    for(int i=0; i<4; i++){
        cin >> x1_s >> y1_s >> x1_e >> y1_e >> x2_s >> y2_s >> x2_e >> y2_e;
        xr = min(x1_e, x2_e);
        xl = max(x1_s, x2_s);
        yt = min(y1_e, y2_e);
        yb = max(y1_s, y2_s);

        xd = xr - xl;
        yd = yt - yb;

        if(xd > 0 && yd > 0)
            cout << 'a' << '\n';
        else if(xd < 0 || yd < 0)
            cout << 'd' << '\n';
        else if(xd == 0 && yd == 0)
            cout << 'c' << '\n';
        else
            cout << 'b' << '\n';
    }
    return 0;
}