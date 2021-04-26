/*Problema 5
2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin ningún resto.
¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?*/

#include <iostream>

int main()
{
    int divisibleNumber = 1;
    
    // Keep incrementing divisibleNumber until it is divisible from 1 - 20
    while (!(
        (divisibleNumber % 11 == 0) &&
        (divisibleNumber % 12 == 0) && // 4, 3, 6, and 2 as well
        (divisibleNumber % 13 == 0) &&
        (divisibleNumber % 14 == 0) && // 7 as well
        (divisibleNumber % 15 == 0) && // 5 as well
        (divisibleNumber % 16 == 0) && // 8 as well
        (divisibleNumber % 17 == 0) &&
        (divisibleNumber % 18 == 0) && // 9 as well
        (divisibleNumber % 19 == 0) &&
        (divisibleNumber % 20 == 0)    // 10 as well
        // No need to check for divisibility by 1
    ))
    {
        ++divisibleNumber;
    }
    
    std::cout << divisibleNumber << "\n";
}



