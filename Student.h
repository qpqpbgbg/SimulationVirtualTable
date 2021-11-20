#pragma once
#include "Person.h"
#include <iostream>

using g_fun_tabgle = void(CPerson::*)();

class CStudent :public CPerson
{
public:
    CStudent();
    ~CStudent();

    g_fun_tabgle Student[20];
    void say_hello();
    void say_goodbye();
};

