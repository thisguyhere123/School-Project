#include "student.h"
#include "roster.h"
#include <iostream>

using namespace std;


//construct definition
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int Age, int completeDays[], DegreeProgram degreeProgram) {
	//accessors
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->Age = Age;
	for (int i = 0; i < 3; ++i) this->completeDays[i] = completeDays[i];
	this->degreeProgram = degreeProgram;
};


	string Student::get_studentID() const {
		return studentID;
	};

	string Student::get_firstName() const {
		return firstName;
	};

	string Student::get_lastName() const {
		return lastName;
	};

	string Student::get_emailAddress() const {
		return emailAddress;
	};

	int Student::get_Age() const {
		return Age;
	};

	const int* Student::get_completeDays() const {
		return completeDays;
	};

	DegreeProgram Student::get_DegreeProgram() const {
		return degreeProgram;
	}
	//setters (mutators)


	void Student::set_studentID(string StudentID) {
		this->studentID = studentID;
	};

	void Student::set_firstName(string firstName) {
		this->firstName = firstName;
	};

	void Student::set_lastName(string lastName) {
		this->lastName = lastName;
	};

	void Student::set_emailAddress(string emailAddress) {
		this->emailAddress = emailAddress;
	};

	void Student::set_age(int Age) {
		this->Age = Age;
	};

	void Student::set_completeDays(const int completeDays[]) {
		for (int i = 0; i < 3; ++i) this->completeDays[i] = completeDays[i];
	};

	void Student::set_DegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

	//print function definition
	void Student::print() const {
		cout << studentID << "\tFirst Name: " << firstName
			<< "\tLast Name: " << lastName
			<< "\tAge: " << Age
			<< "\tcompleteDays: {" << completeDays[0] << ", " << completeDays[1] << ", " << completeDays[2] << "}"
			<< "\tDegree Program: " << (degreeProgram == DegreeProgram::SECURITY ? "Security" : degreeProgram == DegreeProgram::NETWORK ? "Network" : "Software")
			<< endl;
	};

