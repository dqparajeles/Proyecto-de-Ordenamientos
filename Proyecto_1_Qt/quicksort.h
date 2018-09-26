#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "listaDobleCircular.h"
template<class T>
class QuickSort
{

public:
    QuickSort();
    void tri_rapide (ListaDobleCircular<T> *pLista, int taille, int inicio);
    ~QuickSort(){;}
};

#endif // QUICKSORT_H

template<class T>
QuickSort<T>::QuickSort()
{
}


template<class T>
void QuickSort<T>::tri_rapide (ListaDobleCircular<T> *pLista, int taille, int inicio) {
    int mur,courant;
    T  *pivot=pLista->GetDatoPosicion(taille-1+inicio);
    if (taille < 2) return;
    mur  = courant = 0;
    while (courant<taille) {
        if (*(pLista->GetDatoPosicion(courant+inicio)) <= *pivot) {
            if (mur != courant) {           
               pLista->intercarmbiarNodos(courant+inicio,mur+inicio);
            }
            mur ++;
        }
        courant ++;

    }

    tri_rapide(pLista, mur - 1,inicio);
    tri_rapide(pLista, taille - mur + 1,inicio +mur-1);
}
