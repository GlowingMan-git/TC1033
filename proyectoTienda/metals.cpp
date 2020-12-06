#include "metals.h"
#include <string>
#pragma once
using namespace std;

metals::metals()
{
    weight = 15;
    thickness = 0.5;
    material = "Acero";
}

metals::metals(float peso, float grosor, string alloy)
{
    weight = peso;
    thickness = grosor;
    material = alloy;
}

void metals::setWeight(float peso)
{
    weight = peso;
}

float metals::getWeight()
{
    return weight;
}

void metals::setThickness(float grosor)
{
    thickness = grosor;
}

float metals::getThickness()
{
    return thickness;
}

void metals::setMaterial(string alloy)
{
    material = alloy;
}

string metals::getMaterial()
{
    return material;
}