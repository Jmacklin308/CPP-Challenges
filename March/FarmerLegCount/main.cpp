/* //////////////////
 * Goal: Implement a function that returns the total number of legs for all the farm animals for the farmer
 * //////////////////
 *
 *
 *
 * default number of legs per animal:
 * Chicken: 2
 * Cows: 4
 * Pigs: 4
 *
 */

#include <iostream>

int animals(int chickens, int cows , int pigs) {
    //default number of legs (hopefully)
    int numLegsChicken{2};
    int numLegsCows{4};
    int numLegsPigs{4};

    //initialize total
    int totalLegs{0};

    //lets count the total legs
    totalLegs = (chickens * numLegsChicken) + (cows * numLegsCows) + (pigs * numLegsPigs);
    return totalLegs;
}

int main() {
    int totalChickens{0};
    int totalCows{0};
    int totalPigs{0};

    int totalLegs{0};

    std::cout << "Howdy partner! How many Chickens do you have in need of leg countin'? :\n";
    std::cin >> totalChickens;


    std::cout << "Cows? \n";
    std::cin >> totalCows;

    std::cout << "Pigs? \n";
    std::cin >> totalPigs;


    totalLegs = animals(totalChickens,totalCows,totalPigs);

    std::cout << "Total count for legs is: \n " << totalLegs;
}
