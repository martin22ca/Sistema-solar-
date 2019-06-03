#include "CuerpoCeleste.h"

class SistemaSolar{
protected:
    int cantMCC;
    int cantACP;
    CuerpoCeleste* CC;
    ofstream fs;
public:
    SistemaSolar(); //nmax
    SistemaSolar(int);
    void addCC(CuerpoCeleste);
    void simular();
    void archivar();
    void graficar();
    ~SistemaSolar();
};


SistemaSolar::SistemaSolar(int nmax){
    nCCMax=nmax;
    nccactual=0;
    cc=new CuerpoCeleste[nccmax];
    fs.open ("../SistemaSolar.txt");
}
