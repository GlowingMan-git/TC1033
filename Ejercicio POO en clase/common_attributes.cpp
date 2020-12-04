#include "common_attributes.h"
#pragma once


void common_attributes::setMarca(string brand)
{
    marca = brand;
}

string common_attributes::getMarca()
{
    return marca;
}

void common_attributes::setModelo(int model)
{
    modelo = model;
}

int common_attributes::getModelo()
{
    return modelo;
}