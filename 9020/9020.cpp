#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
    int temp;
    temp = sqrt(num);
    if (temp == 1 && num != 1){
        return true;
    }
    if(num%2){
        for(int i=2; i<=temp; i++){
            if(!(num%i))
                return false;
            if(i == temp){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int n;
        cin >> n;
        for(int j=n/2; j>=2; j--){
            if(isPrime(j) && isPrime(n-j)){
                cout << j << ' ' << n-j << '\n';
                break;
            }
        }
    }
}