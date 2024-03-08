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
    /*
    if (!inFile)
    {
        cout << "could not open file" << endl;
        return 1;
    }
    */
    ofstream outFile;
    outFile.open("Salary.out"); //open file

    string lastName, firstName;
    double salary, increase, updatedSalary; //Initialize original price as Origprice

    outFile << fixed << showpoint << setprecision(2) << setw(6) << endl;  // to check amount 
    

    inFile >> lastName >> firstName >> salary >> increase;  // to check amount 

    updatedSalary = salary * increase;
    outFile << firstName << " " << lastName << " " << updatedSalary << endl;   // to check amount 

    



    outFile.close(); //close file  

    return 0;

}