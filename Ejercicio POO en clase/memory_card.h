#include"inside_devices.h"
#include<string>
#pragma once

class memory_card : public inside_devices
{
protected:
    int capacity;
    string type;

public:
    memory_card();
    memory_card(int tamanio, string type, int gb);

    void setCapacity(int tamanio);
    int getCapacity();

    void setType(string tipo);
    string getType();
};