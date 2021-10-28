#include <stdio.h>
#include<math.h>
#define N 5

int Odd(int a[], unsigned n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] & 1)
            s += a[i];
    }
    return s;
}

int Even(int a[], unsigned n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (!(a[i] & 1))
            s += a[i];
    }
    return s;
}


int main() {
    int a[N];
    for (int i=0; i<N; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Sum of odd elements = %d", Odd(a, N));
    printf("\nSum of even elements = %d", Even(a, N));
}