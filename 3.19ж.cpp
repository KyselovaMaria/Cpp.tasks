#include <iostream>
#include <cmath>
using namespace std;

float one(float x,float y,float z) {
  int res=1;
  if ((x<1001 && y>1001 && z>1001)||(x>1001 && y<1001 && z>1001)||(x>1001 && y>1001 && z<1001)){
      return res;
  }
  else
      return 0;
}
    

int main()
{
    float x,y,z;
    cout << "x=" ;
    cin >> x;
    cout << "y=" ;
    cin >> y;
    cout << "z=" ;
    cin >> z;
    cout << one(x,y,z) << endl;
    return 0;
}