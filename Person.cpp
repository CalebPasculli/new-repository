#include <string>
#include "Person.h"
Person::Person(){
    name = ' ';
}
Person::Person(std::string name){
    Person::name = name;
}
std::string Person::get_name(){
    return(name);
}