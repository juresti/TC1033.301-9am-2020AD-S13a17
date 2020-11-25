//Clase Lampara del ejercicio de composición \
25 de noviembre
#ifndef LAMPARA_C
#define LAMPARA_C

#include "Apagador.h"
#include "Foco.h"
#include <string>
using namespace std;
class Lampara{
private:
    string color;
    float costo;
    Foco foco;
    Apagador apagador;
public:
    Lampara(){
        color = "Blanca"; //Asignando valores
        costo = 499.99;
        foco = Foco{};
        apagador = Apagador{};
    }

                                    //member initializing list (inicialización)
    Lampara(string col,float cost) : color{col},costo{cost},foco{100,"Blanco"},apagador{}
    {//ya no se inicializan aqui las variables
    //solamente se mandan llamar procesos necesarios (en caso necesario)
    }

    string getColor(){return color;}
    float getCosto(){return costo;}

    void setCosto(float c){costo = c;}

    string encender(){
        apagador.encender(); //enciende el apagador de la lampara
        return "La lampara se encendio";
    }
    string apagar(){
        apagador.apagar();
        return "La lampara se apago";
    }

    bool isEncendida(){
        return apagador.isEncendido();
    }

    string cambiarFoco(int lum,string color){
        this->foco = Foco{lum,color};
        return "Foco cambiado";
    }

    string colorFoco(){
        return foco.getColor();
    }

    int luminosidadFoco(){
        return foco.getLuminosidad();
    }

    string print(){
        return "Lampara(" + color + "," + to_string(costo) + "," + foco.print() + "," + apagador.print() + ")";
    }
}; //Clase Lampara

#endif
