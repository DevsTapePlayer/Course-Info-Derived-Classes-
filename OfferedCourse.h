
#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
	// TODO: Declare private data members - instructorName, term, classTime
   private:
	   string instructorName;
	   string term;
	   string classTime;



	// TODO: Declare mutator functions -
	//      SetInstructorName(), SetTerm(), SetClassTime()
   public:
	   void SetInstructorName(string newinstructorName);
	   void SetTerm(string newterm);
	   void SetClassTime(string newclassTime);




	// TODO: Declare accessor functions -
	//      GetInstructorName(), GetTerm(), GetClassTime()
	   string GetInstructorName();
	   string GetTerm();
	   string GetClassTime();

};

#endif
