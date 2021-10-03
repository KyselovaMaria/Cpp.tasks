#include <iostream>
#include <cmath>
using namespace std;

double max(double x){
    int res=0;
    if (x > 0)
        return x;
    else 
        return res;
}

double derivative_max(double x){
    int res=0;
    return res;
    }

int main(){
    double x;
    cout << "x=" ;
    cin >> x;
    cout <<"max(0,x) = " << max(x)<< endl;
    cout <<"derivative_max(0,x) = " << derivative_max(x)<< endl;
    return 0;
}
