/*
 * Driver.cpp
 *
 *  Created on: Dec. 16, 2020
 *      Author: ashaislam & aminata lo
 */


/*
 * a) In the driver you will test your system. You first create an object of Student_Staff class
 *  to be able to read the input files and create your student and staff arrays.
 *  Then you need to test the member functions of the Student_Staff Class and show the results.

b) To test the functions in the Student and Staff classes, you can manually create the student
and staff objects and call different functions for these two classes.
Another option is to use the objects that you have created in part a.
 */

#include <iostream>
using namespace std;
#include <array>
#include <string>
#include "staff.h"
#include "Student.h"
#include <fstream>

#include "Student_Staff.h"
#include "Student.h"
#include "staff.h"


int main() {

	Student_Staff SS; // need to look at the constructor of
	//student staff class

	//this is going to be reading the student.txt file
	SS.Highest_GPA();

	cout << SS.N_of_UnderGrad();

	SS.Same_Hire_Year(2017);


	//constructor format --> Student (string f, string l, int i, string d, double g, int sy, double cr, string pr)


	Student S1("Sara", "lovely", 3739, "24 / 03 / 1999", 3.0, 2019, 140, "bachelor");
	Student S2("Amel", "loz", 7384, "13 / 02 / 2000", 4.0, 2017, 76, "bachelor");
	Student S3("Faly", "bla", 9792, "20 / 01 / 1999", 2.0, 2019, 40, "Master");
	Student S4("Pris", "lou", 6572, "11 / 03 / 1985", 3.6, 2016, 30, "Ph.D");
	Student S5("Wang", "liu", 6565, "02 / 06 / 2003", 3.9, 2020, 80, "bachelor");


	cout << S1.CompleteProgram();
	cout << S1.StudentStatus();
	cout << S1.Compare_GPA(S2);

	array<int, 5> studentIDList = { 3739,7384,9792,6572,6565 };
	array<Student, 5>StudentList = { S1,S2,S3, S4, S5, };

	int  ID;

	cout << "Input ID to print info: ";
	cin >> ID;

	for (int i = 0; i < 5; i++)
	{

		if (ID == studentIDList[i])
		{
			StudentList[i].Print_Std_Info(7384);
		}

	}

	//constructor format -- > Staff (string, string, int, int, string,  string, double);

	Staff E1("loki", "loki", 4354, 2008, "5445855", "A", 50000);
	Staff E2("Kija", "garou", 3452,  2012,"3485760", "A", 45000);
	Staff E3("Dunz", "loup", 7899, 2013, "467908", "B", 30000);
	Staff E4("Koba", "fria", 4634,  2008, "6574897","C", 25000);
	Staff E5("Biki", "bern", 5887,  2018,"565665", "D", 62000);

	cout << "Enter employee ID to print info: ";
	cin >> ID;

	array<int, 5>empIDList = { 4352, 3452, 7899, 4634, 1887 };
	array<Staff, 5>StaffList = { E1, E2, E3, E4, E5 };

	for (int i = 0; i < 5; i++)
	{
		if (ID == empIDList[i])
		{
			StaffList[i].Print_Stf_Info(4634);
		}
	}

	//displays the salary of the employee #3
	E3.Calculate_Salary();

	return 0;
}
