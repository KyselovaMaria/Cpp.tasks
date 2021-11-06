#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;


int input(int** a) {
    *a = (int*) malloc(0 * sizeof **a);
    int n = 0;
    if (*a) {
        while (n < 100) {
            int m;
            cout << ("Enter an ellement: ");
            cin >> m;
            if (m == 0)
                break;
            n++;
            *a = (int*) realloc(*a, n * sizeof **a);
            if (*a == NULL)
                exit(1);
            (*a)[n - 1] = m;
        }
    }
    return n;
}

void num_elem(int* a, int n) {
    int k = 0;
    for (int i = 0; i <= n; i++)
        k += 1;
    cout<<k;
}


int num_squares(int* a, int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        double sq = sqrt(a[i]);
        if (sq == floor(sq))
            k += 1;
    }
    return k;
}


int num_cubes(int* a, int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        double cb = cbrt(a[i]);
        if (cb == floor(cb))
            k += 1;
    }
    return k;
}


int main() {
    int* a;
    int n = input(&a);
    cout<<"Number of ellements: ";
    num_elem(a, n);
    cout <<"\nNumber of full squares: "<<num_squares(a, n) << endl;
    cout <<"Number of full cubes: "<<num_cubes(a, n) << endl;
    free(a);
    return 0;
}