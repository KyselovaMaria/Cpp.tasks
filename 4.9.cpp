#include <iostream>
#include <cmath>
using namespace std;

float myf(int n){
    int r=0, result = 1;
    while (result <= n){
        result *= 2;
        r += 1;
    }
    cout<<"2^"<<r<<"\n";    
    return pow(2,r);
    //cout<<"2^"<<r;
}

int main() {
    int n;
    cin >> n;
    cout <<"Result = "<< myf(n) << endl;
    return 0;
}