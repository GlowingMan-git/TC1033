#include <string>
#pragma once
using namespace std;

class metals
{
protected:
    float weight;
    float thickness;
    string material;

public:
    metals();
    metals(float peso, float grosor, string alloy);

    void setWeight(float peso);
    float getWeight();

    void setThickness(float grosor);
    float getThickness();

    void setMaterial(string alloy);
    string getMaterial();
};