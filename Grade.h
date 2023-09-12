#ifndef GRADE_H
#define GRADE_H
#include <string>
class Grade {
      private: 
        int student_id;
        std::string assignment;
        int value;
    public:
    Grade();
    Grade(int student_id, std::string assingment, int value);
};
#endif