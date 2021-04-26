/*Problema 6
La suma de los cuadrados de los primeros diez números naturales es,
El cuadrado de la suma de los primeros diez números naturales es,
Por lo tanto, la diferencia entre la suma de los cuadrados de los 
primeros diez números naturales y el cuadrado de la suma es .
Calcula la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.*/

#include <iostream>

using namespace std;

int main()
{
    long long int sumOfSquares = 0LL;
    long int squareOfSum = 0LL;
    
    for (int number = 1; number <= 100; ++number)
    {
        sumOfSquares += (number * number); // Add the square of the current number
        squareOfSum += number; // Add the current number to the sum
    }
    squareOfSum *= squareOfSum; // Square the sum

    cout << (squareOfSum - sumOfSquares);
}
