#pragma once
#include <iostream>
#include <string>
#include "degree.h"



//student class definition


class Student {
private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int Age;
	int completeDays[3];
	DegreeProgram degreeProgram;

public:
	//constructor
	Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int Age, int completeDays[], DegreeProgram degreeProgram);

	//accessors
	std::string get_studentID() const;

	std::string get_firstName() const;

	std::string get_lastName() const;

	std::string get_emailAddress() const;

	int get_Age() const;

	const int* get_completeDays() const;

	DegreeProgram get_DegreeProgram() const;


	//mutators
	void set_studentID(std::string newStudentID);

	void set_firstName(std::string newFirstName);

	void set_lastName(std::string newLastName);

	void set_emailAddress(std::string newEmailAddress);

	void set_age(int newAge);

	void set_completeDays(const int newCompleteDays[]);

	void set_DegreeProgram(DegreeProgram degreeProgram);



//print
void print() const;
};