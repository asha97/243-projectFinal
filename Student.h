

#ifndef STUDENT_H_
#define STUDENT_H_

/*
 *  Created on: Dec. 1, 2020
 *      Author: ashaislam & aminata lo
 */
#include <iostream>
using namespace std;
#include <string>


class Student{

private:
	string fname;
	string lname;
	int studentID;
	string dob;
	double gpa;
	int startYear;
	double credits;
	string program;

public:

	Student();
	Student (string, string, int, string, double, int, double, string);

	void setfname(string);
	void setlname(string);
	void setStudentID(int);
	void setDOB(string);
	void setGPA(double);
	void setStartYear(int);
	void setCredits(double);
	void setProgram(string);


	string getfname();
	string getlname();
	int getStudentID();
	string getDOB();
	double getGPA();
	int getStartYear();
	double getCredits();
	string getProgram();

	bool CompleteProgram(); //program and student id, return t/f
	string StudentStatus();
	void Print_Std_Info(int); // inside is the student ID number and prints all of the info

	int Compare_GPA(Student&);

};


#endif /* STUDENT_H_ */
