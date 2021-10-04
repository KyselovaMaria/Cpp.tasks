#include <iostream>
#include <cmath>
using namespace std;

void f(float a,float b,float c) {
    int min = a;
    int max = a;

    if (abs(b) < min) {
        min = abs(b);
    }
    if (abs(c) < min) {
        min = abs(c);
    }

    if (abs(b) > max) {
        max = abs(b);
    }
    if (abs(c) > max) {
        max = abs(c);
    }
    cout << "Max module: " << max << endl;
    cout << "Min module: " << min << endl;

   }


int main()
{
    float a,b,c;
    cout << "a=" ;
    cin >> a;
    cout << "b=" ;
    cin >> b;
    cout << "c=" ;
    cin >> c;
    f(a,b,c);
    return 0;
} 