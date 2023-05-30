#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num[3];
    while(true){
        for(int i=0; i<3; i++){
            cin >> num[i];
        }
        sort(num, num+3);
        if(num[0]==0 && num[1]==0 && num[2]==0)
            break;
        if(num[2] >= num[0] + num[1])
            cout << "Invalid" << '\n';
        else if(num[0] == num[1] && num[1] == num[2]){
            cout << "Equilateral" << '\n';
        }
        else if(num[0] == num[1] || num[1] == num[2] || num[0] == num[2]){
            cout << "Isosceles" << '\n';
        }
        else{
            cout << "Scalene" << '\n';
        }
    }
    return 0;
}