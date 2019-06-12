#include "CuerpoCeleste.h"
#include <fstream>
class SistemaSolar{
protected:
    int cantMCC;
    int cantACP;
    CuerpoCeleste* CC;
    ofstream fs;
public:
    SistemaSolar(int);
    void addCC(CuerpoCeleste);
    void simular();
    void archivar();
    void graficar();
    ~SistemaSolar();
};
