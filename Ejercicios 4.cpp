/*Problema 4
Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande 
hecho del producto de dos números de 2 dígitos es 9009 = 91 × 99.
Encuentra el palíndromo más grande formado por el producto de dos números de 3 dígitos.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	for (int n = 999; n --> 100;) {
		int p = n * 1000 + (n % 10) * 100 + (n % 100 / 10) * 10 + n / 100;
		double limit = sqrt((double)p);
		for (int m = 999; m >= limit; m--) {
			if (p % m == 0) {
				cout<<p;
				return 0;
			}
		}
	}
}
