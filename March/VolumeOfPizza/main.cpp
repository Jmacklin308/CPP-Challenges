/*
 * Goal: You are given a radius and hight of a pizza. Return the volume of pizza
 *
 * example:
 *  volPizza(1, 1) ➞ 3
 *  //(radius² x height x π) = 3.14159... rounded to the nearest integer.
 *  volPizza(7, 2) ➞ 308
 *  volPizza(10, 2.5) ➞ 785
 *
 *  How to find the volume of a cylinder: V= π * r^2 * h
 *
 */

#include <iostream>
//I like pie

//TODO: pass input to volPizza
int volPizza(float radius, float height){
    int volume{0};
    double pi = 2 * acos(0.0);

    int answer =
    
    volume =  (radius^2) * height * pi;
    
    std::cout << "The total volume of pizza is: " << pi;

    return volume;
}

int main() {
    //TODO: take input for radius and height of pizza
    int radius{0};
    int height{0};
    
    std::cout << "What was the radius of the pizza in question?";
    std::cin >> radius;
    
    std::cout << "What was the height of the pizza in question?";
    std::cin >> height;
    
    //send it
    volPizza(radius, height);
}
