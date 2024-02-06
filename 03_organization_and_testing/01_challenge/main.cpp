#include <iostream>
#include "temp_sensor.h"

int main()
{
    std::cout << "Temperature reading: " << sensor::readTemperature() << std::endl;
    return 0;
}