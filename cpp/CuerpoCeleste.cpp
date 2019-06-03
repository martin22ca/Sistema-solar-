#include<string.h>
#include "../headers/CuerpoCeleste.h"
#include<iostream>
#include<math.h>
using namespace std;

CuerpoCeleste::CuerpoCeleste( string n, double m, double px, double py, double vx, double vy, int c)
{
    nombre=n;
    masa=m;
    posX=px;
    posY=py;
    velX=vx;
    velY=vy;
    color=c;
}

string CuerpoCeleste::getNombre()
{
    return nombre;
}

double CuerpoCeleste::getMasa()
{
    return masa;
}

double CuerpoCeleste::getPosX()
{
    return posX;
}

double CuerpoCeleste::getPosY()
{
    return posY;
}

double CuerpoCeleste::getVelX()
{
    return velX;
}

double CuerpoCeleste::getVelY()
{
    return velY;
}

void CuerpoCeleste::setNombre( string n)
{
    nombre=n;
}

void CuerpoCeleste::setMasa( double m )
{
    masa=m;
}

void CuerpoCeleste::setPosX( double px )
{
    posX=px;
}

void CuerpoCeleste::setPosY( double py )
{
    posY=py;
}

void CuerpoCeleste::setVelX( double vx )
{
    velX=vx;
}

void CuerpoCeleste::setVelY( double vy )
{
    velY=vy;
}

double CuerpoCeleste::fuerza(CuerpoCeleste b)
{
    double m2=b.getMasa();
    double px2=b.getPosX();
    double py2=b.getPosY();
    double dX=pow(px2-posX,2);
    double dY=pow(py2-posY,2);
    double distance=sqrt(dX+dY);
    return (((6.674e-11)*(masa*m2))/(pow(distance,2)));
}

double CuerpoCeleste::velocidad()
{

}

/*double CuerpoCeleste::aceleracion( double fuerza, double m)
{
    return fuerza/m;
}*/


/*
double CuerpoCeleste::posicion( double px, double py, float vx, float vy )
{
    posi -vi*dt
    return
}*/
