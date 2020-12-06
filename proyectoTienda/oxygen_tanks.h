#include "producto.h"
#include "metals.h"
#include <string>
#pragma once
using namespace std;

class oxygen_tanks : public producto
{
protected:
    metals metal;
    int capacity;
    string valve;

public:
    oxygen_tanks();
    oxygen_tanks(int capacidad, metals matter, string valvula, float price, bool promo, int inventory);

    void setMetal(metals matter);
    metals getMetal();
    
    void setCapacity(int capacidad);
    int getCapacity();

    void setValve(string valvula);
    string getValve();
};