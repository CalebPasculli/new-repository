#include "Gradebook.h"
#include "Grade.h"
#include <string>

Gradebook::Gradebook(){
    grades = new Grade [1];
}
void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value){
grades[0] = Grade(stud_id, assignment, value);
}