#include <iostream>
/*
 * Goal: create a function that takes a boolean value and flips it
 *
 *
 *
 *
 *
 */

//Create function called "reverse" that returns bool
bool reverse(bool value){
    bool flippedVal{false};
    if(value)
    {
        flippedVal = false;
    }else
    {
        flippedVal = true;
    }
    return flippedVal;
}


int main() {
    int result{0};
    int input{0};

    std::cin >> input;

    result = reverse(input);

    std::cout << result;
}
