#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int sum = 0;
    double x;
    int n;
    cin >> x >> n;
    for (int i=0; i<n; i++) {
        sum = sum + i*pow(x,i);
    }
    cout << "sum = "<< sum << endl;
    return 0;
}