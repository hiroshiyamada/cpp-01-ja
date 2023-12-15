#include <iostream>

int power(int base, int exponent = 2)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base = 3;
    int exponent = 4;
    std::cout << power(base, exponent) << std::endl;
    return 0;
}