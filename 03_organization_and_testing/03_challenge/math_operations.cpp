#include "math_operations.h"
#include <cmath>
#include <iostream>
#include <stdexcept>

namespace MathOps
{
    float addition(const float a, const float b)
    {
        return a + b;
    }
    float subtraction(const float a, const float b)
    {
        return a - b;
    }
    float multiplication(const float a, const float b)
    {
        return a * b;
    }
    float division(const float a, const float b)
    {
        const float epsilon = 1e-9;
        if (std::fabs(b) < epsilon)
        {
            throw std::runtime_error("You cannot divide by zero.");
        }
        return a / b;
    }
}