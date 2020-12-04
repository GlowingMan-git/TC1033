#include "motor_general.h"
#pragma once

void motor_general::setHorsepower(int hp)
{
    horsepower = hp;
}

int motor_general::getHorsepower()
{
    return horsepower;
}