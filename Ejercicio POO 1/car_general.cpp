#include "car_general.h"
#pragma once


void car_general::setMarca(string brand)
{
    marca = brand;
}

string car_general::getMarca()
{
    return marca;
}

void car_general::setNombre(string name)
{
    nombre = name;
}

string car_general::getNombre()
{
    return nombre;
}

void car_general::setModelo(int model)
{
    modelo = model;
}

int car_general::getModelo()
{
    return modelo;
}

void car_general::setMaxVelocity(double speed)
{
    vel_max = speed;
}

double car_general::getMaxVelocity()
{
    return vel_max;
}