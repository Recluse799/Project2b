// Project2b.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Immanuel Braxton
    3/7/2024
    Explain  CODE
    This program reads a File to input data and calculates the salary increase. It then displays the  full name of the workers in the correct order and their salary increase
  
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
    outFile.open("Salary.out"); //open  outfile

    string lastName, firstName;
    double salary, increase, updatedSalary; //Initialize salary, increase, and updatedSalary

    outFile << fixed << showpoint << setprecision(2) << setw(6) << endl;  // to output appropriate amount with decimal 

    int i;
        i = 0; 
        while (i < 3)
            {
            inFile >> lastName >> firstName >> salary >> increase;  // to get information 

            increase = increase / 100;  // makes it a decimal point

            updatedSalary = salary * increase; //calculate the percent increasee

            updatedSalary = updatedSalary + salary;  // calculate updated salary

            outFile << firstName << " " << lastName << "  " << updatedSalary << endl;   // to ouput information

            ++i;
            }
    

    inFile.close(); //close infile 

    outFile.close(); //close outfile  

    return 0;

}