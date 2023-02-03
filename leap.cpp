//Name: Zara Amer
//Course Name: CSCI 135
//Date: January 27 2023
//Write a program leap.cpp that asks the user to input an integer 
//representing a year number (1999, 2016, etc.). If the input year 
//is a leap year according to the modern Gregorian calendar, it 
//should print Leap year, otherwise, print Common year.

#include <iostream>

int main(){
    int year; //create a var that will store user's input for year number
    std::cout << "Input a year number: " << std::endl; //ask user for year number
    std::cin >> year; //store user's input into var
    //leap year if perfectly divisible by 4 and not divisible by 100, or just divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        std::cout << year << " is a leap year" << std::endl;
    }
    else{
        std::cout << year << " is a common year" << std::endl;  
    }
    
    return 0;
}