#include "norm_motor.h"
#pragma once

norm_motor::norm_motor()
{
    cylinder_quantity = 6;
}

norm_motor::norm_motor(int cylinders)
{
    cylinder_quantity = cylinders;
}

void norm_motor::setCylinders(int cylinders)
{
    cylinder_quantity = cylinders;
}

int norm_motor::getCylinders()
{
    return cylinder_quantity;
}