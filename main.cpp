#include "Person.h"
#include "Student.h"

using g_fun_tabgle = void(CPerson::*)();


int main()
{
    CPerson *a = new CStudent();

    (a->*((g_fun_tabgle)(a->fp_table[0])))();


    return 0;
}