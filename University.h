#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
#include "Course.h"
class University {

      private: 
         std::string name;
         std::string location;
         Course* courses;
         int numCourses;
      public:
        University();
        University(std::string name, std::string location);
        void set_name(std::string name);
        void set_location(std::string location);
        std::string get_name();
        std::string get_location();
        Course get_course();
        void addCourse(int id, std::string name);
};
#endif
