/*Programa que imprime el 
número de números primos que hay entre 1 y 1000*/
#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 1000; i++)
    {
        bool flag = true;
        for(int j = 2; j < i ; j++)
        {
            if(i%j==0)
            {
                flag = false;
                break;
            }
        }
        if(flag==false)
        {
            continue;
        }
        else
        {
            cout<< i <<" es primo\n";
        }
    }
    return 0;
}