#include <iostream>
#include <cstdio>
using namespace std;

const int N=25 ;

void print(int a[N][N], int n, int m) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << a[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void input(int a[N][N], int n, int m) {
    int i,j;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout<<"a["<<i+1<<"]"<<"["<<j+1<<"] = ";
            cin>>a[i][j];
        }
       
    }
}

void transp(int a[N][N], int n, int m) {
  
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            int x = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = x;
        }
    }
    
}


int main()
{
    int n,m;
    cout<<"n = ";
    cin>>n;
    cout<<"m = ";
    cin>>m;
    int a[N][N];
    input(a,n,m);
    //cout<<"Початкова матриця: \n" <<endl;
    //print(a,n,m);
    cout<<"Отримана матриця:"<<endl;
    transp(a,n,m);
    print(a,n,m);
    return 0;
} 