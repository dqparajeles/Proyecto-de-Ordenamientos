#include <QCoreApplication>
#include "quicksort.h"
#include<bits/stdc++.h>
#include <string>
#include "carrito.h"

template<typename T>
void tri_rapide (ListaDobleCircular<T> *pLista, int taille, int inicio);

int main(int argc, char *argv[])
{



    int *hola12,hola=0;
    hola12=&hola;
    int *hola144,hola1=7;
    hola144=&hola1;
    int *hola99,hola7=55;
    hola99=&hola7;
    int *hola2,hola3=1;
    hola2=&hola3;
    int *hola8,hola0=15;
    hola8=&hola0;
    int *hola5,hola55=1;
    hola5=&hola55;
    QuickSort<int>quicksort;
    Carrito carrito=Carrito(2,1,9);
    ListaDobleCircular<int> lista (hola2);
    lista.agregarSiguiente(hola12);
    lista.agregarSiguiente(hola8);
    lista.agregarInicio(hola144);
    lista.agregarInicio(hola144);
    lista.agregarInicio(hola144);
    lista.agregarInicio(hola99);
    lista.agregarFinal(hola5);
    lista.irNodoInicio();
    std::cout <<*(lista.GetDatoPosicion(0))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(1))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(2))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(3))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(4))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(5))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(6))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(7))<<std::endl;
    lista.irNodoInicio();
    quicksort.tri_rapide(&lista, 8, 0);

    std::cout <<*(lista.GetDatoPosicion(0))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(1))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(2))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(3))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(4))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(5))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(6))<<std::endl;
    std::cout <<*(lista.GetDatoPosicion(7))<<std::endl;
    lista.irNodoInicio();
//pLista->intercarmbiarNodosmur,courant);

    while(true){

        lista.eliminarSiguiente();
        if (!lista.verSiguiente()){
            break;
        }
    }
    std::string hola1234567;
    hola1234567="A";
    std::string hola123456;
    hola123456="AA";
    std::cout<<hola1234567.compare(hola123456)<<std::endl;
    QCoreApplication a(argc, argv);

    return a.exec();
}



