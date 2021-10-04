#include <bits/stdc++.h>
using namespace std;

void findRoots(double a, double b, double c)
{
    
  int d = b * b - 4 * a * c;
  if (a==0 && b!=0) {
    cout << "The equation is not quadratic \n";
    cout << "1 solution " << endl;
    cout << -c/b;
    return;
 
  }
  else if  (a==0 && b==0){
    cout<<"Not a valid equation \n";
    cout << "no solutions" << endl;
  }

  else if (a!=0) {
      if (d > 0) {
          cout << "2 solutions " << endl;
          cout << (double)(-b + sqrt(d)) / (2 * a) << "\n"
          << (double)(-b - sqrt(d)) / (2 * a);
      }
      else if (d == 0) {
          cout << "1 solution " << endl;
          cout << -(double)b / (2 * a);
      }
      else 
      cout << "Roots are complex \n";
      }
   } 
int main()
{
  double a, b, c;
  cin >> a >> b >> c;
  findRoots(a, b, c);
  return 0;
}