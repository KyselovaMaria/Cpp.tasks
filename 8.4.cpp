#include <iostream>
#include <cstdio>
using namespace std;

const int N=25 ;

void input(int a[N][N], unsigned n, unsigned m){
    for(int i=0; i<n; ++i){
        printf("Рядок %d : ",i);
        for(int j=0; j<m; ++j){
            scanf(" %d", &a[i][j]);
        }
    }
}

void print(int a[N][N], unsigned n, unsigned m){
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cout << a[i][j] <<" "; 
        }
        cout<<endl; 
    }
}

int main() {
    int n,m;
    int a[N][N];
    cout<<"n = ";
    cin>>n;
    cout<<"m = ";
    cin>>m;
    input(a, n, m);
    print(a, n, m);

}