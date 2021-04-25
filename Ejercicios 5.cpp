/*Problema 5
2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin ningún resto.
¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?*/

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




