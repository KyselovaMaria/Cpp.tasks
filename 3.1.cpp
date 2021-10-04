#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int a, b, c, x;
   cout << "x=" ;
   cin >> x;
   if ( x<=999 ) {
       a = (x / 100)%10;
       b = (x / 10)%10;
       c = (x / 1)%10;
       cout << "Кількість одиниць = " << c <<endl;
       cout << "Кількість десятків = " << b <<endl;
       cout << "Кількість сотень = " << a <<endl;
       cout << "Сума цифр = " << a+b+c <<endl;
       cout << "Число, утворене при читанні заданого числа справа наліво = " << c*100 + b*10 + a <<endl;
   }
   return 0;

}