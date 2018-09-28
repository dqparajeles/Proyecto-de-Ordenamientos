
#include<iostream>
//#include<conio.h>
#include<string.h>

using namespace std;

int main (){
    char palabra1[100];
    char palabra2[100];
    cout<<"escriba la primera palabra : ";
    cin.getline(palabra1,100,'\n');
    cout<<"escriba la segunda palabra : ";
    cin.getline(palabra2,100,'\n');
    if(strcmp(palabra1,palabra2)==0){
        std::cout<<"las palabras son iguales "<<std::endl;
    } else{ if(strcmp(palabra1,palabra2)>0){
            cout<<"la palabra "<<palabra2<<" es la palabra mayor alfabeticamente";
        } else{
            cout<<"la palabra "<<palabra1<<" es la palabra mayor  alfabeticamente";
        }
    }
    getchar();
    return 0 ;}
