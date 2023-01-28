//Name: Zara Amer
//Course Name: CSCI 135
//Date: January 27 2023
//Write a program leap.cpp that asks the user to input an integer 
//representing a year number (1999, 2016, etc.). If the input year 
//is a leap year according to the modern Gregorian calendar, it 
//should print Leap year, otherwise, print Common year.

#include <iostream>
using namespace std;

int main(){
    int year; //create a var that will store user's input for year number
    cout << "Input a year number: " << endl; //ask user for year number
    cin >> year; //store user's input into var
    //leap year if perfectly divisible by 4 and not divisible by 100, or just divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        cout << year << " is a leap year" << endl;
    }
    else{
        cout << year << " is a common year" << endl;  
    }
    
    return 0;
}