#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int* input(unsigned n)
{
    int* v = (int*)malloc(sizeof(int) * n);
    for (int i=0; i<n; i++)
    {
        cout<<"v["<<i+1<<"]"<<" = ";
        cin >> v[i];
    }
    return v;
}

int* substruct(int* a, int* b, int n)
{
    int* c = (int*) malloc(sizeof(int) * n);
    for (int i=0; i<n; i++)
    {
        c[i] = a[i] - b[i];
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    int *a, *b, *c;
    cout<<"Enter v1: \n";
    a = input(n);
    cout<<"Enter v2: \n";
    b = input(n);
    c = substruct(a,b,n);
    for (int i=0; i<n; i++) 
        cout<<"\nc["<<i+1<<"]"<<" = "<<c[i]; 
    free(a); 
    free(b); 
    free(c);
}