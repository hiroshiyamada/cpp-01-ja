#include <iostream>
#include <vector>

std::vector<int> double_elements(const std::vector<int>& vec){
    std::vector<int> result;
    for(int n : vec){
        result.push_back(n * 2);
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> result = double_elements(numbers);
    for(int n : numbers){
        std::cout << n << std::endl;
    }
    for(int n : result){
        std::cout << n << std::endl;
    }
    return 0;
}