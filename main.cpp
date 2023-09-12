#include "University.h"
#include "Course.h"
#include "Grade.h"
#include "Gradebook.h"
#include "Person.h"
#include "Student.h"
#include <string>
#include <iostream>
int main(){
    std::string name = "Adelaide University";
    std::string location = "North Terrace";
    University uni(name, location);


    uni.addCourse(01, "Maths");
    Course course = uni.get_course();

    Student student;
    course.addPerson(&student);


    Gradebook book1;
    book1.addGrade(22, 01, "Report", 75);

    return 0;
}