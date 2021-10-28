#include <stdio.h>
#define N 4

int main() {
    int num[N] = {5, 112, 4, 3};
    int i;
    for (i = 1; i<=N; i++) {
        printf("%d ", num[N-i]);
    }
}