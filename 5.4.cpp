#include <iostream>
#include <cmath>
using namespace std;

float dob(int n){
    float p = 1, pk, b = 1, bk, i=1;
    for (i = 1; i <=n; i++){
        bk = b* (1/i);
        b = bk;
        pk = p*(1+b);
        p = pk;
  }
    return p;
}

int main() {
    cout <<"Result = "<< dob(3) << endl;
    return 0;
}