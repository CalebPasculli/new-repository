#include <string>
#include "Person.h"
#include "Student.h"
Student::Student():Person(){
    id = 0;
}
Student::Student(std::string name, int id):Person(name){
    Student::id = id;
}