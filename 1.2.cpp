#include <iostream>
#include <cmath>
int main() {
    float a,b,c,d,e,f;
    double a1,b1,c1,d1,e1,f1;
    long double a2,b2,c2,d2,e2,f2;
    a=10e-4;
    b=24.33e5;;
    c=M_PI;
    d=exp(1);
    e=sqrt(5);
    f=log(100);
    a1=10e-4;
    b1=24.33e5;;
    c1=M_PI;
    d1=exp(1);
    e1=sqrt(5);
    f1=log(100);
    a2=10e-4;
    b2=24.33e5;;
    c2=M_PI;
    d2=exp(1);
    e2=sqrt(5);
    f2=log(100);
    printf ("%f\n %f\n %f\n %f\n %f\n %f\n",a,b,c,d,e,f);
    printf ("%lf\n %lf\n %lf\n %lf\n %lf\n %lf\n",a1,b1,c1,d1,e1,f1);
    printf ("%Lf\n %Lf\n %Lf\n %Lf\n %Lf\n %Lf\n",a2,b2,c2,d2,e2,f2);
    return 0;
}