#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    int result = 1 << n;
    cout << "2^n = " << result;
}