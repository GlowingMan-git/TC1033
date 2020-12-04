#include <string>
#pragma once
using namespace std;

class car_general
{
protected:
    string marca;
    string nombre;
    int modelo;
    double vel_max;

public:
    void setMarca(string brand);
    string getMarca();

    void setNombre(string name);
    string getNombre();

    void setModelo(int model);
    int getModelo();

    void setMaxVelocity(double speed);
    double getMaxVelocity();
};