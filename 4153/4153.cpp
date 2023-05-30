#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int num[3];
    while(true){
        cin >> num[0] >> num[1] >> num[2];
        if(num[0] == 0 && num[1] == 0 && num[2] == 0){
            break;
        }
        sort(num, num+3);
        if(pow(num[2],2) == (pow(num[0],2) + pow(num[1],2))){
            cout << "right" << '\n';
        }
        else{
            cout << "wrong" << '\n';
        }
    }
}