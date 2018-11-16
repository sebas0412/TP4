#ifndef LISTA_H
#define LISTA_H


#include <iostream>

using namespace std;

class Lista
{
        struct Nodo
        {
            int n;
            Nodo *next;
        };
public:
    Nodo *cabeza, *cola;
    //int num[20];
    int conta;
    Lista()
    {
        conta = 0;
        cabeza = NULL;
        cola = NULL;
    }
    void addFinal(int dato);
    //void Mostrar();
    int getSize();
    //void modificarPos(int pos, int dato);
    //void modificarDato(int viejo, int nuevo);
    //void borrarPos(int pos);
    void borrarDato(int dato);
    bool Buscar(int dato);
};

#endif // LISTA_H
