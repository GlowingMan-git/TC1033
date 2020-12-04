#include "elec_car.h"
#pragma once

elec_car::elec_car()
{
    engine = elec_motor(12);
}

elec_car::elec_car(elec_motor motor)
{
    engine = motor;
}

void elec_car::setEngine(elec_motor motor)
{
    engine = motor;
}

elec_motor elec_car::getEngine()
{
    return engine;
}