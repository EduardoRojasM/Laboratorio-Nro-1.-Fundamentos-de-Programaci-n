/*Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13.
¿Cuál es el número primo 1001er?*/

#include <iostream>
#include <math.h>

using namespace std;

int curN = 0;
int primes[10000];

bool isPrime(int n);

int main()
{
	for (int n = 2;; n++) {
		if (isPrime(n)) {
			if (curN == 10000) {
				cout << n << endl;
				break;
			}
			primes[curN++] = n;
		}
	}
}

bool isPrime(int n)
{
	for (int p = 0; p < curN && primes[p] <= sqrt((double)n); p++)
		if (n % primes[p] == 0)
			return false;
	return true;
}
