#include "headers/SistemaSolar.h"
#include <winbgim.h>

int main()
{
    SistemaSolar ss(9); //sistema solar con un máximo de 9 cuerpos

    //Se crean los cuerpos celestes con nombre, masa, posición x, posición y,
    //velocidad en x, velocidad en y, color de representacion
    CuerpoCeleste sol("Sol",1.98e30, 0., 0.,0., 0., 15);
    CuerpoCeleste mercurio("Mercurio", 3.28e24, 6.99e10, 0.,0., 43479.17,2);
    CuerpoCeleste venus("Venus", 4.83e24, 1.09e11, 0.,0., 34840.23, 3);
    CuerpoCeleste tierra("Tierra", 5.98e24, 1.52e11, 0.,0., 29476.35, 4);
    CuerpoCeleste marte("Marte",6.37e23, 2.49e11, 0.,0., 23025.48, 5);
    CuerpoCeleste jupiter("Jupiter",1.9e27, 0., 8.16e11,-12723.41, 0., 6);
    CuerpoCeleste saturno("Saturno",5.67e26, 1.50e12, 0.,0., 9370.69, 7);
    //Se agregan los cuerpos creados al sistema solar
    ss.addCC(sol);
    ss.addCC(mercurio);
    ss.addCC(venus);
    ss.addCC(tierra);
    ss.addCC(marte);
    ss.addCC(jupiter);
    ss.addCC(saturno);

    /*initwindow (1200,1200); //inicializa modo graficoç
    setcolor(sol.getColor());
    outtextxy (0,0,sol.getNombre());
    setcolor(mercurio.getColor());
    outtextxy (0,30,mercurio.getNombre());
    setcolor(venus.getColor());
    outtextxy (0,60,venus.getNombre());
    setcolor(tierra.getColor());
    outtextxy (0,90,tierra.getNombre());
    setcolor(marte.getColor());
    outtextxy (0,120,marte.getNombre());
    setcolor(jupiter.getColor());
    outtextxy (0,150,jupiter.getNombre());
    setcolor(saturno.getColor());
    outtextxy (0,180,saturno.getNombre());
*/
    //evolucion del sistema durante 20 años terrestres.

    for (int i=1;i<=7300;i++){
        ss.simular();
        ss.archivar();
        //ss.graficar();

    }

}
