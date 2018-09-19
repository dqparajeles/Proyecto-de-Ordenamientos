#ifndef LISTA_H
#define LISTA_H
#include "iostream"
template <class T>
class Pila
{
    class Nodo
    {  private:
        T *dato;
        Nodo* anterior=0;
        Nodo* siguiente=0;
       public:
           Nodo(T *pDato){
               dato=pDato;
               siguiente=0;
               anterior=0;
           }
           void asignarNodo(Nodo *pSiguiente,Nodo *pAnterior){
               siguiente=pSiguiente;
               anterior=pAnterior;
           }
           void setSiguiente(Nodo *pSiguiente){
               siguiente=pSiguiente;
           }
           Nodo* getSiguiente(){
               return siguiente;
           }
           T* getDato(){
               return dato;
           }
           void setDato(T *pDato){
               *dato=*pDato;
           }
           ~Nodo(){;}
    };


private:
    Nodo *nodoInicio=0;
    Nodo *nodoFinal=0;
    Nodo *nodoActual=0;

public:
    Pila(){}
    bool esVacia();
    void Agregar(T* dato);
    T* Sacar();
    bool verSiguiente();
    T* getDatoNodoActual();
    void SetDatoPosicion(T* dato,int Posicion);
    ~Pila();
};
#endif // LISTA_H

template <class T>
bool Pila<T>::esVacia(){
    if (nodoActual==0)
        return 1;
}
template <class T>
void Pila<T>::Agregar(T* dato){
    if (esVacia())
       nodoActual= new Nodo(dato);
    else{
       Nodo *nuevoNodo = new Nodo(dato);
       nuevoNodo->setSiguiente(nodoActual);
       nodoActual=nuevoNodo;
    }
}
template <class T>
T * Pila<T>:: Sacar(){
    if (esVacia())
        return ;
    T *datoaux;
    Nodo* nodoAuxiliar;
    nodoAuxiliar=nodoActual;
    nodoActual=nodoActual->getSiguiente();
    datoaux=nodoAuxiliar->getDato();
    delete nodoAuxiliar;
    return datoaux;
}

template <class T>
bool Pila<T>::verSiguiente(){
    if (nodoActual->getSiguiente()==nodoInicio)
        return 0;
    return 1;
}
template <class T>
T *Pila<T>::getDatoNodoActual(){
    return nodoActual->getDato();
}

template <class T>
void Pila<T>::SetDatoPosicion(T* dato,int Posicion){
    Nodo *NodoAux=0;
    NodoAux=nodoInicio;
    for (int n=0;n<Posicion;n++){
        NodoAux=NodoAux->getSiguiente();
    }
    NodoAux->setDato(dato);
    NodoAux=0;
    delete NodoAux;
}

template <class T>
Pila<T>::~Pila(){;}

