#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main() {
    int a, b;
    cout << "a=" ;
    cin >> a;
    cout << "b=" ;
    cin >> b;
    if (a<b)
        cout << "a<b" << endl;
    else if (a>b)
        cout << "a>b" << endl;
    else
        cout << "Equal" << endl;
    return 0;
}