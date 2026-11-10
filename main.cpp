
#include <iostream>
using namespace std;

int main() {

    double numero1, numero2;
    double suma, resta, multiplicacion, division;

    cout << "Escribe el primer numero: ";
    cin >> numero1;

    cout << "Escribe el segundo numero: ";
    cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;

    cout << endl;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;

    if (numero2 != 0) {
        division = numero1 / numero2;
        cout << "La division es: " << division << endl;
    }
    else {
        cout << "La division no se puede realizar entre cero." << endl;
    }

    return 0;
}
