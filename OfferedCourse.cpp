#include "OfferedCourse.h"

// TODO: Define mutator functions -
//      SetInstructorName(), SetTerm(), SetClassTime()
void OfferedCourse::SetInstructorName(string newinstructorName) {
	instructorName = newinstructorName;
}
void OfferedCourse::SetTerm(string newterm) {
	term = newterm;
}
void OfferedCourse::SetClassTime(string newclassTime) {
	classTime = newclassTime;
}


// TODO: Define accessor functions -
//      GetInstructorName(), GetTerm(), GetClassTime()
string OfferedCourse::GetInstructorName() {
	return instructorName;
}
string OfferedCourse::GetTerm() {
	return term;
}
string OfferedCourse::GetClassTime() {
	return classTime;
}
