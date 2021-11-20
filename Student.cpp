#include "Student.h"

CStudent::CStudent() :CPerson(5)
{
    fp_table = Student;
    Student[0] = (g_fun_tabgle)&CStudent::say_hello;
    Student[1] = (g_fun_tabgle)&CStudent::say_goodbye;
}


CStudent::~CStudent()
{
    fp_table = Student;
}

void CStudent::say_hello()
{
    std::cout << "CStudent::say_hello" << std::endl;
}

void CStudent::say_goodbye()
{
    std::cout << "CStudent::say_goodbye" << std::endl;
}