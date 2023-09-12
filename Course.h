#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Person.h"
class Course {
    private: 
        int id;
        std::string name;
        Person** persons;
        int numPersons;
    public:
      Course();
      Course(int id, std::string name);
      int get_id();
      Person* get_person();
      std::string get_name();
      void addPerson(Person* person);
};
#endif