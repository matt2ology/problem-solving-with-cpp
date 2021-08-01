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

a. Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is
billed at a rate of $0.40 per minute.

b. Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday,
is charged at a rate of $0.25 per minute.

c. Any call started on a Saturday or Sunday is charged at a rate of $0.15 per minute.
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

|  STANDARD   | 24-HOUR | CASE A - $0.40/min | CASE B - $0.25/min | CASE C - $0.15/min |
| :---------: | :-----: | :----------------: | :----------------: | :----------------: |
| 12 MIDNIGHT |  24:00  |                    |         x          |         x          |
|  12:01 AM   |  00:01  |                    |         x          |         x          |
|  12:15 AM   |  00:15  |                    |         x          |         x          |
|  12:30 AM   |  00:30  |                    |         x          |         x          |
|  12:45 AM   |  00:45  |                    |         x          |         x          |
|    1 AM     |  01:00  |                    |         x          |         x          |
|    2 AM     |  02:00  |                    |         x          |         x          |
|    3 AM     |  03:00  |                    |         x          |         x          |
|    4 AM     |  04:00  |                    |         x          |         x          |
|    5 AM     |  05:00  |                    |         x          |         x          |
|    6 AM     |  06:00  |                    |         x          |         x          |
|    7 AM     |  07:00  |                    |         x          |         x          |
|    8 AM     |  08:00  |         x          |                    |         x          |
|    9 AM     |  09:00  |         x          |                    |         x          |
|    10 AM    |  10:00  |         x          |                    |         x          |
|    11 AM    |  11:00  |         x          |                    |         x          |
|   12 NOON   |  12:00  |         x          |                    |         x          |
|  12:01 PM   |  12:01  |         x          |                    |         x          |
|  12:15 PM   |  12:15  |         x          |                    |         x          |
|  12:30 PM   |  12:30  |         x          |                    |         x          |
|  12:45 PM   |  12:45  |         x          |                    |         x          |
|    1 PM     |  13:00  |         x          |                    |         x          |
|    2 PM     |  14:00  |         x          |                    |         x          |
|    3 PM     |  15:00  |         x          |                    |         x          |
|    4 PM     |  16:00  |         x          |                    |         x          |
|    5 PM     |  17:00  |         x          |                    |         x          |
|    6 PM     |  18:00  |         x          |                    |         x          |
|    7 PM     |  19:00  |                    |         x          |         x          |
|    8 PM     |  20:00  |                    |         x          |         x          |
|    9 PM     |  21:00  |                    |         x          |         x          |
|    10 PM    |  22:00  |                    |         x          |         x          |
|    11 PM    |  23:00  |                    |         x          |         x          |

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
