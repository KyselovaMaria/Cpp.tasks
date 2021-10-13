#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    int m, k=0; 
    cout << "m=" ;
    cin >> m;
    while (pow(4, k) <= m) { 
        k++; 
    } 
    k--; 
    cout << "k = "<< k << endl;
    return 0;
} 
