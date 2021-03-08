/*
 * Goal: Return the calculated power when given a voltage and a current
 * how to calculate power: power = voltage x current (amps)
 *
 */

#include <iostream>

int circuitPower(int voltage, int current){
    int calculatedPower{0};
    calculatedPower = voltage * current;
    return calculatedPower;
}


int main()
{
    int result{0};
    int voltage{0};
    int amperes{9};
    std::cout << " Hello there!\n What is your voltage: ";
    std::cin >> voltage;
    std::cout << "What is your amperage: ";
    std::cin >> amperes;
    std::cout << "\n--------------------------------\n";
    result = circuitPower(voltage,amperes);
    std::cout << " Your total power (watts) is: " << result;
    std::cout << "\n--------------------------------\n";
}
