#include <iostream>

int main()
{
    float input;
    std::cout << "Please type your number." << std::endl;
    std::cin >> input;
    if (input > 0)
    {
        std::cout << "This number is positive." << std::endl;
    }
    else if (input < 0)
    {
        std::cout << "This number is negative." << std::endl;
    }
    else
    {
        std::cout << "This number is zero." << std::endl;
    }
    return 0;
}