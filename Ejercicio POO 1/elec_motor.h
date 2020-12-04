#include "motor_general.h"
#pragma once

class elec_motor : public motor_general
{
protected:
    int battery_quantity;

public:
    elec_motor();
    elec_motor(int batteries);

    void setBatteries(int batteries);
    int getBatteries();
};