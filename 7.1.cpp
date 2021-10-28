#include <stdio.h>
#define N 5

int main(){
    
    int mas[]={5,6,23,4,75};
    double x;
    int count=0;
    printf("x: ");
    scanf("%lf",&x);
    for(int i=0;i<N;i++){
        if(mas[i]<x) 
            count++;
    }
    printf("Кількість чисел в масиві менших за х: %d",count);
}