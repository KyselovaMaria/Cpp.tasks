#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
#define N 80



typedef struct {
    char name[N];
    int height;
} Peak;


void print(Peak a) {
    printf("Mountain: %s, height: %d\n", a.name, a.height);
}


void print_array(Peak arr[], int n) {
    for (int i = 0; i < n; i++)
        print(arr[i]);
}


Peak input() {
    Peak a;
    scanf("%79s %d", a.name, &a.height);
    return a;
}

void highest_peak(Peak arr[], int n, char* result) {
    int m = 0;
    int max_height = arr[0].height;
    for (int i = 1; i < n; i++) {
        if (arr[i].height > max_height) {
            max_height = arr[i].height;
            m = i;
        }
    }
    strcpy(result, arr[m].name);
}


int peak_height(Peak arr[], int n, char* name) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].name, name) == 0)
            return arr[i].height;
        
    }
    return -1;
}


int main() {
  
    Peak p[N], highest_m;
    char name[N];
    unsigned n;
    printf("n = ");
    scanf("%d", &n);
    for (unsigned i = 0; i<n; i++) {
        cout<<"Mountain "<<i+1<<":";
        p[i] = input();
        
    }
    
    char highest_peak_name[N];
    highest_peak(p, n, highest_peak_name);
    printf("Highest peak: %s\n", highest_peak_name); 
    printf("Enter name of Mountain: ");
    scanf("%79s", name);
    int height = peak_height(p, n, name);
    if (height!= -1)
        printf("Height of %s: %d\n", name, height);
    else
        printf("Nothing found");
    return 0;
}
