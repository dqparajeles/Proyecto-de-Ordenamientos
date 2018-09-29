#ifndef LISTA_H
#define LISTA_H
#include "iostream"
#include <cstring>
#include <cctype>
using namespace std;

class cadenaDePalabra{
  private:
    char palabra[30];//23 caracteres tiene la palabras mas grande en espanol
  public:
    char* getPalabra();
    void obtenerPalabraAleatorio();
    int comparar(cadenaDePalabra *palabraEntrada);
};
#endif
