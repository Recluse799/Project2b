// Project2b.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*Immanuel Braxton
    3/7/2024
    Explain  CODE
    his program will calculate and show the mark up, original price and tax rates of inputted items.
    
 */
    
#include <iostream> 

#include <iomanip> //includes manipulators (that take parameters, strings are left justified, numbers are right justified)

#include <string>

#include <fstream> //fstream header

using namespace std;

int main()
{
    ifstream inFile;

    inFile.open("SalaryData.txt"); //open file


    if (inFile.is_open());
    {
        cout << "could not open file" << endl;
        return 1;
    }

    string lastName, firstName;
    double salary, income; //Initialize original price as Origprice

    inFile >> lastName >> firstName >> salary >> income;  // to check amount 
    cout << lastName << firstName << salary << income << endl;   // to check amount 

    return 1;
