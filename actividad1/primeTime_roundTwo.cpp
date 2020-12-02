/*Cuántos números naturales primos hay entre 1 y 1,000,000*/
#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    for(int i = 1; i <= 1000000; i++)
    {
        bool flag = true;
        for(int j = 2; j < i ; j++)
        {
            if(i%j==0)
            {
                flag = false;
                cout << "yes\n";
                break;
            }
        }

        if(flag==false)
        {
            continue;
        }
        else
        {
            sum++;
        }
    }
    cout << "Hay " << sum << " numeros primos entre 1 y 1,000,000\n";
    return 0;
}