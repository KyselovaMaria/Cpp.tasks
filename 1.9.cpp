#include <iostream>
#include <string>
#include <cmath>

int main()
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    printf("Середнє арифметичне =%f",(x+y)/2);
    printf("\nСереднє гармонічне =%f",2/(1/x + 1/y));
    printf("\nСереднє арифметичне в науковому представленні =%e",(x+y)/2);
    printf("\nСереднє гармонічне в науковому представленні =%e",2/(1/x + 1/y));
}