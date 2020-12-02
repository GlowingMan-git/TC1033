/*Escribe una función que reciba como parámetro un número entero. La función convierte el 
número en un número binario. La función devuelve el número binario*/
#include <iostream>

using namespace std;

int getIntLength(int num)
{
    int sum = 0;
    while(num>0)
    {
        num/=2;
        sum+=1;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Ingrese un numero\n";
    cin >> num;
    cout << "\nEn binario seria: \n";
    int length = getIntLength(num);
    int binary[length];
    int i = 0;
    while(num>0)
    {
        binary[i]=num%2;
        num /= 2;
        i += 1;
    }
    for(int j = length-1; j >= 0; j--)
    {
        cout << binary[j];
    }
    return 0;
}