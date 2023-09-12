#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "Person.h"
class Person {
      private: 
      std::string name;

      public:

      Person();
      Person(std::string name);
      std::string get_name();
};
#endif