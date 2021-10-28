#include <stdio.h>
#define N 20

int Input(double mas[], int size){
    for (int i=0; i<size; i++){
        printf("mas[%d]=", i);
        scanf("%lf", &mas[i]);
    }
    return 0;
}

int Output(const double mas[], int size){
    for (int i=0; i<size; ++i){
        printf("mas[%d]=%lf \n", i, mas[i]);
    }
    return 0;
}

void Sum(double mas1[], double mas2[], double add[], unsigned n) {
    for (unsigned i=0; i<n; i++) {
        add[i] = mas1[i]+mas2[i];
    }
}


double Multiple(double mas1[N], double mas2[N], unsigned n) {
    double res = 0;
    for (unsigned i=0; i<n; i++) {
        res += mas1[i]*mas2[i];
    }
    return res;
}


int main() {
    double mas1[N], mas2[N], add[N];
    unsigned n;
    printf("n = ");
    scanf("%d", &n);
    printf("Enter coordinates of the first vector: \n");
    Input(mas1, n);
    printf("Enter coordinates of the second vector: \n");
    Input(mas2, n);
    printf("Sum of vectors: \n");
    Sum(mas1, mas2, add, n);
    Output(add, n);
    printf("Scalar multiplication of vectors: %g", Multiple(mas1, mas2, n));
}