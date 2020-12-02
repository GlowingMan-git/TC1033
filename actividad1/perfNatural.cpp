/*Programa que imprime si un número X es natural perfecto. 
Los números naturales perfectos son aquellos cuya suma de sus divisores 
(Ej. El número 6 es natural perfecto porque es igual a la suma de sus divisores 6 = 1+2+3)*/
#include <iostream>

using namespace std;

int main()
{
    int n, i=1, sum=0;
    cout << "Ingrese un numero\n";
    cin >> n;
    while(i<n)
    {
        if(n%i==0)
        {
            sum += i;
        }
        i+=1; 
    }
    if(sum == n)
    {
        cout << i << " es natural perfecto\n"; 
    }
    else
    {
        cout << i << " no es natural perfecto\n";
    }
    return 0;
}