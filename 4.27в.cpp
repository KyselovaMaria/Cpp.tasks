#include <iostream>
#include <cmath>
using namespace std;

float myFunction(float eps){
  float root, numerator, res;
  root = sqrt(2)/2;
  numerator= sqrt(2);
  res = root;
  while ((sqrt(2 + numerator)/2) > eps) {
    res = res * (sqrt(2 + numerator)/2);
    numerator = sqrt(2 + numerator);
  }  
  return res;
}
int main()
{
  //float eps = 0.9999999999999999;
  cout << "eps=" ;
  cin >> eps;
  cout <<"Approximation of 2/pi: " << myFunction(eps)<< endl;
  return 0;
}