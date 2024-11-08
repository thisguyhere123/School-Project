#pragma once
#include "student.h"
#include <vector>

using namespace std;


class Roster {
public:
	~Roster();
	std::vector<Student*> classRosterArray;
	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress,
		int Age, int completeDays1, int completeDays2, int completeDays3, DegreeProgram degreeProgram);
	void remove(std::string studentID);
	void printALL() const;
	void printAverageDaysInCourse(std::string studentID) const;
	void printincorrectEmails() const;
	void printbyDegreeProgram(DegreeProgram degreeProgram) const;

};

