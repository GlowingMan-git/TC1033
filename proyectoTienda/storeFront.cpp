/*
Individual:
Emiliano Cabrera Ruiz - A01025453

Situación Problema TC1033.301

'COVID-19 acelera el comercio electrónico y pagos sin contacto en América Latina.'
*/

#include "organic.h"
#include "books.h"
#include "kitchenware.h"
#include "oxygen_tanks.h"

#include <string>
#include <iostream>
#pragma once

using namespace std;

int main()
{
    //generacion de productos

    //bienes perecederos
    organic almond = organic("Almendras quemadas", "en bolsa", 3, 2021, 3.49, true, 500); //producto 1: almendras en bolsa, promo 2x1, precio de $3.49
    organic cabbage = organic("Lechuga en caja","empaquetado",12,2020,5.10,false,200); //producto 2: cajita de lechuga, precio de $5.10
    organic tofu = organic("Tofu organico natural","empaquetado",5,2021,7.49,false,500); //producto 3: tofu en caja, precio de $7.49
    
    //libros
    book fiction = book("Time Travel in a Nutshell","9807682365461","David Tennant",300,15.99,false,150); //producto 4: libro de 300 paginas, precio de $15.99
    book science = book("Science and You","3567823490715","Jonathan Kennedy",879,30.80,false,200); //producto 5: libro de ciencias de 879 paginas, precio de $30.8
        
    //material metálico
        metals hardened_steel = metals(20,0.7,"Acero Templado"); //metal tipo 1: acero templado
        metals titanium_alloy = metals(15, 1, "Titanio galvanizado"); //metal tipo 2: titanio galvanizado
        metals lightweight_steel = metals(10, 2, "Acero-Titanio-Cobalto"); //metal tipo 3: acero ligero
    
    //utensilios de cocina
    kitchenware pan = kitchenware(5,hardened_steel,true,20.99,true,600); //producto 6: sartén de 5 in. de radio, de acero templado, anti-stick, promo de 2x1, precio de $20.99 
    kitchenware pot = kitchenware(8,titanium_alloy,false,18.49, false,300); //producto 7: olla de 8 in. de radio, de titanio galvanizado, precio de $18.49
    kitchenware wok = kitchenware(7,hardened_steel,true,60.45,false,200); //producto 8: wok de 7 in. de radio, de acero templado, anti-stick precio de $60.45
    
    //tanques de oxígeno
    oxygen_tanks diving_tank = oxygen_tanks(18,lightweight_steel,"butt-weld",50.25,false,50); //producto 9: tanque de buceo de 18L, de acero ligero, precio de $50.25
    oxygen_tanks home_tank = oxygen_tanks(400,hardened_steel,"screwed",150.49,true, 150); //producto 10: tanque de oxígeno casero de 400L, de acero templado, precio de $150.49

    bool cont = true;
    char check;
    short int prod;
    float sum = 0.0;

    //tienda
    cout << "|-----|Tienda de abarrotes 'Los Dolores'|-----|\n";
    
    while(cont)
    {
        cout << "|-----|Productos|-----|\n";
        cout << "1.- " << almond.getName() << ". Caducidad: " << almond.getCadMonth() << "/" << almond.getCadYear() << " - Precio: $" << almond.getPrecio() << ", promocion disponible de 2x1." << "\n";
        cout << "2.- " << cabbage.getName() << ". Caducidad: " << cabbage.getCadMonth() << "/" << cabbage.getCadYear() << " - Precio: $" << cabbage.getPrecio() << "\n";
        cout << "3.- " << tofu.getName() << ". Caducidad: " << tofu.getCadMonth() << "/" << tofu.getCadYear() << " - Precio: $" << tofu.getPrecio() << "\n";
        cout << "4.- '" << fiction.getTitle() << "' de " << fiction.getAuthor() <<  " Longitud: " << fiction.getPages() << "paginas - Precio: $" << fiction.getPrecio() << "\n";
        cout << "5.- '" << science.getTitle() << "' de " << science.getAuthor() << " Longitud: " << science.getPages() << "paginas - Precio: $" << science.getPrecio() << "\n";
        cout << "6.- Sarten de " << pan.getRadius() << "in. de radio. Anti-stick, hecho de " << pan.getMetal().getMaterial() << " - Precio: $" << pan.getPrecio() << ", promocion disponible de 2x1." << "\n";
        cout << "7.- Olla de " << pot.getRadius() << "in. de radio. Hecho de " << pot.getMetal().getMaterial() << " - Precio: $" << pot.getPrecio() << "\n";
        cout << "8.- Wok de " << wok.getRadius() << "in. de radio. Anti-stick, hecho de " << wok.getMetal().getMaterial() << " - Precio: $" << wok.getPrecio() << "\n";
        cout << "9.- Tanque de buceo de " << diving_tank.getCapacity() << "L. Hecho de " << diving_tank.getMetal().getMaterial() << ". Valvula tipo " << diving_tank.getValve() << " - Precio: $" << diving_tank.getPrecio() << "\n";
        cout << "0.- Tanque oxigeno de " << home_tank.getCapacity() << "L. Hecho de " << home_tank.getMetal().getMaterial() << ". Valvula tipo " << home_tank.getValve() << " - Precio: $" << home_tank.getPrecio() << ", promocion disponible de 2x1." << "\n";
        cout << "|-----|Desea agregar algo al carrito de compras?|-----|\nY.- Si\tN.- No\n";
        
        cin >> check;
        bool defaulter = false;
        short int qty = 0;

        if(check=='Y')
        {
            cout << "Ingrese el numero del producto que desea agregar\n";
            cin >> prod;    

            cout << "Ingrese la cantidad a comprar\n";
            cin >> qty; 

            if(qty<=0)
            {
                cout << "Cantidad invalida\n";
                continue;
            }
            else
            {
                switch(prod)
                {
                    case 1:
                        if(qty%2==0)
                        {
                            for(int i = 0;i<(qty/2);i++)
                            {
                                sum+=almond.getPrecio();
                            }
                        }
                        else
                        {
                            qty--;
                            for(int i = 0;i<(qty/2);i++)
                            {
                                sum+=almond.getPrecio();
                            }
                            sum+=almond.getPrecio();
                        }
                        break;

                    case 2:
                        sum+=cabbage.getPrecio();
                        break;

                    case 3:
                        sum+=tofu.getPrecio();
                        break;

                    case 4:
                        sum+=fiction.getPrecio();
                        break;

                    case 5:
                        sum+=science.getPrecio();
                        break;

                    case 6:
                        if(qty%2==0)
                        {
                            for(int i = 0;i<(qty/2);i++)
                            {
                                sum+=pan.getPrecio();
                            }
                        }
                        else
                        {
                            qty--;
                            for(int i = 0;i<(qty/2);i++)
                            {
                                sum+=pan.getPrecio();
                            }
                            sum+=pan.getPrecio();
                        }
                        break;

                    case 7:
                        sum+=pot.getPrecio();
                        break;

                    case 8:
                        sum+=wok.getPrecio();
                        break;

                    case 9:
                        sum+=diving_tank.getPrecio();
                        break;

                    case 0:
                        if(qty%2==0)
                        {
                            for(int i = 0;i<(qty/2);i++)
                            {
                                sum+=home_tank.getPrecio();
                            }
                        }
                        else
                        {
                            qty--;
                            for(int i = 0;i<(qty/2);i++)
                            {
                                sum+=home_tank.getPrecio();
                            }
                            sum+=home_tank.getPrecio();
                        }
                        break;

                    default:
                        cout << "Opcion invalida\n";
                        defaulter = true;
                        break;
                }

                if(defaulter == true)
                {
                    continue;
                }  
            }
        }
        else
        {
            if(check!='N')
            {
                cout << "Opcion invalida\n";
                continue;
            }
            else
            {
                cont = false;
                continue;
            }
        }
    }

    char buy;

    cout << "Desea comprar los articulos?\nY.- Si\tN.- No\n";
    cin >> buy;
    if(buy == 'Y')
    {
        cout << "Total: $" << sum << "\n";
        cout << "Se han comprado los articulos y ahora es usted " << sum << " pesos mas pobre.\n";
    }
    else
    {
        cout << "Ha decidido no comprar nada.\n\nTenga un buen dia!\n";
    }
    
    return 0;
}