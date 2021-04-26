/*Problema 4
Un n�mero palindr�mico se lee igual en ambos sentidos. El pal�ndromo m�s grande 
hecho del producto de dos n�meros de 2 d�gitos es 9009 = 91 � 99.
Encuentra el pal�ndromo m�s grande formado por el producto de dos n�meros de 3 d�gitos.*/

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
