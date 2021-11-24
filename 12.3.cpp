#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    unsigned n;
    cout << "n = ";
    cin >> n;
    cout.precision(3);
    for (int i=1; i<=n; i++) {
        cout<<"++++++";
    }
    cout<<endl;
    for (int i=1; i<=1; i++) {
        cout <<setw(3) <<i;
        cout<<" ";
    }
    for (int i=2; i<=n; i++) {
        cout <<setw(6) <<i;
    }
    cout << endl;
    for (int i=1; i<=n; i++) {
       
        cout<<"++++++";
    }
    cout<<endl;
    for (int i=1; i<=1; i++) {
        cout <<setw(3) <<sqrt(i);
        cout<<" ";
    }
    for (int i=2; i<=n; i++) {
       
        cout << setw(6) << sqrt(i);
    }
}