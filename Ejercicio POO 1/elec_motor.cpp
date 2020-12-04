#include "elec_motor.h"
#pragma once

elec_motor::elec_motor()
{
    battery_quantity = 6;
}

elec_motor::elec_motor(int batteries)
{
    battery_quantity = batteries;
}

void elec_motor::setBatteries(int batteries)
{
    battery_quantity = batteries;
}

int elec_motor::getBatteries()
{
    return battery_quantity;
}