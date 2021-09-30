#include <stdio.h>
 
int main() 
{
    double m1, m2, r, G, F;
    scanf("%lf",&m1);
    scanf("%lf",&m2);
    scanf("%lf",&r);
    G=6.673*1e-11;
    F=G*((m1*m2)/r*r);   
    printf( "%e",F);
    }