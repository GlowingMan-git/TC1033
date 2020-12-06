#include "organic.h"
#include<string>
#pragma once
using namespace std;


organic::organic()
{
    name = "Almendras";
    type = "Embolsado";
    caducidadMonth = 1;
    caducidadYear = 2021;
    precio = 1.50;
    promocion = false;
    inventario = 200;
}

organic::organic(string nombre, string tipo, int mes, int anio, float price, bool promo, int inventory)
{
    name = nombre;
    type = tipo;
    caducidadMonth = mes;
    caducidadYear = anio;
    precio = price;
    promocion = promo;
    inventario = inventory;
}

void organic::setName(string nombre)
{
    name = nombre;
}

string organic::getName()
{
    return name;
}

void organic::setType(string tipo)
{
    type = tipo;
}

string organic::getType()
{
    return type;
}

void organic::setCadMonth(int mes)
{
    caducidadMonth = mes;
}

int organic::getCadMonth()
{
    return caducidadMonth;
}

void organic::setCadYear(int anio)
{
    caducidadYear = anio;
}

int organic::getCadYear()
{
    return caducidadYear;
}