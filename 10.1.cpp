#include <iostream>
#include <cstdio>
using namespace std;


typedef struct {
    struct {
        int x, y;
    } p1, p2;
} Rectangle;


void print(Rectangle a) {
    cout << a.p1.x << "," << a.p1.y << endl <<
    a.p2.x << "," << a.p2.y << endl;
}


Rectangle input() {
    Rectangle a;
    cin >> a.p1.x >> a.p1.y >> a.p2.x >> a.p2.y;
    return a;
}


int main() {
    Rectangle t = input();
    print(t);
    return 0;
}