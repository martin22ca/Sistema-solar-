CuerpoCeleste::CuerpoCeleste( string n, double m, double px, double py, float vx, float vy)
{
    nombre=n;
    masa=m;
    posX=px;
    posY=py;
    velX=vx;
    velY=vy;
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

float CuerpoCeleste::getVelX()
{
    return velX;
}

float CuerpoCeleste::getVelY()
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

void CuerpoCeleste::setVelX( float vx )
{
    velX=vx;
}

void CuerpoCeleste::setVelY( float vy )
{
    velY=vy;
}
