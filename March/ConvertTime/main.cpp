#include <iostream>

/*
 * Goal: Create a function that takes in minutes and converts them into seconds.
 */
void convert(int minutes){
    int seconds{0};
    seconds = minutes * 60;
    std::cout << minutes << "Minutes equals to " << seconds << " seconds.";
}


int main() {
    int minutes;
    std::cout << "Minutes: ";
    std::cin >> minutes;
    convert(minutes);
}
