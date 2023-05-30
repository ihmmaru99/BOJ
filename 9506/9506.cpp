#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<int> yaksoo(int n){
    vector<int> result;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            result.push_back(i);
        }
    }
    return result;
}

int main(){
    while(true){
        int n;
        cin >> n;
        if(n == -1){
            break;
        }
        vector<int> v = yaksoo(n);
        int sum = accumulate(v.begin(), v.end(), 0);
        if(sum == n){
            cout << n << " = "; 
            for(int i=0; i<v.size()-1; i++){
                cout << v[i] << " + ";
            }
            cout << v[v.size()-1] << '\n';
        }
        else{
            cout << n << " is NOT perfect.\n";
        }
    }
}