#include "headers/CuerpoCeleste.h"
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    //SistemaSolar ss(9);

    CuerpoCeleste sol("Sol",1.98e30, 0., 0.,0., 0., 15);
    CuerpoCeleste mercurio("Mercurio", 3.28e24, 6.99e10, 0.,0., 43479.17,2);
    CuerpoCeleste venus("Venus", 4.83e24, 1.09e11, 0.,0., 34840.23, 3);
    CuerpoCeleste tierra("Tierra", 5.98e24, 1.52e11, 0.,0., 29476.35, 4);
    CuerpoCeleste marte("Marte",6.37e23, 2.49e11, 0.,0., 23025.48, 5);
    CuerpoCeleste jupiter("Jupiter",1.9e27, 0., 8.16e11,-12723.41, 0., 6);
    CuerpoCeleste saturno("Saturno",5.67e26, 1.50e12, 0.,0., 9370.69, 7);
    cout<<sol.fuerza(tierra);
   // ss.addCC(Sol);

}
