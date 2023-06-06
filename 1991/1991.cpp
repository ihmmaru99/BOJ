#include <iostream>

#define MAX 50

using namespace std;

int map[MAX][2];

void preorder(int x){
    if(x == -1)
        return;
    cout << (char)(x+'A');
    preorder(map[x][0]);
    preorder(map[x][1]);
}

void inorder(int x){
    if(x == -1)
        return;
    inorder(map[x][0]);
    cout << (char)(x+'A');
    inorder(map[x][1]);
}

void postorder(int x){
    if(x == -1)
        return;
    postorder(map[x][0]);
    postorder(map[x][1]);
    cout << (char)(x+'A');
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char a, b, c;
        cin >> a >> b >> c;
        a = a-'A';
        if(b == '.')
            map[a][0] = -1;
        else
            map[a][0] = b-'A';
        if(c == '.')
            map[a][1] = -1;
        else
            map[a][1] = c-'A';
    }
    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);
    
    return 0;
}