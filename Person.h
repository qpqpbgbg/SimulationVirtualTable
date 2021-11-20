#pragma once
#include <iostream>

class CPerson;
using g_fun_tabgle = void(CPerson::*)();

class CPerson
{
private:
    int mi_age;
public:
    CPerson(int i_age = 10);
    ~CPerson();
    g_fun_tabgle *fp_table;
    g_fun_tabgle Person[20];


    void say_hello();
    void say_goodbye();
};

