#include <iostream>
#include"Ejemplar.h"
#include"Libro.h"
#include "Biblioteca.h"
#include "Menu.h"
#include <cstdlib>
using namespace std;


int main()
{
    bool salida=false;
    cout<<endl;
    Biblioteca bib("Ing UNMDP", Ubicacion("JB justo 4300", "2235321654", "lib@unmdp.com", 7600));
    Menu menu(&bib);
    try{
        do
        {
            menu.preMenu();
            salida =menu.menuPrincipal();
            menu.limpiarMemoria();
        } while (salida ==false );


    }catch (const char* e){
        cout<<e<<endl;
    }
    return 0;

}
