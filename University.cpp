#include "University.h"
#include "Course.h"
University::University(){
    name = ' ';
    location = ' ';
    courses = new Course[0];
    numCourses = 0;
}
University::University(std::string name, std::string location){
    University::name = name;
    University::location = location;
    courses = new Course[1];
    numCourses = 0;
}
void University::set_name(std::string name){
University::name = name;
}
void University::set_location(std::string location){
University::location = location;
}
std::string University::get_name(){
return(name);
}
std::string University::get_location(){
return(location);
}
Course University::get_course(){
return(courses[0]);
}
void University::addCourse(int id, std::string name){
courses[numCourses] = Course(id, name);
numCourses++;
}

