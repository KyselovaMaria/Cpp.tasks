#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;


int main() {
    int size;
    cout << ("Введіть кількість елементів: ");
    cin >> size;
    if (size > 0) {
        int* a = (int*) calloc(size, sizeof *a);
        if (a) {
            int sum = 0;
            for (int i = 0; i < size; i++) {
                cin >> a[i];
                sum += a[i] * a[i];
            }
            cout << sum << endl;
            free(a);
        }
    }
    return 0;
}