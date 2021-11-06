#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;


int** Create(int n) {
    int** a = (int**) malloc(n * sizeof *a);
    if (a == nullptr)
        exit(1);
    for (int i = 0; i < n; i++) {
        a[i] = (int*) calloc(n, sizeof **a);
        if (a[i] == nullptr)
            exit(1);
    }
    return a;
}


void Delete(int** a, int n) {
    for (int i = 0; i < n; i++)
        free(a[i]);
    free(a);
}


int** Input(int n) {
    int** a = Create(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<"matrix["<<i+1<<"]"<<"["<<j+1<<"] = ";  
            cin >> a[i][j];
        }
    }
    return a;
}


void Show(int** a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
    cout << endl;
}


int** Multiple(int** a, int** b, int n) {
    int** c = Create(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    return c;
}


int main() {
    int n;
    cout<<"n = ";
    cin >> n;
    int** a = Input(n);
    int** b = Input(n);
    int** c = Multiple(a, b, n);
    Show(c, n);
    return 0;
}

