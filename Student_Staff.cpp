#include <iostream>
#include <array>
#include <fstream>
#include <string>
using namespace std;

#include "Student_Staff.h"
#include "Student.h"
#include "staff.h"

Student_Staff::Student_Staff() //Constructor
{
	stuList;
	staffList;

}

void Student_Staff::Highest_GPA() // function to accept an array of students and print the information of the student with the highest GPA
{
	double maxGPA = studpnt[0].getGPA(); //initialize the maximum GPA in the array at position 0

	for (int i = 1; i < 5; i++)
	{
		if (studpnt[i].getGPA() > maxGPA)
		{
			maxGPA = studpnt[i].getGPA(); // redifines the maximum GPA if it's higher then the previous one
		}
	}

	if (maxGPA == studpnt[0].getGPA()){
		studpnt[0].Print_Std_Info(studpnt[0].getStudentID());
	}
	else if (maxGPA == studpnt[1].getGPA()){
		studpnt[1].Print_Std_Info(studpnt[1].getStudentID());
	}
	else if (maxGPA == studpnt[2].getGPA()){
		studpnt[2].Print_Std_Info(studpnt[2].getStudentID());
	}
	else if (maxGPA == studpnt[3].getGPA()){
		studpnt[3].Print_Std_Info(studpnt[3].getStudentID());
	}
	else if (maxGPA == studpnt[4].getGPA()){
		studpnt[4].Print_Std_Info(studpnt[4].getStudentID());
	}

}





int Student_Staff::N_of_UnderGrad() // function to return the total nmber of undergraduates
{
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (studpnt[i].getProgram() == "bachelor")// to see if the student is undergraduate or graduate
			count++;
	}
	return count;
}

void Student_Staff::Same_Hire_Year(int year)
{//function Same_Hire_Year
	for (int i = 1; i < 5; i++)
	{
		if (staffpnt[i].getYearhired() == year){
			cout << endl;
			cout << "Name: " << staffpnt[i].getfnameE() << ", Year: " << staffpnt[i].getYearhired();
		}
	}
}


void Student_Staff:: setStuList(){

	ifstream stufile;
	stufile.open("student.txt");


	//intialize the variables that are going to be used

	//first name
	string fname1, fname2, fname3, fname4, fname5;

	//last name
	string lname1, lname2, lname3, lname4, lname5;

	//student ID
	int id1, id2, id3, id4, id5;

	//string dob
	string dob1, dob2, dob3, dob4, dob5;

	//gpa
	double gpa1, gpa2, gpa3, gpa4, gpa5;

	//start year
	 int sy1, sy2, sy3, sy4, sy5;

	 //completed credits
	 int cred1, cred2, cred3, cred4, cred5;

	 //program
	 string prog1, prog2, prog3, prog4, prog5;


	 //student #1 info
	 stufile >> fname1;
	 stufile >> lname1;
	 stufile >> id1;
	 stufile >> dob1;
	 stufile >> gpa1;
	 stufile >> sy1;
	 stufile >> cred1;
	 stufile >> prog1;

	 //student #2
	 stufile >> fname2;
	 stufile >> lname2;
	 stufile >> id2;
	 stufile >> dob2;
	 stufile >> gpa2;
	 stufile >> sy2;
	 stufile >> cred2;
	 stufile >> prog2;

	 //student #3
	 stufile >> fname3;
	 stufile >> lname3;
	 stufile >> id3;
	 stufile >> dob3;
	 stufile >> gpa3;
	 stufile >> sy3;
	 stufile >> cred3;
	 stufile >> prog3;

	 //student #4
	 stufile >> fname4;
	 stufile >> lname4;
	 stufile >> id4;
	 stufile >> dob4;
	 stufile >> gpa4;
	 stufile >> sy4;
	 stufile >> cred4;
	 stufile >> prog4;

	 //student #5
	 stufile >> fname5;
	 stufile >> lname5;
	 stufile >> id5;
	 stufile >> dob5;
	 stufile >> gpa5;
	 stufile >> sy5;
	 stufile >> cred5;
	 stufile >> prog5;

	 Student one (fname1, lname1, id1, dob1, gpa1, sy1, cred1, prog1);
	 Student two (fname2, lname2, id2, dob2, gpa2, sy2, cred2, prog2);
	 Student three (fname3, lname3, id3, dob3, gpa3, sy3, cred3, prog3);
	 Student four (fname4, lname4, id4, dob4, gpa4, sy4, cred4, prog4);
	 Student five (fname5, lname5, id5, dob5, gpa5, sy5, cred5, prog5);


	 //create pointers to the array of the type student
	 studpnt = new Student[5];

	 *studpnt = one;
	 *(studpnt +1) = two;
	 *(studpnt +2) = three;
	 *(studpnt +3) = four;
	 *(studpnt +4) = five;

	 //close the file
	 stufile.close();


}





void Student_Staff:: setStaffList(){

	ifstream stafile;
	stafile.open("staff.txt");


	//intialize the variables that are going to be used

	//first name
	string efname1, efname2, efname3, efname4, efname5;

	//last name
	string elname1, elname2, elname3, elname4, elname5;

	//student ID
	int eid1, eid2, eid3, eid4, eid5;


	//start year - the year the person has been hired
	 int esy1, esy2, esy3, esy4, esy5;


	 //employeephone number
	 string num1, num2, num3, num4, num5;

	 //bonus code
	 string bonus1, bonus2, bonus3, bonus4, bonus5;


	 //salary
	 double salary1, salary2, salary3, salary4, salary5;


	 //staff #1 info
	 stafile >> efname1;
	 stafile >> elname1;
	 stafile >> eid1;
	 stafile >> esy1;
	 stafile >> num1;
	 stafile >> bonus1;
	 stafile >> salary1;


	 //staff #2 info
	 stafile >> efname2;
	 stafile >> elname2;
	 stafile >> eid2;
	 stafile >> esy2;
	 stafile >> num2;
	 stafile >> bonus2;
	 stafile >> salary2;

	 //staff #3 info
	 stafile >> efname3;
	 stafile >> elname3;
	 stafile >> eid3;
	 stafile >> esy3;
	 stafile >> num3;
	 stafile >> bonus3;
	 stafile >> salary3;

	 //staff #4 info
	 stafile >> efname4;
	 stafile >> elname4;
	 stafile >> eid4;
	 stafile >> esy4;
	 stafile >> num4;
	 stafile >> bonus4;
	 stafile >> salary4;

	 //staff #5 info
	 stafile >> efname5;
	 stafile >> elname5;
	 stafile >> eid5;
	 stafile >> esy5;
	 stafile >> num5;
	 stafile >> bonus5;
	 stafile >> salary5;

	// constructor of staff-->  Staff (string fn, string ln, int id, int yh, string pn, string bon, double curr)
	 Staff one1 (efname1, elname1, eid1, esy1, num1, bonus1, salary1);
	 Staff two2 (efname2, elname2, eid2, esy2, num2, bonus2, salary2);
	 Staff three3 (efname3, elname3, eid3, esy3, num3, bonus3, salary3);
	 Staff four4 (efname4, elname4, eid4, esy4, num4, bonus4, salary4);
	 Staff five5 (efname5, elname5, eid5, esy5, num5, bonus5, salary5);



	 //create pointers to the array of the type student
	 staffpnt = new Staff[5];

	 *staffpnt = one1;
	 *(staffpnt +1) = two2;
	 *(staffpnt +2) = three3;
	 *(staffpnt +3) = four4;
	 *(staffpnt +4) = five5;

	 //close the file
	 stafile.close();


}




