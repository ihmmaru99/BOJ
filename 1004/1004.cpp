#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int n;
        cin >> n;
        int cnt_out=0, cnt_in=0;
        for(int j=0; j<n; j++){
            int cx, cy, r;
            cin >> cx >> cy >> r;
            if((cx-x1)*(cx-x1) + (cy-y1)*(cy-y1) < r * r){
                if((cx-x2)*(cx-x2)+(cy-y2)*(cy-y2) > r * r){
                    cnt_out++;
                }
            }
            if((cx-x1)*(cx-x1) + (cy-y1)*(cy-y1) > r * r){
                if((cx-x2)*(cx-x2)+(cy-y2)*(cy-y2) < r * r){
                    cnt_in++;
                }
            }
        }
        cout << cnt_in + cnt_out << '\n';
    }
}