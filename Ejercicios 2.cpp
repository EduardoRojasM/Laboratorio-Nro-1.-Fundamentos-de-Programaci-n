/*Problema 2
Cada nuevo t�rmino de la secuencia de Fibonacci se genera sumando 
los dos t�rminos anteriores. Al comenzar con 1 y 2, los primeros 10 t�rminos ser�n:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

Al considerar los t�rminos en la secuencia de Fibonacci cuyos valores
no exceden los cuatro millones, encuentre la suma de los t�rminos pares.*/

#include<iostream>
using namespace std;

int main(){
  const unsigned MAX=4000000;

	unsigned sum=0;
	unsigned a=1;
	unsigned b=1;

	while(b<MAX){
		a+=b;
		b+=a;
		if((a%2==0)and(a<MAX))
			sum+=a;
		else if((b%2==0)and(b<MAX))
			sum+=b;
	}

	cout<<sum;
	return 0;
}
	

	
