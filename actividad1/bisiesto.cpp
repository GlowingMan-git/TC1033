/*Realiza un programa en C++ que imprime “Sí es bisiesto” 
o “No es bisiesto” si un valor numérico (variable int) que representa el valor de un año es bisiesto o no 
(tu asigna directamente el valor del año: int year = 2020; )*/

#include <iostream>

using namespace std;

int main()
{
    int year = 1968;

    if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"1968 es bisiesto\n";
    }
    else
    {
        cout<<"1968 no es bisiesto\n";
    }
    return 0;
}