#include <QCoreApplication>
#include "cadenaDePalabra.h"
#include<bits/stdc++.h>
#include <cstring>


char* cadenaDePalabra::getPalabra(){
    return palabra;
}

int cadenaDePalabra::comparar(cadenaDePalabra *palabraEntrada){
    for (int i=0; palabra[i]; i++)
        palabra [i] = toupper (palabra [i]);

    for (int i=0; palabraEntrada->getPalabra()[i]; i++)
        palabraEntrada->getPalabra() [i] = toupper (palabraEntrada->getPalabra()[i]);
}

void cadenaDePalabra::intercambiar(cadenaDePalabra *palabraEntrada){
    for (int i=0; palabra[i]; i++)
        if (palabra[i]==0xc3){
            switch(palabra[i]){
                case 'á':
                palabra[i]='a';
                break;
                case 'é':
                palabra[i]='e';
                break;
                case 'í':
                palabra[i]='i';
                break;
                case 'ó':
                palabra[i]='o';
                break;
                case 'ú':
                palabra[i]='u';
                break;
                case 'ñ':
                palabra[i]='n';
                break;
                case 'ü':
                palabra[i]='u';
                break;
            }
}
}
