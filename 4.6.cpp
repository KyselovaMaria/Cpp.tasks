#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double num = sqrt(2);
    int n; 
    cin >> n;
    if (n>0){
        for (int i=1; i<n; i++) {
            num = sqrt(2 + num);
        }
    cout << "res = "<< num << endl;
    }
    else{
        cout << "no result " <<endl;
    }
    return 0;
}