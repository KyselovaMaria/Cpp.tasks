#include <iostream>
#include <cstdio>
using namespace std;

#define N 3

void Print(int a[N][N]) {
    int i,j;
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            cout << a[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void ReplaceEl(int a[N][N], int i, int j, int b) {
    a[i][j] = b;
}

int main() {
    
    int i,j,b;
    int a[N][N] = {{1, 2,3,}, {4,5,6}, {7,8,9} };
    cout << "Enter i:"; cin >> i;
    cout << "Enter j:"; cin >> j;
    cout << "Enter b:"; cin >> b;
    Print(a);
    ReplaceEl(a, i-1, j-1, b);
    cout<<"Result: \n";
    Print(a);
}