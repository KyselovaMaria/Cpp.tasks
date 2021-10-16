#include <iostream>
using namespace std;

int main(){
    int m, j;
    cout << "m = ";
    cin >> m;
    cout << "j = ";
    cin >> j;
    m &= ~(1<<j);
    printf("%d", m);
    printf("\n%x", m);
    //cout << "Result = " << m;
}