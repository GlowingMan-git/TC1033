/*Escribe una función que verifica si un número es palíndromo o no. Los números palíndromos son aquellos que se leen
igual de izquierda a derecha que de derecha a izquierda.*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// int numInvert(int num, int length)
// {
//     int sum = 0;
//     int factor = 1*pow(10,length);
//     while(num>0)
//     {
//         sum+=((num % 10)*factor);
//         factor /= 10;
//         num /= 10;
//     }
//     return sum;
// }

int getIntLength(int num)
{
    int sum = 0;
    while(num>0)
    {
        num/=10;
        sum++;
    }
    return sum;
}

int main()
{
    int num,number;
    vector<int> digits;

    cout << "Ingrese un numero que crea es palindromo\n";
    cin >> num;
    cout << "\n";

    int length = getIntLength(num);
    number = num;

    for(int i = 0;i<length;i++)
    {
        digits.push_back(number%10);
        number/=10;
    }

    int reversed=0;
    int power = length-1;

    for(int j =0;j<length;j++)
    {
        reversed+=(digits.at(j)*pow(10,power));
        power--;
    }

    if(num == reversed)
    {
        cout << num << " es palindromo\n";
    }
    else
    {
        cout << num << " no es palndromo\n";
    }
    
    return 0;
}