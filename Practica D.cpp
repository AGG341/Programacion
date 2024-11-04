
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    setprecision(4);

    /* 1.16 Diseñar un programa que lea tres números A, B, C y visualice en pantalla el valor del
más grande.*/

    float A;
    float B;
    float C;

    cout << "ingrese tres numeros diferentes" << endl;
    cout << "Numero 1: ";
    cin >> A;
    cout << "Numero 2: ";
    cin >> B;
    cout << "Numero 3: ";
    cin >> C;

    if (A >= B and A >= C)
    {
        cout << "El numero mas grande es " << A << endl;
    }
    else if (B >= A and B >= C)
    {
        cout << "El numero mas grande es " << B << endl;
    }
    else
    {
        cout << "El numero mas grande es " << C << endl;
    }


    /* 1.17 Crear un programa que lea tres números diferentes, A, B, C, e imprime los valores
    máximo y mínimo. El procedimiento consistirá en comparaciones sucesivas de parejas de
    números. Cree el algoritmo, diagrama de flujo y código en C#*/

    float numA, numB, numC;
    cout << "ingrese tres numeros diferentes" << endl;
    cout << "Numero 1: ";
    cin >> numA;
    cout << "Numero 2: ";
    cin >> numB;
    cout << "Numero 3: ";
    cin >> numC;

    float maximo, minimo;

    if (numA > numB and numA > numC)
    {
        maximo = numA;
    }
    else if (numB > numA and numB > numC)
    {
        maximo = numB;
    }
    else 
    {
        maximo = numC;
    }

    
    if (numA < numB and numA < numC) {
        minimo = numA;
    }
    else if (numB < numA and numB < numC) {
        minimo = numB;
    }
    else { 
        minimo = numC;
    }


    cout << "el valor maximo es: " << maximo << endl;
    cout << "el valor minimo es: " << minimo << endl;

    cout << endl;

    /*1.18 Crear un programa al que le solicitemos la hora HH, MM, SS y nos calcule la hora
    dentro de un segundo más tarde. Leeremos las horas minutos y segundos como números
    enteros.*/

    int HH, MM, SS;

    cout << "Ingrese la hora" << endl;
    cout << "Horas: ";
    cin >> HH;
    cout << "minutos: ";
    cin >> MM;
    cout << "segundos: ";
    cin >> SS;

    cout << endl;

    cout << "La hora es: " 
        << HH << " : "
        << MM << " : "
        << SS << endl;

    SS++;
    
    if (SS >= 60) 
    {
        SS = 0;
        MM++;
    }
    if (MM >= 60) 
    {
        MM = 0;
        HH++;
    }
    if (HH >= 24) {
        HH = 0;
    }

    cout << "La hora un segundo más tarde es: " ;
    cout << HH << " : "
        << MM << " : "
        << SS << endl;

    cout << endl;

/*1.19 Determinar el precio del boleto de ida y vuelta en avión, conociendo la distancia a
recorrer y sabiendo que si el número de días de estancia es superior a 7 y la distancia
superior a 800 km el billete tiene una reducción del 30%. El precio por km es de 2.5
dólares.*/

    float distancia;
    int dias;
   
    float precioKm = 2.5; 

    cout << "ingrese la distancia a recorrer (en km): ";
    cin >> distancia;
    cout << "ingrese la duración de su viaje (en días): ";
    cin >> dias;

    float precioFinal;

    precioFinal = distancia * precioKm;

    if (dias > 7 and distancia > 800)
    {
        precioFinal = precioFinal * 0.7;
    }

    cout << "El precio de su viaje es: " << precioFinal << endl;
    
    cout << endl;

/*1.20 Escribir las instrucciones apropiadas para cada una de las siguientes condiciones:
 */

    //a) Si un ángulo es igual a 90 grados, imprimir el mensaje "El ángulo es un ángulo recto" 
    // sino imprimir el mensaje "El ángulo no es un ángulo recto".

    int angulo;

    cout << "Ingrese el valor del angulo: ";
    cin >> angulo;


    if (angulo == 90) {
        cout << "El ángulo es un ángulo recto" << endl;
    }
    else {
        cout << "El ángulo no es un ángulo recto" << endl;
    }

    cout << endl;

   // b) Si la temperatura es superior a 100 grados, visualizar el mensaje “por encima
   // del punto de ebullición del agua” sino visualizar el mensaje “por debajo del
   // punto de ebullición del agua”.

    float temperatura;

    cout << "Ingrese la temperatura: ";
    cin >> temperatura;

    if (temperatura > 100) {
        cout << "Por encima del punto de ebullición del agua" << endl;
    }
    else {
        cout << "Por debajo del punto de ebullición del agua" << endl;
    }

    cout << endl;

   // c) Recibir un número, Si este número es positivo, sumar el número a total de
   // positivos usando una variable que acumule los números negativos, sino sumar al
   // total de negativos usando una variable que acumule los números negativos.
    
    int numero;
    int totalPositivos = 0;
    int totalNegativos = 0;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (numero > 0) 
    {
        totalPositivos += numero;
    }
    else 
    {
        totalNegativos += numero;
    }
    cout << "Total de positivos: " << totalPositivos << endl;
    cout << "Total de negativos: " << totalNegativos << endl;
    
    cout << endl;


    //d) Si “x” es mayor que “y”, y “z” es menor que “y”, imprimir “x”.
    int x, y, z;

    cout << "Ingrese 3 numeros: " << endl;
    cout << "numero 1: ";
    cin >> x;

    cout << "numero 2: ";
    cin >> y;

    cout << "numero 3: ";
    cin >> z;

    if (x > y and z < y)
    {
        cout << "x: " << x << endl;
    }

    cout << endl;

    //e) Si la distancia es mayor que 20 y menos que 35, crear y leer un valor para luna
    //variable de tipo entero llamada “tiempo”.
    float distanciaE;

    cout << "ingrese una distancia: ";
    cin >> distanciaE;

    if (distanciaE > 20 and distanciaE < 35)

    {
        int tiempo;
        cout << "ingrese el valor del tiempo: ";
        cin >> tiempo;

        cout << "tiempo ingresado: " << tiempo;
    }
    
    return 0;

}
