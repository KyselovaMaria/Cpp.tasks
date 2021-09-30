#include <stdio.h>
#include <math.h>

int main() {
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
    printf("b)\n");
    printf(" x  |  %d   |  %d   |  %d   |  %d   |  %d   |\n", x1, x2, x3, x4, x5);
    double f1 = sqrt(x1), f2 = sqrt(x2), f3 = sqrt(x3), f4 = sqrt(x4), f5 = sqrt(x5);
    printf("----|------|------|------|------|------|\n");
    printf("F(x)| %.2lf | %.2lf | %.2lf | %.2lf | %.2lf |\n", f1, f2, f3, f4, f5);
    return 0;
}