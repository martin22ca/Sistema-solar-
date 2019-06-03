#include <iostream>
#include <string.h>
using namespace std;

class CuerpoCeleste{
protected:
    string nombre;
    double masa;
    double posX, posY;
    float velX, velY;
public:
    CuerpoCeleste();
    CuerpoCeleste( string, double, double, double, float, float); // Falta color represent
    string getNombre();
    double getMasa();
    double getPosX();
    double getPosY();
    float getVelX();
    float getVelY();
    void setNombre(string);
    void setMasa(double);
    void setPosX(double);
    void setPosY(double);
    void setVelX(float);
    void setVelY(float);
    double fuerza(CuerpoCeleste&);

    double velocidad();
    double aceleracion(double);
    double posicion(double, double);
};
