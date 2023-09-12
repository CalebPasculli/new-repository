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
    std::cout<< "Name: " << uni.get_name() << " Location: " << uni.get_location() << "\n";


    uni.addCourse(01, "Maths");
    Course course = uni.get_course();
    std::cout<< "Name: " << course.get_name() << " ID: " << course.get_id() << "\n";

    Student student("Caleb", 22);
    Student p1;
    course.addPerson(&student);
    p1 = *course.get_person();
    std::cout<< "Name: " << p1.get_name() << " ID: " << course.get_id() << "\n";

    



    return 0;
}