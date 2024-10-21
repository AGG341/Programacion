
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;
int main() {

    /*1.1 Realiza un código que ejecute las siguientes operaciones e imprima los
    resultados de ejecutar cada operación usando la instrucción cin */
    // Variables
    int res1 = 3 + 5 * 2 / 2 - 1;
    int res2 = 3 + 10 / 2 - 1;
    int res3 = 3 + 5 - 1;
    int res4 = 8 - 1;
    float res5 = 1.0 / 3 * 3;
    string input;

    // Preguntas
    cout << "Operación 1: 3 + 5 * 2 / 2 - 1" << endl;
    cout << "Operación 2: 3 + 10 / 2 - 1" << endl;
    cout << "Operación 3: 3 + 5 - 1" << endl;
    cout << "Operación 4: 8 - 1" << endl;
    cout << "Operación 5: 1 / 3 * 3" << endl;

    cout << "Escribe algo para mostrar los resultados: ";
    cin >> input;

    //Resultados

    cout << "Resultado de 3 + 5 * 2 / 2 - 1 es: " << res1 << endl;
    cout << "Resultado de 3 + 10 / 2 - 1 es: " << res2 << endl;
    cout << "Resultado de 3 + 5 - 1 es: " << res3 << endl;
    cout << "Resultado de 8 - 1 es: " << res4 << endl;
    cout << "Resultado de 1 / 3 * 3 es: " << res5 << endl;

    /*1.2 Escriba el código que pregunte al usuario por un número y
    escribir el resultado de el cuadrado del número.*/

    int num;
    int cuadrado;

    cout << "Escribe un numero que quieras calcular al cuadrado: ";
    cin >> num;

    cuadrado = num * num;

    cout << num << " al cuadrado: " << cuadrado << endl;

    /*1.3 Escriba un programa que pregunte al usuario por el número de yardas
    a convertir en metros.Recuerde que la unidad de conversión de una yarda equivale a 0.9144 metros. */

    int yardas;
    float metros;

    cout << "Escribe un numero de yardas: ";

    cin >> yardas;

    metros = yardas * 0.9144;

    cout << yardas << " yardas son: " << metros << " metros" << endl;


    /*1.4 Escriba el código de un programa que pregunte que calcule la depreciación de un auto
con valor de 200,000 pesos donde se depreciará por cinco años, considerando que solo se
puede depreciar el 80% del valor original pagado por el vehículo. Imprima en consola el
valor de deducción por cada año.*/


//variables
    float valorAuto = 200000;
    float porcentajeDepreciacion = 0.80;
    float depreciacionTotal;
    float depreciacionAnual;


    //calculos
    depreciacionTotal = valorAuto * porcentajeDepreciacion;
    depreciacionAnual = depreciacionTotal / 5;



    cout << "Valor del auto: " << valorAuto << " pesos" << endl;
    cout << "Depreciación total (80%): " << depreciacionTotal << " pesos" << endl;
    cout << "Deduccion por año: " << depreciacionAnual << " pesos por año" << endl;


    /*1.5 Escriba un cálculo que calcule el porcentaje de deducción de impuestos del salario
mensual de 25,000 pesos, donde este se deducirá un impuesto fijo de 900 pesos, más una
parte porcentual de 1.5% sobre el cálculo de sueldo mensual – 900, Imprima el valor total
del impuesto a deducir, y el sueldo neto que recibirá el empleado.*/

//  variables
    float salarioMensual = 25000;
    float deduccionFija = 900;
    float porcentajeImpuesto = 0.015;
    float impuestoTotal;
    float sueldoNeto;

    // calculos
    impuestoTotal = (salarioMensual - deduccionFija) * porcentajeImpuesto;
    sueldoNeto = salarioMensual - impuestoTotal;




    cout << "Saldo Inicial: " << salarioMensual << " pesos" << endl;
    cout << "Impuesto total a deducir: " << impuestoTotal << " pesos" << endl;
    cout << "Sueldo neto: " << sueldoNeto << " pesos" << endl;


    /*1.6 Escriba el código de cada una de las siguientes operaciones en C++; por favor cree una
variable con el nombre de su elección e imprima el resultado con la instrucción cout:*/

    int multiplicacion = 3 * 4;
    cout << "Resultado de 3 * 4: " << multiplicacion << endl;

    int division = 12 / 3;
    cout << "Resultado de 12 / 3: " << division << endl;

    float modulo1 = 12 % 3;
    cout << "Resultado de 12 % 3: " << modulo1 << endl;

    float modulo2 = 12 % 7;
    cout << "Resultado de 12 % 7: " << modulo2 << endl;

    float suma = 3 + 3.0;
    cout << "Resultado de 3 + 3.0: " << suma << endl;

    float division2 = 10.0 / 100; 
    cout << "Resultado de 10 / 100: " << division2 << endl;

    int potencia = pow(3, 2);
    cout << "Resultado de 3^2: " << potencia << endl;

    /*1.7 Comparaciones. Cuál será el resultado de cada comparación y escriba el código e
imprima los resultados usando la instrucción cout, NOTA: Las comparaciones encierrelas
entre paréntesis.*/
    int a = 10;
    int b = 20;
    cout << boolalpha;
    
    cout << "a = 10" << endl;
    cout << "b = 20" << endl;

    bool b1= (a > b);
    cout << "Resultado de (a > b): " << b1 << endl;

    bool b2= (a < b);
    cout << "Resultado de (a < b): " << b2 << endl;

    bool b3 = (a == b);
    cout << "Resultado de (a == b): " << b3 << endl;

    bool b4 = (a != b);
    cout << "Resultado de (a != b): " << b4 << endl;

    bool b5 = ((a + b) > 100);
    cout << "Resultado de (a + b) > 100: " << b5 << endl;

    bool b6 = ((a - b) == 0);
    cout << "Resultado de (a - b) == 0: " << b6 << endl;

    bool b7 = ((a * b) > 500);
    cout << "Resultado de (a * b) > 500: " << b7 << endl;
    
    bool b8 = ((a * b) < 100);
    cout << "Resultado de (a * b) < 100: " << b8 << endl;
    
    bool b9 = ((a - b) < 0);
    cout << "Resultado de (a - b) < 0: " << b9 << endl;
    
    bool b10 = (a < 20);
    cout << "Resultado de a < 20: " << b10 << endl;


    return 0;
}
