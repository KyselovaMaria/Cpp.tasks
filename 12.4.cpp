#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cmath>
using namespace std;

const char* f1_name = "inp.txt";
const char* f2_name = "out.txt";

int main() {
    unsigned n;
    cin >> n;
    int* arr = (int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++){
        cout << i+1 << ": ";
        cin >> arr[i];
    }

    ifstream f1;
    f1.open(f1_name);
    //if(!f1){
    //    cout << "Couldn`t open ";
    //    return -1;
    //}

    double* x = (double*)malloc(sizeof(double)*n);
    for(int i=0;i<n;i++){
        if(f1.eof()){
            cout << "Not enough elements";
            return -2;
        }

        f1 >> x[i];
    }
    f1.close();
    ofstream f2;
    f2.open(f2_name);
    for(int i=0;i<n;i++){
        f2 << pow(x[i], arr[i]) << endl;
    }
    f2.close();
    
}