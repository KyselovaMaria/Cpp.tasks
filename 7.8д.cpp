#include <iostream>

using namespace std;

const int N = 4;

bool is_cube(int n) {
    int i = 1;
    while (i*i*i < n) {
        i++;
    }
    if (i*i*i == n)
        return true;
    else
        return false;
}

int main() {
    int count = 0;
    int l[] = {5, 27, 729, 55};
    for (int i = 0; i < N; i++)
        if ((l[i] % 3 == 0) && (is_cube(l[i])))
            count++;
    cout << count << endl;
    return 0;
}
