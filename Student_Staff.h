#include <iostream>
using namespace std;
#include <array>
#include "Student.h"
#include "staff.h"

class Student_Staff {

private:
	Student stuList [5] ;
	Student *studpnt = stuList;

	Staff staffList [5];
	Staff *staffpnt = staffList;

public:

	Student_Staff(); //Constructor



	void setStuList();
	void setStaffList();


	void Highest_GPA();
	int N_of_UnderGrad();
	void Same_Hire_Year(int); // int  is the date hired



};
