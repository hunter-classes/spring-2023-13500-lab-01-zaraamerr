//Name: Zara Amer
//Course Name: CSCI 135
//Date: January 27 2023
//Write a program month.cpp that asks the user to input the year 
//and the month (1-12) and prints the number of days in that month 
//(taking into account leap years). 

#include <iostream>

int main(){
    int year; //create var that stores user's year input
    int month; //create a var that stores user's month input
    std::cout << "Enter a year: "; //ask user to enter a year
    std::cin >> year; //store user input into year
    std::cout << "Enter a month (1-12): "; //ask user to enter a month
    std::cin >> month; //store user input into month
    if (month == 2){ //if the month is february
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){ //if its a leap year
            std::cout << "29 days" << std::endl; //output that february has 29 days
        }
        else{ //if not a leap year
            std::cout << "28 days" << std::endl; //output that february has 28 days
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){ //if month is april, june, september, or november
        std::cout << "30 days" << std::endl; //output 30 days since those months have 30
    }
    else{ //if any other month in the calendar
        std::cout << "31 days" << std::endl; //output 31 days
    }
    return 0;
}