#pragma once

#ifndef RECORDS
#define RECORDS

#include<string>

using namespace std;

class students{
    public:
        students(int id_i, string name_i);
        int get_id() const;
        string get_name() const;

    private:
        int id;
        string name;
};

class course{
    public:
        course(int id, string name, int credit);
        int get_id() const;
        string get_name() const;
        int get_credit() const;

    private:
        int id;
        string name;
        int credit;
};

class grade{
    public:
        grade(int s_id, int c_id, char g);
        int get_student_id() const;
        int get_course_id() const;
        char get_grades() const;

    private:
        int student_id;
        int course_id;
        char grades;
};

#endif //RECORDS