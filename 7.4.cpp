#include <iostream>
#define N 5

int main(){
    int mas[N], max = 0;
    
    for (int i=0; i<N; i++){
        printf("a[%d]=", i);
        scanf("%d", &mas[i]);
    }
    for (int i=0; i<N; i++){
        if(mas[i]>max) 
            max=mas[i];
    }
    printf("Max element = %d",max);
}