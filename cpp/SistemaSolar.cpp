#include "../headers/SistemaSolar.h"
#include <winbgim.h>

SistemaSolar::SistemaSolar(int nm)
{
    cantMCC=nm;
    cantACP=0;
    CC=new CuerpoCeleste [cantMCC];
    //fs.open ("../SistemaSolar.txt");
}

void SistemaSolar::addCC(CuerpoCeleste CCA)
{
    CC[cantACP]=CCA;
    cantACP++;
}

void SistemaSolar::simular()
{
    for(int i=0;i<cantACP;i++){
        CC[i].mover(CC, cantACP, 86400);
        //cout<<CC[i].getNombre()<<" "<<" "<<CC[i].getPosX()<<" "<<CC[i].getPosY()<<endl;
    }
}

void SistemaSolar::archivar()
{

}

void SistemaSolar::graficar()
{
    for(int i=0;i<cantACP;i++){
        double x=CC[i].getPosX();
        double y=CC[i].getPosY();
        int c=CC[i].getColor();
        int x1 = int (x);
        int y1 = int (y);
        putpixel(x1,y1,c);
    }
}

SistemaSolar::~SistemaSolar()
{

}
