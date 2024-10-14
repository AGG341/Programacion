// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main() {

    locale loc("");
    cout.imbue(loc);
    // 1. Entero (int)
    int numeroEntero = 42;
    cout << "Entero: " << numeroEntero << endl;
    cout << "Rango Entero : " << numeric_limits<int>::min() << " a " << numeric_limits<int>::max() ;

    // 2. Entero corto (short int)
    short int numeroCorto = 32000;
    cout << "Entero corto: " << numeroCorto << endl;
    cout << "Rango Entero corto : " << numeric_limits<short int>::min() << " a " << numeric_limits<short int>::max() ;


    // 3. Entero largo (long int)
    long int numeroLargo = 1234567890L;
    cout << "Entero largo: " << numeroLargo << endl;
    cout << "Rango Entero largo : " << numeric_limits<long int>::min() << " a " << numeric_limits<long int>::max();

    // 4. Entero sin signo (unsigned int)
    unsigned int numeroSinSigno = 4000000000U;
    cout << "Entero sin signo: " << numeroSinSigno << endl;
    cout << "Rango Entero sin signo : " << numeric_limits<unsigned int>::min() << " a " << numeric_limits<unsigned int>::max();

    // 5. Entero corto sin signo (unsigned short int)
    unsigned short int numeroCortoSinSigno = 65000;
    cout << "Entero corto sin signo: " << numeroCortoSinSigno << endl;
    cout << "Rango Entero corto sin signo : " << numeric_limits<unsigned short int>::min() << " a " << numeric_limits<unsigned short int>::max();

    // 6. Entero largo sin signo (unsigned long int)
    unsigned long int numeroLargoSinSigno = 4000000000UL;
    cout << "Entero largo sin signo: " << numeroLargoSinSigno << endl;
    cout << "Rango Entero largo sin signo : " << numeric_limits<unsigned long int>::min() << " a " << numeric_limits<unsigned long int>::max();

    // 7. Entero con signo explícito (signed int)
    signed int numeroConSigno = -42;
    cout << "Entero con signo: " << numeroConSigno << endl;
    cout << "Rango Entero con signo explicito : " << numeric_limits<signed int>::min() << " a " << numeric_limits<signed int>::max();

    // 8. Entero corto con signo explícito (signed short int)
    signed short int numeroCortoConSigno = -32000;
    cout << "Entero corto con signo: " << numeroCortoConSigno << endl;
    cout << "Rango Entero corto con signo : " << numeric_limits<signed short int>::min() << " a " << numeric_limits<signed int>::max();

    // 9. Entero largo con signo explícito (signed long int)
    signed long int numeroLargoConSigno = -1234567890L;
    cout << "Entero largo con signo: " << numeroLargoConSigno << endl;
    cout << "Rango Entero largo con signo explicito : " << numeric_limits<signed long int>::min() << " a " << numeric_limits<signed long int>::max();

    // 10. Entero largo largo (long long int)
    long long int numeroLargoLargo = 123456789012345LL;
    cout << "Entero largo largo: " << numeroLargoLargo << endl;
    cout << "Rango Entero largo largo : " << numeric_limits<long long int>::min() << " a " << numeric_limits<long long int>::max();


    //Declaración y asignación

    int edad;
    cout << "Ingresa tu edad ";
    cin >> edad;
    cout << "Tu edad es : " << edad << endl;

    //Numeros con punto decimal
    float pi = 3.1415926535897932;
    double PI = 3.1415926535897932;
    cout << fixed;
    cout << setprecision(16);
    cout << "flotante pi : " << pi << endl;

    float kilos;
    cout << "Dame tu peso : ";
    cin >> kilos;
    cout << "Tu peso es : " << kilos << endl;

    const int velocidadLuz = 300000;
    const float aceleracionGravedad = 9.81;

    string nombre = "Jose";
    string apellidoPaterno = "Blancas";

    cout << "Nombre Completo" << nombre << " " << apellidoPaterno << endl;

    return 0;
}
