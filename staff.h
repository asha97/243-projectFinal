#ifndef STAFF_H_
#define STAFF_H_

/*
 *  Created on: Dec. 1, 2020
 *      Author: ashaislam & aminata lo
 */
#include <iostream>
using namespace std;
#include <string>


class Staff {

private: 	//remove if no need

	string fnameE;
	string lnameE;
	int employeeID;
	string phoneN;
	int Yearhired;
	string bonusCode;
	double currSalary;

public:


	Staff();
	Staff (string, string, int, int, string,  string, double);

	void setfnameE(string);
	void setlnameE(string);
	void setemployeeID(int);
	void setphoneN(string);
	void setYearhired(int);
	void setbonusCode(string);
	void setcurrSalary(double);
	

	string getfnameE();
	string getlnameE();
	int getemployeeID();
	string getphoneN();
	int getYearhired();
	string getbonusCode();
	double getcurrSalary();
	

	void Print_Stf_Info(int);
	void Calculate_Salary(); //program and student id, return t/f
	
	string Compare_Exp(Staff, Staff); //comparing two staff and return most experience

};


//where to add the constructor
//how to write a constructor


#endif /* STAFF_H_ */

