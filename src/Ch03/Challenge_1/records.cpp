#include <string>
#include "records.h"


students::students(int id_i, string name_i){
    id = id_i;
    name = name_i;
}
int students::get_id() const{
    return id;
}
string students::get_name() const{
    return name;
}

course::course(int id_i, string name_i, int credit_i){
    id = id_i;
    name = name_i;
    credit = credit_i;
}
int course::get_id() const{
    return id;
}
string course::get_name() const{
    return name;
}
int course::get_credit() const{
    return credit;
}

grade::grade(int s_id_i, int c_id_i, char g){
    student_id = s_id_i;
    course_id = c_id_i;
    grades = g;
}
int grade::get_student_id() const{
    return student_id;
}
int grade::get_course_id() const{
    return course_id;
}
char grade::get_grades() const{
    return grades;
}
