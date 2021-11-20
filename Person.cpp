#include "Person.h"

CPerson::CPerson(int i_age) :mi_age(i_age)
{
    fp_table = Person;
    Person[0] = (g_fun_tabgle)&CPerson::say_hello;
    Person[1] = (g_fun_tabgle)&CPerson::say_goodbye;
}

CPerson::~CPerson()
{
    fp_table = Person;
}


void CPerson::say_hello()
{
    std::cout << "CPerson::say_hello" << std::endl;
}


void CPerson::say_goodbye()
{
    std::cout << "CPerson::say_goodbye" << std::endl;
}