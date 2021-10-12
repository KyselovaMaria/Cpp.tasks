#include <iostream>
#include <cmath>
using namespace std;

float clc(float x, float eps){
  float an = 1.0, i = 0, s = 0.0;
  while (fabs(an) > eps) {
    s += an;
    i += 1;
    an = pow(-1,i+1) * ((i*(i+1)) / 2) * pow(x,i-1);
  }
  return s;
}

int main() {
    cout <<"Result = "<< clc(0.2, 0.0001) << endl;
    return 0;
}