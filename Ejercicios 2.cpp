/*Problema 2
Cada nuevo término de la secuencia de Fibonacci se genera sumando 
los dos términos anteriores. Al comenzar con 1 y 2, los primeros 10 términos serán:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

Al considerar los términos en la secuencia de Fibonacci cuyos valores
no exceden los cuatro millones, encuentre la suma de los términos pares.*/

#include <iostream>

using namespace std;

int main(){
	int n=4000000,x=0,y=1,z=1,t=0;
	
	while(n+1<=0);
	for(int i=1;i<n+1;i++){
		z = x + y;
		if (z%2==0 and z<4000000){
			t = t + z;
		}
		x = y;
		y = z;	
		}	
		cout<<"La suma de los valores menores a 4 millones y pares en la secuencia de fibonacci es: "<<t;
		return 0;
	}
	

	
