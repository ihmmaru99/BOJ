#include <iostream>

using namespace std;

int main(){
    double A, B;
    cin >> A >> B;
    cout <<fixed;
    cout.precision(9);
    cout << A/B;
    cout.unsetf(ios::fixed);

    return 0;
}