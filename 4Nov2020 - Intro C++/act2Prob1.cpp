#include <iostream>
using namespace std;

char menu(){
    char op {};
    cout << "Selecciona la accion\n";
    cout << "<S> para suma\n";
    cout << "<R> para resta\n";
    cout << "<M> para multiplicacion\n";
    cout << "Opcion: "; cin >> op;
    return op;
}

void operaNumeros(){
    int num1 {}, num2 {};
    char opcion {};
    int resultado {};
    cout << "Dime el primer numero: "; cin >> num1;
    cout << "Dime el segundo numero: "; cin >> num2;

    opcion = menu();
    switch (opcion)
    {
    case 'S':
        resultado = num1 + num2;
        cout << "Tu resultado es: " << to_string(resultado) << endl;
        break;
    case 'R':
        resultado = num1 - num2;
        cout << "Tu resultado es: " << to_string(resultado) << endl;
        break;
    case 'M':
        resultado = num1 * num2;
        cout << "Tu resultado es: " << to_string(resultado) << endl;
        break;
    default:
        cout << "Tu opción no es correcta!!!\n";
        break;
    }
}

int main()
{
    //Problema 1
    operaNumeros();
    //Problema 2
    return 0;
}
