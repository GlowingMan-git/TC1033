/*Dada una secuencia de números primos, siendo el primer primo el número 2, el segundo primo el 3 y así sucesivamente, 
cuál es el número primo 10,001 de la secuencia?*/
#include <iostream>

using namespace std;

bool checkPrime(int num)
{
    int i=2;
    bool flag = true;
    while(i<num)
    {
        if(num%i==0)
        {
            flag = false;
            break;
        }
        i++;
    }
    return flag;
}

int main()
{
    bool infinity = true, primeCheck;
    int counter = 0, prime = 2;

    while (infinity)
    {
        if(checkPrime(prime))
        {
            counter++;
        }
        
        if(counter==10001)
        {
            cout << prime << " es el 10001 primo.\n";
            infinity = false;
        }
        prime++;
    }
}