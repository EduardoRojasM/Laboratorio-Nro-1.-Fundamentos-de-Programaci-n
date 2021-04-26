/*Problema 12
La secuencia de números de triángulos se genera sumando los números naturales. Entonces, el séptimo número 
de triángulo sería 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. Los primeros diez términos serían:
1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
Enumeremos los factores de los primeros siete números de triángulos:
 1 : 1
 3 : 1,3
 6 : 1,2,3,6
10 : 1,2,5,10
15 : 1,3,5,15
21 : 1,3,7,21
28 : 1,2, 4,7,14,28
Podemos ver que 28 es el primer número de triángulo que tiene más de cinco divisores.
¿Cuál es el valor del primer número de triángulo que tiene más de quinientos divisores?*/

#include <iostream>
using namespace std;

int numfac(int n)
{
	int nf = 1;
	for (int pf = 2; pf <= n; pf++) {
		int comb = 1;
		for (; n % pf == 0; n /= pf, comb++);
		nf *= comb;
	}
	return nf;
}

int main()
{
	for (int n = 1, tri = 1;; n++, tri += n)
		if (numfac(tri) > 500) {
			cout << tri << "\n";
			break;
		}
}
