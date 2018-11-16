#include <iostream>
#include "lista.h"

using namespace std;

class Neurona{
    float carga;
    float umbral;
    Lista conexiones;
    void agregarConexion(Neurona neurona, float peso){

    }

    void aplicarCarga(float carga){

    }
    //Carga aplicarCarga(carga);

};

class Conexion{
    Neurona r;
    float peso;
    Conexion(Neurona r2, float peso2){
        r = r2;
        peso = peso2;
    }

};



class Capa{
    //Neurona neuronas;
    Lista neuronas;
    void agregarNeurona(Neurona neuronas){

    }
};

class RedNeuronal{
    Lista capas;

    RedNeuronal(){
        
    }
    void agregarCapa(int cNeuronas){
        for(int i=0; i<cNeuronas;i++){

        }
    }
    string Clasificar(int dato){
        string genero;


        return genero;
    }
    
    void Entrenar(int datos){
        
    }
};

int main()
{
    //cout << "Hello World123!" << endl;
    return 0;
}
