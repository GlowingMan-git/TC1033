#pragma once

class producto
{
protected:
    float precio;
    bool promocion;
    int inventario;

public:
    void setPrecio(float price);
    float getPrecio();

    void setPromocion(bool promo);
    bool getPromocion();

    void setInventario(int inventory);
    int getInventario();
};