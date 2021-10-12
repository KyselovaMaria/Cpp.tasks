#include <iostream>
#include <cmath>
using namespace std;

double f1(double x, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(x,(i*i));
    }
    return sum;
}


int main() {
    cout << f1(2, 4) << endl;
    return 0;
}