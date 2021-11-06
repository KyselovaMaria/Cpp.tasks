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

int sum(int a[N][N], int n, int m, int k) {
    int s = 0;
    if (k > 0) {
        for (int i = 0; i < n && i < m; i++)
            s += a[i + k][i];
    }
    else {
        for (int i = 0; i < n && i < m; i++)
            s += a[i][i - k];
    }
    return s;
}


int main()
{
    int n,m,k;
    cout<<"n = ";
    cin>>n;
    cout<<"m = ";
    cin>>m;
    cout<<"k = ";
    cin>>k;
    int a[N][N];
    input(a,n,m);
    //print(a,n,m);
    cout<<"Result:"<<sum(a,n,m,k);
    return 0;
} 