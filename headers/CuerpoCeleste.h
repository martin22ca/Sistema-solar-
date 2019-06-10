#include <iostream>
#include <string.h>
using namespace std;

class CuerpoCeleste{
protected:
    string nombre;
    int color;
    double masa;
    double posX, posY;
    double velX, velY;
public:
    CuerpoCeleste();
    CuerpoCeleste( string, double, double, double, double, double, int);
    double getMasa();
    double getPosX();
    double getPosY();
    double getVelX();
    double getVelY();
    string getNombre();
    void setNombre(string);
    void setMasa(double);
    void setPosX(double);
    void setPosY(double);
    void setVelX(double);
    void setVelY(double);
    int getColor();
    //double fuerza(CuerpoCeleste);
    double Fx(CuerpoCeleste*, int);
    double Fy(CuerpoCeleste*, int);
    void mover(CuerpoCeleste*, int, int );
};
