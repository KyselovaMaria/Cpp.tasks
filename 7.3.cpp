#include <stdio.h>
#include <math.h>
#define N 10

double Sum(double mas[N]){
    double sum = 0, e=M_E ;
    for(int i=0; i<N; i++){
        if(mas[i]> e)
            sum+= mas[i];
        
    }
    return sum;
}

int main(){
    double mas[N];
    for(int i=0;i<N;i++){
        printf("mas[%d]=", i);
        scanf("%lf",&mas[i]);
    }
    printf("Sum = %lf", Sum(mas));
}