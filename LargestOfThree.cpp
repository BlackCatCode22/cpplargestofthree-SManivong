/* LargestOfThree.cpp : This file contains the 'main' function.Program execution begins and ends there.
*
* dH 2/15/23
* demo for C++ Programming Class
*
* input: three ints from user
* processing: calculate total and largest
* output: total and largest to system console
*
* References:
*    https://www.w3schools.com/cpp/cpp_user_input.asp
*https://www.youtube.com/watch?v=T76E09hnEuo




*/


#include <iostream>

int main()
{
    std::cout << "Hello from Largest of Three Program";

    // Declare some variables
    int week1 = 9;
    int week2 = 10;
    int week3 = 8;
    int largestweek = 12;
    int total = 0;

    // Interger from user
    std::cout << "Enter the first integer: ";
    std::cin >> week1;
    std::cout << "Enter the second interger: ";
    std::cin >> week2;
    std::cout << "Enter the third interger: ";
    std::cin >> week3;


    //Calulate the total
    total = week1 + week2 + week3;

    // Find the largest
    if (week1 > week2)
    {
        if (week1 > week3)
        {
            largestweek = week1;
        }
        else
        {
            largestweek = week3;
        }
    }
    else
    {
        if (week2 > week3)
        {
            largestweek = week2;
        }
        else
        {
            largestweek = week3;
        }
    }

    // Output the largest of the total of the three intergers.
    std::cout << "The largest of " << week1 << " and " << week2 << " and " << week3 << " is " << largestweek;
    std::cout << "Total is: " << total;
    std::cout << "Largest is:" << largestweek;
    return 0;

