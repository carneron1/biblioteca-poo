#ifndef MENU_H
#define MENU_H
#include "Biblioteca.h"
#include "Persona.h"
#include "Fecha.h"
#include "Ubicacion.h"
#include "Ejemplar.h"
#include "Libro.h"
#include "Revista.h"
#include "Dvd.h"
#include "Apunte.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Menu
{
    public:
        /** Default constructor */
        Menu();
        Menu(Biblioteca *bib);
        /** Default destructor */
        virtual ~Menu();

        /*! Method
        *  Limpia la consola
        * @param: -
        * @retunr: -
        */
        void limpiarPantalla();

        /*! Method
        *  Se encarga de cargar en la memoria los encargados, ejemplares y clientes de los archivos de texto
        * tambien lista los encargados cargados en el sistema y permite elegir uno
        * @param: -
        * @retunr: -
        */
        void preMenu();
        /*! Method
        *  Presenta datos de la biblioteca, encargado actual y
        * las opciones de menu principal (alquileres, list ejemplares, opc ejemplares, opc bib).
        * recive por la entrada un numero que redirige a los submenus listados debajo.
        * Por ultimo llamama la funcion guardar de biblioteca.
        * @param: -
        * @retunr: -
        */
        bool menuPrincipal();

        /*! Method
        * Presenta las opciones del menu de alquileres. Redirige a Alquiler de ejemplar, devolver ejemplar, volver
        *  o llama a la funcion listar alquilados de bib.
        * @param: -
        * @retunr: -
        */



        void menuAlquileres();

        /*! Method
        *  Pide un numero de catalogo y usa la funcion vencimientoAlquiler para verificar si est siendo alquilado o no
        * si esta siendo alquilado redirige al submenu 1 y sino al submenu 2
        * @param: -
        * @retunr: -
        */
        void alquilerEjemplar();

        /*! Method
        *  Si entra en este menu significa que el libro esta siendo alquilado, presenta dos opciones,
        * terminar el alquiler o volver. para terminar el alquiler llama a la funcion de biblioteca alquilerejemplar
        * @param: Recive el numero de catalogo pedido por alquierEjemplar
        * @retunr: -
        */
        void subMenuAlquileres1(uint32_t  numCatalogoAux);

        /*! Method
        *  Si entra en este menu significa que el libro esta siendo alquilado, presenta dos opciones,
        * terminar el alquiler o volver. para terminar el alquiler llama a la funcion de biblioteca alquilerejemplar
        * @param: Recive el numero de catalogo pedido por alquierEjemplar
        * @retunr: -
        */
        void subMenuAlquileres2(uint32_t numCatalogoAux);

        /*! Method
        *  Pide el num de catalgo del ejemplar que se esta devolviendo y llama a la funcion de bibliteca alquilarEjemplar()
        * que setea el alquiler del ejemplar a No alquilado
        * @param: -
        * @retunr: -
        */
        void devolverEjemplar();

        /*! Method
        *  Presenta los tipos de ejemplares a listar y el orden, una vez seleccionadas estas dos cosas se llama a la fucion
        * de biblioteca listarEjemplares con esos dos parametros
        * @param: -
        * @retunr: -
        */
        void menuListado();

        /*! Method
        *  Presenta las opciones de ejmplares para ingrsar ejemplar, eliminar ejemplar o ver datos de un ejemplar.
        * llamado la alas funciones de la clase biblioteca
        * @param: Recive el numero de catalogo pedido por alquierEjemplar
        * @retunr: -
        */
        void menuEjemplares();


        /*! Method
        *  Se encarga de pedir que tipo de ejemplar se quiere ingresar, levanta los datos de consola y llama a la funcion ingresar
        * ejemplar de biblioteca.
        * @param: -
        * @retunr: puntero a ejemplar
        */
        Ejemplar* ingresaEjemplar();
        Libro* ingresarLibro();
        Revista* ingresarRevista();
        Dvd* ingresarDvd();
        Apunte * ingresarApunte();

        /*! Method
        *  Permite modificar los datos de la biblioteca y agregar encargados
        * @param:
        * @retunr: -
        */
        void menuBiblioteca();
        void modificarNombre();
        void modificarUbicacion();

        void agregarEncargado();

        void limpiarMemoria();

    protected:

    private:
        Biblioteca *bib;
};

#endif // MENU_H
