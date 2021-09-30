#include <stdio.h>
#include <math.h>
int main(){
    float a, b;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
    scanf("%f", &b);
    printf("|a-b|=%f\n", abs(a-b));
    printf("a*b=%f\n", a*b);
    return 0;
}