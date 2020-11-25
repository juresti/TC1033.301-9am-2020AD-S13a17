//Codigo para probar y usar las clases \
del ejercicio de composición de la Lampara \
23 noviembre
#include "Apagador.h"
#include "Foco.h"
#include "Lampara.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "***** Pruebas de Apagador\n";
    Apagador ap1;
    cout << ap1.isEncendido() << endl;
    ap1.encender();
    cout << ap1.isEncendido() << endl;
    ap1.apagar();
    cout << ap1.isEncendido() << endl;
    cout << ap1.print() << endl;

    cout << "\n***** Pruebas de Foco\n";
    Foco foco1{};
    cout << foco1.getLuminosidad() << endl;
    cout << foco1.getColor() << endl;
    Foco foco2{100,"Verde"};
    cout << foco2.print() << endl;

    cout << "\n***** Pruebas de Lampara\n";
    Lampara lamp1{};
    cout << lamp1.getColor() << endl;
    cout << lamp1.getCosto() << endl;
    lamp1.encender();
    cout << lamp1.isEncendida() << endl;
    lamp1.apagar();
    cout << lamp1.print() << endl;
    Lampara lamp2{"Morada",999.99};
    cout << lamp2.print() << endl;
    lamp2.setCosto(799.99);
    lamp2.cambiarFoco(500,"Rojo");
    cout << lamp2.colorFoco() << endl;
    cout << lamp2.luminosidadFoco() << endl;
    cout << lamp2.print() << endl;

    return 0;
}
