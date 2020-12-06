#include "producto.h"
#pragma once


void producto::setPrecio(float price)
{
    precio = price;
}

float producto::getPrecio()
{
    return precio;
}

void producto::setPromocion(bool promo)
{
    promocion = promo;
}

bool producto::getPromocion()
{
    return promocion;
}

void producto::setInventario(int inventory)
{
    inventario = inventory;
}

int producto::getInventario()
{
    return inventario;
}