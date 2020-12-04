#include "graphics_processor.h"
#pragma once


graphics_processor::graphics_processor()
{
    type = "EnVidia";
    day = 1;
    month = "Enero";
    year = 2000;
}

graphics_processor::graphics_processor(string tipo)
{
    type = tipo;
}

void graphics_processor::setType(string tipo)
{
    type = tipo;
}

string graphics_processor::getType()
{
    return type;
}