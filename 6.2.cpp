#include <iostream>
using namespace std;

int main(){
    int n, k;
    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;
    n = n | (1<<k);
    cout << "Result = " << n;
}