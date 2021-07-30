# CHAPTER 3 / More Flow of Control - Programming Projects Question 5

- [CHAPTER 3 / More Flow of Control - Programming Projects Question 5](#chapter-3--more-flow-of-control---programming-projects-question-5)
  - [Problem](#problem)
  - [24-Hour Conversion Chart](#24-hour-conversion-chart)
  - [Notes](#notes)

| Textbook page | PDF page |
| ------------- | -------- |
| 175           | 207      |

## Problem

Write a program that computes the cost of a long-distance call.
The cost of the call is determined according to the following rate schedule:

a. Any call started between 8:00 A.M. and 6:00 P.M., Monday throughFriday, is
billed at a rate of $0.40 per minute.

b. Any call starting before 8:00 A.M. or after 6:00 P.M., Monday throughFriday,
is charged at a rate of $0.25 per minute.

c. Any call started on a Saturday or Sunday is charged at a rate of $0.15per minute.
The input will consist of the day of the week, the time the call started,and the
length of the call in minutes.

The input will consist of the day of the week, the time the call started,
and the length of the call in minutes. The output will be the cost of the
call. The time is to be input in 24-hour notation, so the time 1:30 P.M. is
input as

`13:30`

The day of the week will be read as one of the following pairs of character
values, which are stored in two variables of type char:

`Mo Tu We Th Fr Sa Su`

Be sure to allow the user to use either uppercase or lowercase letters or a
combination of the two. The number of minutes will be input as a value
of type int. (You can assume that the user rounds the input to a whole
number of minutes.) Your program should include a loop that lets the
user repeat this calculation until the user says she or he is done.

## 24-Hour Conversion Chart

For times between 13:00 to 23:59, subtract 12 hours and add PM to the time

|  STANDARD   | 24-HOUR | STANDARD | 24-HOUR |
| :---------: | :-----: | :------: | :-----: |
| 12 MIDNIGHT |  2400   | 12 NOON  |  1200   |
|  12:01 AM   |  0001   | 12:01 PM |  1201   |
|  12:15 AM   |  0015   | 12:15 PM |  1215   |
|  12:30 AM   |  0030   | 12:30 PM |  1230   |
|  12:45 AM   |  0045   | 12:45 PM |  1245   |
|    1 AM     |  0100   |   1 PM   |  1300   |
|    2 AM     |  0200   |   2 PM   |  1400   |
|    3 AM     |  0300   |   3 PM   |  1500   |
|    4 AM     |  0400   |   4 PM   |  1600   |
|    5 AM     |  0500   |   5 PM   |  1700   |
|    6 AM     |  0600   |   6 PM   |  1800   |
|    7 AM     |  0700   |   7 PM   |  1900   |
|    8 AM     |  0800   |   8 PM   |  2000   |
|    9 AM     |  0900   |   9 PM   |  2100   |
|    10 AM    |  1000   |  10 PM   |  2200   |
|    11 AM    |  1100   |  11 PM   |  2300   |

## Notes

- [#include <cstdio>](https://www.cplusplus.com/reference/cstdio/): Input and Output operations can also be performed in C++ using the C Standard Input and Output Library (cstdio, known as stdio.h in the C language)

- [#include <stdlib.h>](https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm): The stdlib.h header defines four variable types, several macros, and various functions for performing general functions.
  - To enable `EXIT_SUCCESS`

```c++
// How to store and use string variables
#include <iostream>
//Header that defines the standard input/output stream objects:
#include <string>
// Include the string library
std::string twenty_four_hour_input = "";
std::cout << "Enter 24-hour notation: ";
std::cin >> twenty_four_hour_input;
std::cout << "You have entered: " << twenty_four_hour_input << std::endl;
```

- [Convert String Char Array Cpp](https://www.geeksforgeeks.org/convert-string-char-array-cpp/)
- [Return values of printf() and scanf() in C/C++](https://www.geeksforgeeks.org/return-values-of-printf-and-scanf-in-c-cpp/)
