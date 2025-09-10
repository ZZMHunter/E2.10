/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: E2.10

    Input number of gallons of gas in the tank, fuel efficiency in miles per gallon, and price of gas per gallon
    Then print the cost per 100 miles and how far the car can go with the gas in the tank
*/

#include <iostream>

int main(){
    double gallons;
    double fuelEfficiency;
    double pricePerGallon;
    std::cout << "Enter gallons of gas in the tank: ";
    std::cin >> gallons;
    std::cout << "Enter fuel efficiency of car in miles per gallon: ";
    std::cin >> fuelEfficiency;
    std::cout << "Enter price of gas per gallon: ";
    std::cin >> pricePerGallon;
    std::cout << "The cost to drive the car 100 miles is $" << 100/fuelEfficiency * pricePerGallon << std::endl;
    std::cout << "The car can drive " << gallons*fuelEfficiency << " miles with the amount of fuel in the tank" << std::endl;
    return 0;
}