#include "Course.h"

// TODO: Define mutator functions - 
//       SetCourseNumber(), SetCourseTitle()
void Course::SetCourseNumber(string newCourseNumber) {
	courseNumber = newCourseNumber;
}
void Course::SetCourseTitle(string newCourseTitle) {
	courseTitle = newCourseTitle;
}



// TODO: Define accessor functions - 
//       GetCourseNumber(), GetCourseTitle()
string Course::GetCourseNumber() {
	return courseNumber;
}
string Course::GetCourseTitle() {
	return courseTitle;
}



// TODO: Define PrintInfo()
void Course::PrintInfo() {
	cout << "Course Information: " << endl;
	cout << "   Course Number: " << GetCourseNumber() << endl;
	cout << "   Course Title: " << GetCourseTitle() << endl;
}
