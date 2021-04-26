/*Problema 9
Un triplete pitagórico es un conjunto de tres números naturales, a < b < c , para los cuales,
a 2 + b 2 = c 2
Por ejemplo, 3 2 + 4 2 = 9 + 16 = 25 = 5 2 .
Existe exactamente un triplete pitagórico para el cual a + b + c = 1000.
Halla el producto abc .*/

#include <iostream>

int main()
{
    for (int a = 1; a < 1000; ++a)
    {
        for (int b = 1; b < 1000; ++b)
        {
            for (int c = 1; c < 1000; ++c)
            {
                if (a * a + b * b == c * c && a + b + c == 1000)
                {
                    std::cout << a * b * c << "\n";
                    return 0;
                }
            }
        }
    }
}
