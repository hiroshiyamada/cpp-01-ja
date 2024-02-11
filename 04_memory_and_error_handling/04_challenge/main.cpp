#include <iostream>
#include <stdexcept>
#include <vector>

int element_at(const std::vector<int> &numbers, int idx)
{
    if (idx < 0 || idx > numbers.size() - 1)
    {
        throw std::out_of_range("Index is out of range.");
    }
    return numbers[idx];
}

int main()
{
    std::vector<int> numbers = {1, 3, 5, 7, 9};
    try
    {
        std::cout << element_at(numbers, 1) << std::endl;
        std::cout << element_at(numbers, 7) << std::endl;
    }
    catch (std::out_of_range& msg)
    {
        std::cerr << "Error: " << msg.what() << std::endl;
    }
    return 0;
}