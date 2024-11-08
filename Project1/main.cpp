#include <iostream>
#include "student.h"
#include "roster.h"




int main() {
	//info about  application
	cout << "Scripting and Programming - Applications - C867 ";
	cout << endl << "Programing language: C++" << endl;
	cout << "Student ID: 010963055" << endl;
	cout << "Name: Eben Butts\n" << endl;


	Roster classRoster;

	//adding students to roster
	classRoster.add("A1", "John", "Smith", "John1989@gmail.com", 20, 30, 35, 40, DegreeProgram::SECURITY);
	classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmail.com", 19, 50, 30, 40, DegreeProgram::NETWORK);
	classRoster.add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, DegreeProgram::SOFTWARE);
	classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, DegreeProgram::SECURITY);
	classRoster.add("A5", "Eben", "Black", "ebutts5@wgu.edu", 24, 20, 40, 40, DegreeProgram::SOFTWARE);
		
	
	//prints students info
	cout << "Printing all students:\n";
	classRoster.printALL();

	//prints invalid emails
	cout << "\nIncorrect emails: ";
	classRoster.printincorrectEmails();

	//looping through classRosterArray for each element
	cout << "\nAverage days in course: \n";
	for (size_t i = 0; i < classRoster.classRosterArray.size(); ++i) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->get_studentID());
	}

	//prints out students who are persuing software degrees
	cout << "\nShowing students with Software degree\n";
	classRoster.printbyDegreeProgram(DegreeProgram::SOFTWARE);

	//takes a student out of the roster
	cout << "\nRemoving student ID # A3: \n";
	classRoster.remove("A3");

	//shows roster with student taken out
	cout << "\nUpdated class roster:\n";
	classRoster.printALL();

	return 0;
};
