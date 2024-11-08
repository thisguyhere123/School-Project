#include "student.h"
#include "roster.h"
#include <iostream>

//roster class destructor
Roster::~Roster() {
	for (Student* student : classRosterArray) {
		delete student;
	}
}

//adding a student
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int Age, int completeDays1, int completeDays2, int completeDays3, DegreeProgram degreeProgram) {
	int completeDays[] = { completeDays1, completeDays2, completeDays3 };
	classRosterArray.push_back(new Student(studentID, firstName, lastName, emailAddress, Age, completeDays, degreeProgram));
}

//delete student via ID
void Roster::remove(string studentID) {
	bool found = false;
	for (int i = 0; i < classRosterArray.size(); ++i) {
		if(classRosterArray[i]->get_studentID() == studentID) {
			delete classRosterArray[i];
			classRosterArray.erase(classRosterArray.begin() + i);
			found = true;
			break;
		}
	}
	if (found = false) cout << "Student number: " << studentID << " not found." << endl;
}

//printall student
void Roster::printALL() const {
	for (const Student* student : classRosterArray) {
		student->print();
	}
}

	//print invalid emails
void Roster::printincorrectEmails() const {
	for (const Student* student : classRosterArray) {
		string email = student->get_emailAddress();

		//making sure email has @ and . w/ no spaces
		
		if (email.find("@") == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
			cout << "Invalid email: " << email << endl;
		}
	}
}

//outputs student by program

void Roster::printbyDegreeProgram(DegreeProgram degreeProgram) const {
	for (const Student* student : classRosterArray) {
		if (student->get_DegreeProgram() == degreeProgram) {
			student->print();
		}
	}
}
//calculates the average of each students days in course
void Roster::printAverageDaysInCourse(string studentID) const {
	bool found = false;
	for (Student* student : classRosterArray) {
		if (student->get_studentID() == studentID) {
			const int* days = student->get_completeDays();
			int totalDays = days[0] + days[1] + days[2];
			cout << "Avg days for student " << studentID << " to complete course is: " << totalDays / 3.0 << endl;
			found = true;
			break;
		}
	}
	if (found = false) cout << "Student number: " << studentID << " not found." << endl;
}
