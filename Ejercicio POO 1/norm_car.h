#include "car_general.h"
#include "norm_motor.h"
#pragma once


class norm_car : public car_general
{
protected:
    norm_motor engine;

public:
    norm_car();
    norm_car(norm_motor motor);

    void setEngine(norm_motor motor);
    norm_motor getEngine();
};