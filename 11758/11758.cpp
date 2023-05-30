#include <iostream>

using namespace std;

int main(){
    int x1, x2, x3;
    int y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int result = x1*y2 + x3*y1 + x2*y3 - (x1*y3 + x2*y1 + x3*y2);
    if(result > 0){
        cout << "1";
    }
    else if(result == 0){
        cout << '0';
    }
    else{
        cout << "-1";
    }
}