#include <bits/stdc++.h>
using namespace std;

void findRoots(double a, double b, double c)
{
  
  if (a == 0) {
    cout << "The equation is not quadratic \n";
    cout << -c/b;
    return;
	}

	int d = b * b - 4 * a * c;

	if (d > 0) {
		cout << "Roots are real and different \n";
		cout << (double)(-b + sqrt(d)) / (2 * a) << "\n"
			<< (double)(-b - sqrt(d)) / (2 * a);
	}
	else 
	{
		cout << "Roots are real and same \n";
		cout << -(double)b / (2 * a);
	}
	
}

int main()
{
	//int a = 3, b = 100, c = 2;
	double a, b, c;
        cin >> a >> b >> c;
	findRoots(a, b, c);
	return 0;
}

