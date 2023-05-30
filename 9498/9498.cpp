#include <iostream>

using namespace std;

int main(){
    int N;
    char result;
    cin >> N;
    if (N >= 90 && N <=100)
        result = 'A';
    else if (N >= 80)
        result = 'B';
    else if (N >= 70)
        result = 'C';
    else if (N >= 60)
        result = 'D';
    else
        result = 'F';
    cout << result;

    return 0;
}