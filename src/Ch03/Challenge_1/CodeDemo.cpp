#include <iostream>
#include "records.h"

int main(){
    students my_students(1, "Hilda Jones");
    course my_course(7, "Physics 101", 4);
    grade my_grade(1, 7, 'B');

    std::cout << "Student: " << my_students.get_name() << std::endl;
    std::cout << "Course: " << my_course.get_name() << std::endl;
    std::cout << "Credits: " << my_course.get_credit() << std::endl;
    std::cout << "Grade: " << my_grade.get_grades() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}