#include <iostream>
#include <cmath>
using namespace std;

double square(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));

}


int main()
{
    double a, b, c;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("S=%lf",square(a, b, c));
    
    return 0;
}