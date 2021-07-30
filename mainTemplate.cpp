//File Name: health.cpp (Your system may require some suffix other than cpp.)
//Author: matt2ology
//Description: Program to determine if the user is ill.
//Last Changed: September 23, 2006

#include <iostream>

int main()
{
    const double NORMAL = 98.6; //degrees Fahrenheit
    double temperature;
    std::cout << "Enter your temperature: ";
    std::cin >> temperature;
    if (temperature > NORMAL)
    {
        std::cout << "You have a fever.\n";
        std::cout << "Drink lots of liquids and get to bed.\n";
    }
    else
    {
        std::cout << "You don't have a fever.\n";
        std::cout << "Go study.\n";
    }
    system("pause");
    EXIT_SUCCESS; // return 0;
}