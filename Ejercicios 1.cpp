/*Problema 1
Si enumeramos todos los números naturales por debajo de 10 que son múltiplos de 3 o 5, 
obtenemos 3, 5, 6 y 9. La suma de estos múltiplos es 23.
Encuentra la suma de todos los múltiplos de 3 o 5 por debajo de 1000.*/

#include <iostream>

using namespace std;

int main(){
	int n = 999; //Para el while
	int x = 0; //Para el while
	int y = 0; //Para el For
	
	//Primer modo con ciclo While
	while (n>0){
		if (n%3 == 0){
			x = x + n;
		}
		else if (n%5 == 0){
			x = x + n;
		}
		n--;
	}
	cout<<"Suma de todos los multiplos de 3 o 5 por debajo de 1000 (Con While): "<<x<<endl;
	
	//Segundo modo con ciclo for
	for(int i=0;i<1000;i++){
		if (i%3 == 0){
			y = y + i;
		}
		else if (i%5 == 0){
			y = y + i;
		}
	}
	cout<<"Suma de todos los multiplos de 3 o 5 por debajo de 1000 (Con For): "<<y<<endl;
	return 0;
}

