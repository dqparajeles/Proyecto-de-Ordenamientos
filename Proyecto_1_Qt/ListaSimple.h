#ifndef LISTA_H
#define LISTA_H
#include "iostream"
template <class T>
class ListaSimple
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
    ListaSimple(T *dato);
    void avanzarEnLista();
    void agregarFinal(T *dato);
    void agregarInicio(T *dato);
    void agregarSiguiente(T *dato);
    void irNodoInicio();
    void irNodoFinal();
    bool verActual();
    T* getDatoNodoActual();
    void eliminarSiguiente();
    T* GetDatoPosicion(int Posicion);
    void SetDatoPosicion(T* dato,int Posicion);
    ~ListaSimple();
};
#endif // LISTA_H

template <class T>
ListaSimple<T>::ListaSimple(T *dato)
{
    nodoActual= new Nodo(dato);
    nodoFinal=nodoActual;
    nodoInicio=nodoActual;
}

template <class T>
void ListaSimple<T>::agregarSiguiente( T *dato){
    Nodo *nuevoNodo= new Nodo(dato);
    if (nodoActual==nodoFinal){
        nodoFinal->setSiguiente(nuevoNodo);
        nodoFinal=nuevoNodo;
    }else{
            nuevoNodo->setSiguiente(nodoActual->getSiguiente());
            nodoActual->setSiguiente(nuevoNodo);
        }
    }

template <class T>
void ListaSimple<T>::agregarInicio(T *dato){
    Nodo *nuevoNodo=new Nodo(dato);
    nuevoNodo->setSiguiente(nodoInicio);
    nodoInicio=nuevoNodo;
}

template <class T>
void ListaSimple<T>::agregarFinal(T *dato){
    Nodo *nuevoNodo=new Nodo(dato);
    nodoFinal->setSiguiente(nuevoNodo);
    nodoFinal=nuevoNodo;
}
template <class T>
void ListaSimple<T>::avanzarEnLista(){
    if (!(nodoActual==nodoFinal))
       nodoActual=nodoActual->getSiguiente();
}
template <class T>
void ListaSimple<T>::irNodoFinal(){
    nodoActual=nodoFinal;
}
template <class T>
void ListaSimple<T>::irNodoInicio(){
    nodoActual=nodoInicio;
}
template <class T>
bool ListaSimple<T>::verActual(){
    if (nodoActual->getSiguiente()==0)
        return 0;
    return 1;
}
template <class T>
T *ListaSimple<T>::getDatoNodoActual(){
    return nodoActual->getDato();
}
template <class T>
void ListaSimple<T>::eliminarSiguiente(){
    Nodo *nodoSig=nodoActual->getSiguiente();
    if (nodoSig->getSiguiente()!=nodoSig){
        nodoActual->setSiguiente(nodoSig->getSiguiente() );
        delete nodoSig;
    }
}
template <class T>
T* ListaSimple<T>::GetDatoPosicion(int Posicion){
    Nodo *NodoAux=0;
    T *datoDeRetorno;
    NodoAux=nodoInicio;
    for (int n=0;n<Posicion;n++){
        NodoAux=NodoAux->getSiguiente();
    }
    datoDeRetorno=NodoAux->getDato();
    NodoAux=0;
    delete NodoAux;
    return datoDeRetorno;
}
template <class T>
void ListaSimple<T>::SetDatoPosicion(T* dato,int Posicion){
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
ListaSimple<T>::~ListaSimple(){;}
