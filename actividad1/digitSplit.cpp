/*Crea un programa que imprima los dígitos (de manera individual) de un número 5 cifras*/
#include <iostream>

using namespace std;

void digitSplit(int num)
{
    while(num>0)
    {
        cout << "\n" << num%10 << " ";
        num /= 10;
    }
    cout << "\n";
}

int main()
{
    int num;
    cout << "Ingrese un numero de 5 digitos\n";
    cin >> num;
    digitSplit(num);
    return 0;
}