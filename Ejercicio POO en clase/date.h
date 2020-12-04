#include<string>
#pragma once

using namespace std;

class date
{
protected:
    int day;
    string month;
    int year;

public:
    void setDay(int dia);
    int getDay();

    void setMonth(string mes);
    string getMonth();

    void setYear(int anio);
    int getYear();
};