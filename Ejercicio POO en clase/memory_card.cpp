#include "memory_card.h"
#pragma once


memory_card::memory_card()
{
    capacity = 64;
    type = "microSD";
    gbSpeed = 2;
    day = 1;
    month = "Enero";
    year = 2000;
}   

memory_card::memory_card(int tamanio, string tipo, int gb)
{
    capacity = tamanio;
    type = tipo;
    gbSpeed = gb;
}

void memory_card::setCapacity(int tamanio)
{
    capacity = tamanio;
}

int memory_card::getCapacity()
{
    return capacity;
}

void memory_card::setType(string tipo)
{
    type = tipo;
}

string memory_card::getType()
{
    return type;
}
