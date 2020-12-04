#include "date.h"
#pragma once


void date::setDay(int dia)
{
    day = dia;
}

int date::getDay()
{
    return day;
}

void date::setMonth(string mes)
{
    month = mes;
}

string date::getMonth()
{
    return month;
}

void date::setYear(int anio)
{
    year = anio;
}

int date::getYear()
{
    return year;
}