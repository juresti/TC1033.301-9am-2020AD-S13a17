//Clase Apagador del ejemplo de composición visto en clase \
23 de noviembre
#ifndef APAGADOR_C
#define APAGADOR_C

#include <string>
#include <iostream>
using namespace std;
class Apagador{
private:
    bool encendido;
public:
    Apagador(){encendido = false;}
    ~Apagador(){cout << "Destruyendo objeto Apagador\n";}

    void encender(){encendido = true;}
    void apagar(){encendido = false;}
    bool isEncendido(){return encendido;}

    string print(){
        //Regresa el estado del objeto de manera legible \
        para una persona
        string estado {};
        if (isEncendido()) {estado = "encendido"; }
        else {estado = "apagado";}

        return "Apagador. Se encuentra " + estado;
    }
};//Clase Apagador

#endif
