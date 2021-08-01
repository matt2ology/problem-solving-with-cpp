//File Name: LongDistantCallCalculator.cpp
//Author: matt2ology
//Description: Program that computes the cost of a long-distance call.
//Last Changed: July 30, 2021
//Textbook page 175, PDF page 207

#include <iostream>
// Header that defines the standard input/output stream objects
#include <string>
// Include the string library

int main()
{
    char day_first_char, day_second_char;
    std::string twenty_four_hour_input;
    int call_duration;

    std::cout << "Welcome to Horizon's long-distance call calculator" << std::endl;
    std::cout << std::endl;

    std::cout << "What day of week did you make your call? (Mo Tu We Th Fr Sa Su)" << std::endl;
    std::cout << "Day of week: ";
    std::cin >> day_first_char >> day_second_char;
    std::cout << std::endl;

    std::cout << "What time was this call held? Enter in 24-hour format (hh:mm)" << std::endl;
    std::cout << "Time the call started: ";
    std::cin >> twenty_four_hour_input;
    std::cout << std::endl;

    std::cout << "What was the duration of this call in minutes? (2 hours = 120 minutes)" << std::endl;
    std::cout << "Call duration in minutes: ";
    std::cin >> call_duration;
    std::cout << std::endl;

    std::cout << "You have entered the following:" << std::endl;
    std::cout << "Day of week: " << day_first_char << day_second_char << std::endl;
    std::cout << "Time the call started: " << twenty_four_hour_input << std::endl;
    std::cout << "Call duration in minutes: " << call_duration << std::endl;

    system("pause");
    EXIT_SUCCESS; // return 0;
}
