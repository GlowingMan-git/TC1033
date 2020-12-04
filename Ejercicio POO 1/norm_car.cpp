#include "norm_car.h"
#pragma once


norm_car::norm_car()
{
    engine = norm_motor(12);
}

norm_car::norm_car(norm_motor motor)
{
    engine = motor;
}

void norm_car::setEngine(norm_motor motor)
{
    engine = motor;
}

norm_motor norm_car::getEngine()
{
    return engine;
}
