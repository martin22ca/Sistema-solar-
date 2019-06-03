#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char nombreFile[40];
    ofstream fs;
    cout<<"Ingrese el nombre de File a crear ";
    cin.ignore();
    cin.getline(nombreFile, 100);
    fs.open (nombreFile);
    for(int i=0;i<15;i++)
        fs<<"i= "<<i<<endl;
    fs.close();
}
