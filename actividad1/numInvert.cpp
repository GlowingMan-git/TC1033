/*Invierte un número de 6 cifras. Ej. El número a invertir es 350039 y el resultado es 930053*/
#include <iostream>

using namespace std;

int numInvert(int num);

int numInvert(int num)
{
    int sum = 0;
    int factor = 100000;
    while(num>0)
    {
        sum+=((num % 10)*factor);
        factor /= 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Ingrese un numero de 6 cifras\n";
    cin >> num;
    cout << numInvert(num);
    return 0;
}