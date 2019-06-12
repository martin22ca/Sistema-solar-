#include "../headers/SistemaSolar.h"
#include <winbgim.h>

SistemaSolar::SistemaSolar(int nm)
{
    cantMCC=nm;
    cantACP=0;
    CC=new CuerpoCeleste [cantMCC];
    fs.open ("Archivo.txt");
}

void SistemaSolar::addCC(CuerpoCeleste CCA)
{
    CC[cantACP]=CCA;
    cantACP++;
}

void SistemaSolar::simular()
{
    for(int i=0;i<cantACP;i++){
        cout<<"hola"<<endl;
        CC[i].mover(CC, cantACP, 100);
        cout<<CC[i].getNombre()<<" "<<" "<<CC[i].getPosX()<<" "<<CC[i].getPosY()<<endl;
    }
}

void SistemaSolar::archivar()
{
    for(int i=0;i<15;i++){
        fs<<CC[i].getNombre()<<" "<<CC[i].getPosX()<<" "<<CC[i].getPosY()<<endl;
    }
}


void SistemaSolar::graficar()
{
    for(int i=0;i<cantACP;i++){
        int x= (int) (CC[i].getPosX()/10e09);
        int y= (int) (CC[i].getPosY()/10e09);
        int m= (int) (CC[i].getMasa()/10e09);
        setcolor(CC[i].getColor());
        circle(x+600,y+400,100);
    }
}

SistemaSolar::~SistemaSolar()
{
    fs.close();
    delete [] CC;
}
