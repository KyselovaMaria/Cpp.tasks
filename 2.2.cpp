#include <iostream>
#include <cmath>
using namespace std;

double hyp (double a, double b) {
    return sqrt(pow(a,2)+pow(b,2));

}


int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("c=%lf",hyp(a,b));
    
    return 0;
}