#include "date.h"
#include"common_attributes.h"
#include<string>
#pragma once

class inside_devices : public common_attributes, public date
{
protected:
    int gbSpeed;

public:
    void setGBSpeed(int gb);
    int getGBSpeed();
};