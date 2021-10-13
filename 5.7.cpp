#include <iostream>
#include <cmath>
using namespace std;

float sum(int n){
  float a1 = 0, a2 = 1, ak, b1 = 1, b2 = 0, bk, s=6;
  for (int k = 3; k <= n; k++){
    bk = b2 + a2;
    ak = a2/k + a1*bk;
    s = s + pow(2,k) / (ak+bk);
    a1 = a2;
    a2 = ak;
    b1 = b2;
    b2 = bk;
    } 
  
  return s;
}

int main() {
    cout <<"Result = "<< sum(3) << endl;
    return 0;
}