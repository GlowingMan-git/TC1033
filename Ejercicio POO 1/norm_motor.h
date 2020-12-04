#include "motor_general.h"
#pragma once

class norm_motor : public motor_general
{
protected:
    int cylinder_quantity;

public:
    norm_motor();
    norm_motor(int cylinders);

    void setCylinders(int cylinders);
    int getCylinders();
};