#include <string>
#include "Person.h"
#include "Course.h"
Course::Course(){
    id = 0;
    name = ' ';
    persons = new Person*[0];
}
Course::Course(int id, std::string name){
    Course::id = id;
    Course::name = name;
    Course::persons = new Person*[1];

}
int Course::get_id(){
return(id);
}
std::string Course::get_name(){
return(name);
}
Person* Course::get_person(){
return(persons[0]);
}
void Course::addPerson(Person* person){
    persons[numPersons] = person;
    numPersons++;
}