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

int ChangeEl(int a[N][N], int n, int m) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (a[i][j] == m)
                a[i][j] = n;
        }
    }
    return 0;
}

int main() {
    
    int n,m;
    int a[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << "Enter n:"; cin >> n;
    cout << "Enter m:"; cin >> m;
    ChangeEl(a, n, m);
    cout<<"Result: \n";
    Print(a);
}