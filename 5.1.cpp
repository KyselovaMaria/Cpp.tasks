#include <iostream>
using namespace std;

int main()
{
    double n,s,a;
    cin >> a;
    n=1; s=0;
    while (s < a)
    {
        s+=1/n++;
    }
    printf("%f \n",s);
    return 0;
}
