/*
 * testStaff.cpp
 *
 *  Created on: Dec. 1, 2020
 *      Author: ashaislam & aminata lo
 */


#include <iostream>
using namespace std;
#include <string>
#include "staff.h"

//void Print_Stf_Info(int);
//void Calculate_Salary();

//maybe constructor without input parameters
Staff::Staff() {
	fnameE = "undefined";
	lnameE = "undefined";
	employeeID = 0;
	phoneN = "undefined";
	Yearhired=0;
	bonusCode = "undefined";
	currSalary=0.00;
}

//constrcutor with input parameters
Staff:: Staff (string fn, string ln, int id, int yh, string pn, string bon, double curr){
	fnameE = fn;
	lnameE = ln;
	employeeID = id;
	phoneN = pn;
	Yearhired=yh;
	bonusCode =bon;
	currSalary=curr;
}

//set functions
void Staff::setfnameE(string fn) {
	fnameE = fn;

}

void Staff::setlnameE(string ln) {
	lnameE = ln;

}

void Staff::setemployeeID(int i) {
	employeeID = i;

}

void Staff::setphoneN(string d) {
	phoneN = d;
}


void Staff::setYearhired(int g) {
	Yearhired = g;
}


void Staff::setbonusCode(string bonus) {
	bonusCode = bonus;
}

void Staff::setcurrSalary(double sal) {
	currSalary = sal;

}

//get functions
string Staff::getfnameE(){
	return fnameE;

}
string Staff:: getlnameE(){
	return lnameE;
}
int Staff::getemployeeID(){
	return employeeID;
}


string Staff::getphoneN(){
	return phoneN;
}


int Staff::getYearhired(){
	return Yearhired;
}


string Staff::getbonusCode(){
	return bonusCode;
}


double Staff::getcurrSalary(){
	return currSalary;
}



//this function is going to calculate the salary of the person
//according to the bonus code they get
//based on merit
void  Staff::Calculate_Salary() {

	//could have used this in exception handling w try catch but we did it in if else

	if (bonusCode == "A")
	{
		currSalary = currSalary * 1.08;
		cout << "Your new salary is: " << currSalary << " with an 8% bonus" <<endl;
	}

	else if (bonusCode == "B")
	{
		currSalary = currSalary * 1.06;
		cout << "Your new salary is: " << currSalary<< " with a 6% bonus" <<endl;
	}

		 
	else if (bonusCode == "C")
	{
		currSalary = currSalary * 1.03;
		cout << "Your new salary is: " << currSalary<< " with a 3% bonus" <<endl;
	}

	else if (bonusCode == "D")
	{
		currSalary = currSalary * 1.01;
		cout << "Your new salary is: " << currSalary<< " with a 1% bonus" <<endl;
	}

	else if (bonusCode == "E")

	{
		currSalary = currSalary *1.00;
		cout << "Your salary remains the same, which is of: " << currSalary;
	}
		 
	else 
	{
		cout << "You entered an invalid input";
	}
	

}

//this is going to be printing the info on the staff
void Staff::Print_Stf_Info(int i) {

	//print all of the attributes of the Staff
	cout << "Full Name: " << fnameE << " " << lnameE << endl;
	cout << "Staff ID: " << i << endl;
	cout << "Phone Number: " << phoneN << endl;
	cout << "Year hired: " << Yearhired << endl;
	cout << "Bonus Code: " << bonusCode << endl;
	cout << "Current Salary: " << currSalary << endl;
}
	
//compare two staff members and returns the one with the most work experience
string Staff :: Compare_Exp(Staff one, Staff two){
	if (one.getYearhired() > two.getYearhired()){
		return (one.getfnameE() + " " + one.getlnameE()) ;
	}

	return (two.getfnameE() + " " + two.getlnameE());
}

