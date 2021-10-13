#include <iostream>
using namespace std;
int main()
{
    int x1=-99,x2=-99,x3=-99,x;
    int k;
    cout << "k=" ;
    cin >> k;
    while(x3<0){
        x = x1 + x3 + 100;
        k++;
        x1 = x2;
        x2 = x3;
        x3 = x;
    }
    printf("The smallest positive member of the sequence is x(%d)=%d",k,x3);
}