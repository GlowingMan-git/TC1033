#include<string>
#include "inside_devices.h"
#pragma once

class graphics_processor : public inside_devices
{
protected:
    string type;
public:
    graphics_processor();
    graphics_processor(string tipo);

    void setType(string tipo);
    string getType();
};