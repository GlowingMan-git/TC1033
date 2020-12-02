/*Programa que indica si un valor X es un número circular primo. Los números circulares primos son aquellos que son números primos 
y que todas las rotaciones de dicho número también son primos. Ej. El número 197 es circular primo pq es primo y su primer 
rotación 971 también es primo, su segunda rotación 719 también es primo.*/
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
    int num;
    cout << "Ingrese un numero\n";
    cin >> num;
    bool flag = rotations(num);
    if(flag!=true)
    {
        cout << "No es primo circular\n";
    }
    else
    {
        cout << "Es primo circular\n";
    }

    return 0;
}

// Intentos fallidos a hacer las rotaciones con arreglos
// me gustó intentar el concepto, por eso los dejo aqui como comentarios

// bool rotations(int num)
// {
//     vector<int> digits_reversed;
//     vector<int> digits;
//     vector<bool> flag;

// // divide el numero en digitos y los mete en orden inverso a un vector
//     while(num>0)
//     {
//         digits_reversed.push_back(num%10);
//         num/=10;
//     }

//     int count = digits_reversed.size();
//     digits.reserve(count);
//     flag.reserve(count);
//     // cout << "tamaño: " << count << "\n";
    
//     int number;

// // corre el mismo numero de veces que hay digitos en el numero, ya que la cantidad de 
// // transformaciones rotacionales es igual a la cantidad de digitos del numero
//     while(count>0)
//     {
//         number = 0;
//         digits.clear();

// // crea el numero rotado
//         for(int i=0;i<digits_reversed.size();i++)
//         {
//             // cout << "num: " << digits_reversed[i] << "\n";
//             number+=digits_reversed[i]*pow(10,i+1);
//             cout << number << "\n";
//         }

// // mete el resultado de checkPrime a un vector
//         // cout << number << " " << checkPrime(number) << "\n";
//         flag.push_back(checkPrime(number));

// // mete los digitos a un segundo vector para modificar su orden mas fácilmente
//         for(int j=0;j<digits_reversed.size();j++)
//         {
//             digits.push_back(digits_reversed[j]);
//         }

//         int index;
//         digits_reversed.clear();

// // ingresa los digitos desde al segundo arreglo, digitd, a el primero, digits_reversed, de manera inversa desde el final hasta 
// // el segundo objeto, [1], y luego ingresa el primer objeto al inicio, escencialmente rotando el numero
//         for(int k=digits_reversed.size();k<0;k--)
//         {
//             digits_reversed.push_back(digits[k]);
//         }

//         digits_reversed.insert(digits_reversed.begin(),digits.at(0));
//         count--;
//     }

// //bandera final
//     bool final_flag = true;

// // checa que no haya elementos falsos en el vector flag
//     for(int f = 0;f<flag.size();f++)
//     {
//         if(flag[f]==false)
//         {
//             final_flag=false;
//             break;
//         }
//     }
//     return final_flag;
// }



// bool rotations(int num)
// {
//     int counter = 0;
//     int numb = num;
//     vector<bool> flag;

//     while(numb>0)
//     {
//         numb/=10;
//         counter++;
//     }

//     while(counter>0)
//     {
//         int number = num, dig,count=0;
//         while(number>0)
//         {
//             dig = number%10;
//             number/=10;
//             count++;
//         }
//         num*=10;
//         num-=(dig*pow(10,count));
//         num+=dig;
//         cout << num << "\n";
//         flag.push_back(checkPrime(num));
//         cout << "c\n";
//         counter--;
//     }

//     // bool final_flag = true;

//     // for(int f = 0;f<flag.size();f++)
//     // {
//     //     cout << "d\n";
//     //     if(flag[f]==false)
//     //     {
//     //         final_flag=false;
//     //         break;
//     //     }
//     //     cout << "e\n";
//     // }
//     // return final_flag;
// }