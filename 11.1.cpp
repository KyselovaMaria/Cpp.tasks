#include <stdio.h>
#include <stdlib.h>

void input(double* a, int n){
    for(int i=0;i<n;++i){
        printf("a[%d]=",i);
        scanf("%lf",&a[i]);
    }
}

int writeFile(const char* fname, double* a, int n){
    FILE* file = fopen(fname, "wb");
    int res = fwrite(a, sizeof(*a), n, file);
    fclose(file);
    printf("Result=%d", res);
    return res;
}

int readFile(const char* fname, double* a){
    FILE* file = fopen(fname, "rb");
    double item;
    int k=0;
    while(!feof(file)){ //untill the end of file
        int res = fread(&item,sizeof(item),1,file);
        if(res!=1) 
            break;
        a[k++] = item;
    }
    fclose(file);
    return k;
}

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    double* array = (double*) malloc(n*sizeof(double));
    input(array,n);

    char filename[30];
    printf("file name: ");
    scanf("%s",filename);

    int res = writeFile(filename,array,n);
    if(res!=n){
        printf("Not all data were written");
    }
    else{
        double* array2 = (double*) malloc(n*sizeof(double));

        int m = readFile(filename,array2);
        printf("\n");
        for(int i=0;i<m-1;++i){
            printf("%lf, ",array2[i]);
        }
        printf("%lf",array2[m-1]);
        free(array2);
    }
    free(array);
}