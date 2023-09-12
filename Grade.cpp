#include "Grade.h"
#include <string>
Grade::Grade(){
    student_id = 0;
    assignment = ' ';
    value = 0;
}
Grade::Grade(int student_id, std::string assignment, int value){
    Grade::student_id = student_id;
    Grade::assignment = assignment;
    Grade::value = value;
}