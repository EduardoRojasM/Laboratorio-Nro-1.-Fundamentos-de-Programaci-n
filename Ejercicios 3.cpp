/*Problema 3
Los factores primos de 13195 son 5, 7, 13 y 29.
¿Cuál es el factor primo más grande del número 600 851 475 143?*/

#include <iostream>

using namespace std;

#include <stdio.h>

int main(){
	int  x=2, i=0;
	unsigned long long int n=600851475143;
	
	cout<<"Los factores primos de "<<n<<" son: ";
	
	while(n != 1){
		if (n % x == 0){
			if (x>i){
				i = x;
			}
			cout<<x<<"  ";
			n = n / x;
		}
		else{
			x = x + 1;
		}
	}
	cout<<endl<<"El mayor factor primo es: "<<i;
	
	return 0;
}
