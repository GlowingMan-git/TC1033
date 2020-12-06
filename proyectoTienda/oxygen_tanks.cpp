#include "oxygen_tanks.h"
#include <string>
#pragma once
using namespace std;

oxygen_tanks::oxygen_tanks()
{
    capacity = 18;
    metal = metals();
    valve = "Commpression";
    precio = 50.45;
    promocion = false;
    inventario = 100;
}

oxygen_tanks::oxygen_tanks(int capacidad, metals matter, string valvula, float price, bool promo, int inventory)
{
    capacity = capacidad;
    metal = matter;
    valve = valvula;
    precio = price;
    promocion = promo;
    inventario = inventory;
}

void oxygen_tanks::setMetal(metals matter)
{
    metal = matter;
}

metals oxygen_tanks::getMetal()
{
    return metal;
}

void oxygen_tanks::setCapacity(int capacidad)
{
    capacity = capacidad;
}

int oxygen_tanks::getCapacity()
{
    return capacity;
}

void oxygen_tanks::setValve(string valvula)
{
    valve = valvula;
}

string oxygen_tanks::getValve()
{
    return valve;
}