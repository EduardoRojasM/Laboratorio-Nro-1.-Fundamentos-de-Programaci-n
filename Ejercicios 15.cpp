/*Problema 15
Comenzando en la esquina superior izquierda de una cuadrícula de 2 × 2 y solo pudiendo moverse hacia la derecha 
y hacia abajo, hay exactamente 6 rutas hacia la esquina inferior derecha.
¿Cuántas rutas de este tipo existen a través de una cuadrícula de 20 × 20?*/ //RPTA 137 846 528 820

#include <iostream>

using namespace std;

double factorial(double);

int main(){
	int H = 20;
	int B = 20;
	unsigned long long int r1;
	r1=(factorial(B+H))/(factorial(B)*factorial(H)); //Formula para hallar caminos //incalculable
	cout<<"El numero de movimientos hacia la derecha y hacia abajo  en 20*20 es: "<<r1;
	return 0;
}

double factorial(double n) { //Factorial
   if(n < 0) return 0;
   else if(n > 1) return n*factorial(n-1);
   return 1;
}

