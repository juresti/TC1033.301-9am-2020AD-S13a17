//Clase Apagador del ejemplo de composición visto en clase \
23 de noviembre
#ifndef APAGADOR_C
#define APAGADOR_C

#include <string>
using namespace std;
class Apagador{
private:
    bool encendido;
public:
    Apagador(){encendido = false;}

    void encender(){encendido = true;}
    void apagar(){encendido = false;}
    bool isEncendido(){return encendido;}

    string print(){
        //Regresa el estado del objeto de manera legible \
        para una persona
        string estado {};
        if (isEncendido()) {estado = "encendido"; }
        else {estado = "apagado";}

        return "Apagador. Se encuentra " + estado + "\n";
    }
};//Clase Apagador

#endif
