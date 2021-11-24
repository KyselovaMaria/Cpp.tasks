#include <iostream>
#include <cstdlib>
#include <string>
#define N 1000
using namespace std;

int main() {
    char str[11];
    unsigned n=0, mas[N];
    unsigned long long sum=0L;
    cout<<"Enter a string: ";
    while (cin.get(str,11)){
        mas[n]=atoi(str);
        sum+=mas[n];
        n++;
        
    }
    int i;
    for (i=0; i<n; i++) {
        cout<<"mas["<<i+1<<"]="<< mas[i]<<endl;
    }
    cout<<"s="<<sum<<"\n";
    return 0;
}