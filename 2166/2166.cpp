#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<pair<int,int>> v;
    cin >> n;
    double result = 0;
    while(n--){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    int x1 = v[0].first;
    int y1 = v[0].second;
    for(int i=1; i<v.size()-1; i++){
        double x2 = v[i].first;
        double y2 = v[i].second;
        double x3 = v[i+1].first;
        double y3 = v[i+1].second;
        result += ((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1))/2;
    }
    cout << fixed;
    cout.precision(1);
    cout << abs(result) << '\n';
}