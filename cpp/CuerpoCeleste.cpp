#include<string.h>
#include "../headers/CuerpoCeleste.h"
#include<iostream>
#include<math.h>
using namespace std;


CuerpoCeleste::CuerpoCeleste()
{
    nombre="";
    masa=0;
    posX=0;
    posY=0;
    velX=0;
    velY=0;
    color=0;
}

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
/*
void CuerpoCeleste::fuerza(CuerpoCeleste b)
{
    double m2=b.getMasa();
    double px2=b.getPosX();
    double py2=b.getPosY();
    double dX=pow(px2-posX,2);
    double dY=pow(py2-posY,2);
    double distance=sqrt(dX+dY);
    return (((6.674e-11)*(masa*m2))/(pow(distance,2)));
}*/

double CuerpoCeleste::Fx(CuerpoCeleste* cc, int n)
{
    double fx=0;
    double dist;
    double G=6.674e-11;
    for(int i=0;i<n;i++){
        dist=sqrt(pow((cc[i].getPosX()-getPosX()),2)+ pow((cc[i].getPosY()-getPosY()),2));
        if(dist!=0)
            fx+=(G*cc[i].getMasa()*getMasa()/(dist*dist))*(cc[i].getPosX()-getPosX())/dist;
    }
    return fx;
}

double CuerpoCeleste::Fy(CuerpoCeleste* cc, int n)
{
    double fy=0;
    double dist;
    double G=65.674e-11;
    for(int i=0;i<n;i++){
        dist=sqrt(pow((cc[i].getPosX()-getPosX()),2)+ pow((cc[i].getPosY()-getPosY()),2));
        if(dist!=0)
            fy+=(G*cc[i].getMasa()*getMasa()/(dist*dist))*(cc[i].getPosY()-getPosY())/dist;
    }
    return fy;
}

void CuerpoCeleste::mover(CuerpoCeleste* cc, int n, int t)
{
    velX+=Fx(cc,n)/getMasa()*t;
    velY+=Fy(cc,n)/getMasa()*t;
    posX+=velX*t;
    posY+=velY*t;
}

int CuerpoCeleste::getColor()
{
    return color;
}
