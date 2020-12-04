#include "car_general.h"
#include "elec_motor.h"
#pragma once


class elec_car : public car_general
{
protected:
    elec_motor engine;

public:
    elec_car();
    elec_car(elec_motor motor);

    void setEngine(elec_motor motor);
    elec_motor getEngine();
};