#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
vector<int> v;

int main(){
    int N, M;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int check = M;
    int num = 0;
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            for(int k=j+1; k<v.size(); k++){
                int result = v[i] + v[j] + v[k];
                if(result <= M && check > M-result){
                    num = result;
                    check = M-result;
                }
            }
        }
    }
    cout << num << '\n';
}