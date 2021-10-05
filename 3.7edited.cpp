#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void findRoots(double a, double b, double c)
{
  float eps=1.19209e-07;
  double d = b * b - 4 * a * c;
  if (abs(a)<eps && abs(b)>eps) {
    cout << "The equation is not quadratic \n";
    cout << "1 solution " << endl;
    cout << -c/b;
    return;

  }
  else if  (abs(a)<eps && abs(b)<eps){
    cout<<"Not a valid equation \n";
    cout << "no solutions" << endl;
  }

  else if (abs(a)>eps) {
      if (d > 0) {
          cout << "2 solutions " << endl;
          cout << (double)(-b + sqrt(d)) / (2 * a) << "\n"
          << (double)(-b - sqrt(d)) / (2 * a);
      }
      else if (abs(d)<eps) {
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