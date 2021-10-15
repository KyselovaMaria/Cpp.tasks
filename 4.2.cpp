#include <iostream>
#include <cstdio>
using namespace std;


int main() {

    int i,n;
    int f = 1;
    cout << "n=" ;
    cin >> n;
    cout << "a) \n";
    cout << "n! = ";
    for (i = 1; i < n; i++) {
        cout << i << '*';
        f *= i;
    }
    f *= i;
    cout << i << " = " << f << endl;
    
    return 0;
}
