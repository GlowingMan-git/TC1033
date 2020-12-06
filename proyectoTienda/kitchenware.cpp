#include "kitchenware.h"
#include <string>
#pragma once
using namespace std;

kitchenware::kitchenware()
{
    metal = metals();
    radius = 11;
    noSticky = true;
    precio = 20.35;
    promocion = true;
    inventario = 50;
}

kitchenware::kitchenware(int rad, metals matter, bool stick, float price, bool promo, int inventory)
{
    metal = matter;
    radius = rad;
    noSticky = stick;
    precio = price;
    promocion = promo;
    inventario = inventario;
}

void kitchenware::setMetal(metals matter)
{
    metal = matter;
}

metals kitchenware::getMetal()
{
    return metal;
}
    
void kitchenware::setRadius(int rad)
{
    radius = rad;
}

int kitchenware::getRadius()
{
    return radius;
}

bool kitchenware::getNoSticky()
{
    return noSticky;
}