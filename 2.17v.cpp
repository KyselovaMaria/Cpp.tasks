#include <iostream>
#include <cmath>
using namespace std;

float softSign(float x) {
  float f;
  f = (x/(1+abs(x)));
  return f;
}

float derivative_softSign (float x){
    float f1;
    f1 = (1/((1+abs(x))*(1+abs(x))));
    return f1;
}

int main()
{
    float x;
    cout << "x=" ;
    cin >> x;
    cout << "softSign(x) = " << softSign(x) << endl;
    cout << "derivative_softSign(x) = " << derivative_softSign(x) << endl;
    return 0;
}