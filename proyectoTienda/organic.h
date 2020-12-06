#include<string>
#include "producto.h"
#pragma once
using namespace std;

class organic : public producto
{
protected:
    string name;
    string type;
    int caducidadMonth;
    int caducidadYear;

public:
    organic();
    organic(string nombre, string tipo, int mes, int anio, float price, bool promo, int inventory);

    void setName(string nombre);
    string getName();

    void setType(string tipo);
    string getType();

    void setCadMonth(int mes);
    int getCadMonth();

    void setCadYear(int anio);
    int getCadYear();
};