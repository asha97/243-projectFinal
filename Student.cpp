/*
 *  Created on: Dec. 1, 2020
 *      Author: ashaislam & aminata lo
 */


#include <iostream>
using namespace std;
#include <string>
#include "Student.h"

///constructor w/o input parameters
Student::Student(){
	fname = "undefined";
	lname= "undefined";
	studentID = 0;
	dob= "undefined";
	gpa = 0;
	startYear= 0;
	credits = 0;
	program= "undefined";
}

//constructor w input parameters
Student :: Student (string f, string l, int i, string d, double g, int sy, double cr, string pr){

	fname =f;
	lname = l;
	studentID = i;
	dob = d;
	gpa = g;
	startYear = sy;
	credits = cr;
	program = pr;
}

//set functions
void Student:: setfname(string fn){
	fname = fn;
}

void Student:: setlname(string ln){
	lname = ln;
}

void Student::setStudentID(int id){
	studentID = id;
}

void Student::setDOB(string d){
	dob = d;
}

void Student::setGPA(double g){
	gpa =g;
}


void Student::setStartYear(int year){
	startYear = year;
}

void Student::setCredits(double cred){
	credits = cred;
}

void Student::setProgram(string p){
	program =p;
}


//get functions
string Student:: getfname(){
	return fname;
}

string Student::getlname(){
	return lname;
}

int Student:: getStudentID(){
	return studentID;
}

string Student::getDOB(){
	return dob;
}

double Student::getGPA(){
	return gpa;
}

int Student:: getStartYear(){
	return startYear;
}

double Student:: getCredits(){
	return credits;
}

string Student::getProgram(){
	return program;
}



//returns true or false if the person has completed the program
bool Student::CompleteProgram(){

	if (program.compare("bachelor")) {
		if (credits == 140){
			return true;
		} else {
			return false;
		}
	}
	else if (program.compare("Master")){
		if (credits == 16){
			return true;
		} else {
			return false;
		}
	}
	else if (program.compare( "Ph.D")){
		if (credits == 12){
			return true;
		} else {
			return false;
		}
	}
	return false;

}


//this is to look at the gpa of the student and the grade letter
string Student::StudentStatus(){

	string result;

	if(gpa >= 3.5){
		result = "A+";
	}
	else if(gpa >= 3){
	result = "A";
	}
	else if(gpa >= 2.5){
	result= "B";
	}
	else if(gpa >= 2){
	result = "C";
	}
	else{
	result = "D";
	}

	return result;
}

//printing all of the info of the student

void Student::Print_Std_Info(int i){
	//print all of the attributes of the student
	cout << "Full Name: " << fname << " " << lname << endl;
	cout << "Student ID: " << i << endl;
	cout << "Date of Birth: " << dob << endl;
	cout << "GPA to the date (Range: 0-4.4): " << gpa << endl;
	cout << "Start year: " << startYear << endl;
	cout << "Completed credits: " << credits << endl;
	cout << "Program: " << program << endl;
}


//compare the gpa of twp students and returns the name of the person
//with the highest gpa
int Student :: Compare_GPA(Student& a){

	if (a.getGPA()<= gpa){
		return studentID;
		//returns the student ID of the student ID declared in the constructor
	}

	return a.getStudentID();
	//return the student ID of the other person that has been comapred to

}



