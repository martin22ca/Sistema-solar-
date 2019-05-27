class CuerpoCeleste{
protected:
    string nombre;
    double masa;
    double posX, posY;
    float velX, velY;
public:
    CuerpoCeleste();
    CuerpoCeleste( string, double, double, double, float, float);
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
}
