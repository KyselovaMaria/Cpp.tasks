#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int main() {
    double x, res;
    int n;
    cout << "x=" ;
    cin >> x;
    cout << "n=" ;
    cin >> n;
    res = x;
    for (int i = 0; i < n; i++) {
        res = sin(res);
    }
    cout <<"Result = " << res << endl;
    return 0;
}
