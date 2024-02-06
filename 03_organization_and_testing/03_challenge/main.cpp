#include "math_operations.h"
#include <iostream>
#include <string>

int main(){
    float a_input;
    float b_input;
    std::string calc;
    std::cout << "Enter a calculation: ";
    std:: cin >> a_input >> calc >> b_input;
    std::cout << "Result: ";
    if(calc == "+"){
        std::cout << MathOps::addition(a_input, b_input) << std::endl;
    }else if(calc == "-"){
        std::cout << MathOps::subtraction(a_input, b_input) << std::endl;
    }else if(calc == "*"){
        std::cout << MathOps::multiplication(a_input, b_input) << std::endl;
    }else if(calc == "/"){
        std::cout << MathOps::division(a_input, b_input) << std::endl;
    }else{
        std::cout << "Please input valid calculation methods." << std::endl;
    }
    return 0;
}