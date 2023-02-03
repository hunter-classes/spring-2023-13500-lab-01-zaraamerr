//Name: Zara Amer
//Course Name: CSCI 135
//Date: January 26 2023
//Description: Write a program smaller3.cpp that asks the user 
//to input three integer numbers, and prints out the smallest of the three.

#include <iostream>

int main(){
    int first; //var that will store the first int that the user inputs
    int second; //var that will store the second int that the user inputs
    int third; //var that will store the third int that the user inputs
    int smallest; //var that will store the smallest value
    std::cout << "Enter the first number: "; //asks user for first int
    std::cin >> first; //stores user input into first
    std::cout << "Enter the second number: "; //asks user for second int
    std::cin >> second; //stores user input into second
    std::cout << "Enter the third number: "; //asks user for third int
    std::cin >> third; //stores user input into third
    smallest= first;
    if (second < smallest){ //if-statement checks if second int is less than the current smallest value
        smallest= second; //if true, smallest is set to the value of the second int
        
    }
    if (third < smallest){ //if-statement checks if the third int is less than the current smallest value
        smallest= third; //if true, smallest is set to the value of the third int
    }

    std::cout << "The smallest number of the three integers is " << smallest << std::endl;
    
    return 0;
}
