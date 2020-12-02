/*Escribe una función que recibe un número entero “n”. La función deberá leer del usuario “n” números y al final 
deberá imprimir y devolver cuál fue el número mayor que introdujo el usuario.*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese una cantidad de numeros\n";
    cin >> n;

    int number, max = 0, location;
    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero\n";
        cin >> number;
        if(number > max)
        {
            max = number;
            location = i;
        }
    }

    cout << "El mayor numero fue: " << max << ", que fue el " << location+1 << " numero que ingresaste.\n";

    return 0;
}