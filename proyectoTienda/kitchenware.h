#include <string>
#include "metals.h"
#include "producto.h"
#pragma once
using namespace std;

class kitchenware : public producto
{
protected:
    metals metal;
    int radius;
    bool noSticky;

public:
    kitchenware();
    kitchenware(int rad, metals matter, bool stick, float price, bool promo, int inventory);

    void setMetal(metals matter);
    metals getMetal();
    
    void setRadius(int rad);
    int getRadius();

    void setNoSticky(bool stick);
    bool getNoSticky();
};