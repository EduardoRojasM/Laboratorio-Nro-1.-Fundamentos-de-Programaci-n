/*Problema 5
2520 es el n�mero m�s peque�o que se puede dividir por cada uno de los n�meros del 1 al 10 sin ning�n resto.
�Cu�l es el n�mero positivo m�s peque�o que es divisible por todos los n�meros del 1 al 20?*/

#include <iostream>

using namespace std;

int main(){
	int x = 0; 
	int y = 19l;
	while(!x){
  		y += 1; x = 1;
  		for (int i = 1; i <= 20; i++){
    		if(y %i != 0){ 
				x = 0; 
				break; 
			}
  		}
	}
	cout<<"El numero positivo mas pequeno que es divisible por todos los numeros del 1 al 20 es: "<<y;
	return 0;
}




