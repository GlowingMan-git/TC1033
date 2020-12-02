/*Programa que imprime cuántos números circulares primos hay debajo de 1,000,000*/
#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int num)
{
    int i=1;
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

int numLong(int num) 
{ 
    int longth = 0; 
    while (num > 0)
    { 
        num/=10; 
        longth++; 
    } 
    return longth; 
} 

bool rotations(int num) 
{ 
    int digits = numLong(num); 
    int power = pow(10, digits - 1); 
    bool flag=true;  
    for (int i = 0; i < digits - 1; i++) { 
  
        int initDig = num / power; 
        int left = ((num*10)+initDig)-(initDig*power*10); 
        if(checkPrime(left))
        {
            flag=false;
            break;
        } 
        num = left; 
    } 
    return flag;
} 

int main()
{
    int count;
    for(int i=1;i<=1000000;i++)
    {
        bool flag = rotations(i);
        if(flag!=true)
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    cout << "Hay " << count << " primos circulares entre el 0 y el 1000000.\n";

    return 0;
}