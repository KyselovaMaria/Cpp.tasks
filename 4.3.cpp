#include <iostream>
#include <cstdio>
using namespace std;


double clc(int n,double x) {
    double res, dod;
    res = 1;
    dod = 1;
    for (int i = 0; i < n; i++) {
        dod *= x;
        res += dod;
    }
    return res;
}

int main() {
    cout <<"Result = "<< clc(3, 2) << endl;
    return 0;
}
