#include <iostream>
using namespace std;

int main(){
 int n, k, f, f1, f2;
 cin >> n;
 f1 = 1; f2 = 1;
 for (k = 2; k <= n; k++){
 f = f1 + f2;
 f2 = f1;
 f1 = f;
 }
 cout << f1 <<'\n';
}