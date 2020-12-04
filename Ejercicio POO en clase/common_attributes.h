#include<string>
#pragma once

using namespace std;

class common_attributes
{
protected:
    string marca;
    int modelo;

public:
    void setMarca(string brand);
    string getMarca();

    void setModelo(int model);
    int getModelo();
};