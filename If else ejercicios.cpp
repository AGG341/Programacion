
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
   // 1. Encontrar si un número es par o impar.
   
    int num;
    cout << "ingrese un numero: ";
    cin >> num;
    cout << endl;

    if (num % 2 == 0)
    {
        cout << "tu numero es par" << endl;
    }
    else
    {
        cout << "tu numero es impar" << endl;
    }
  
   // 2. Encontrar el mayor de dos números, solicita los dos números de tipo int.
        int n1, n2;
    cout << "n1 : ";
    cin >> n1;
    cout << endl;
    cout << "n2 : ";
    cin >> n2;
    cout << endl;
    if (n1 > n2)
    {
        cout << "n1 : " <<
            n1 << endl;
    }
    else
    {
        cout << "n2 : " <<
            n2 << endl;
    }
    //3. Solicitar la edad de la persona y si esta es mayor de edad, escribir en pantalla “Mayor de edad” de lo contrario “Menor de edad”
        int edad;
    cout << "Dame tu edad : ";
    cin >> edad;
    cout << endl;
    if (edad >= 18)
    {
        cout
            << "mayor de edad "
            << endl;
    }
    else
    {
        cout
            << "menor de edad " << endl;
    }

    /* 4. Solicitar la temperatura si esta es menor a 10 grados, escribir en pantalla “hace mucho frío”, 
    si la temperatura es entre mayor a 10 grados y menor a 17 grados, escribir en pantalla “hace frío” 
    y por último si es mayor a 17 grados, escribir en pantalla “el clima es templado”.*/
        int temp;
    cout << "temperatura : ";
    cin >> temp;
    cout << endl;
    if (temp < 10)
    {
        cout
            << "Hace mucho frio "
            << endl;
    }
    if (temp >= 10 and
        temp <= 17)
    {
        cout << "frio " << endl;
    }
    if (temp > 17)
    {
        cout << "templado"
            << endl;
    }

    /* 5. Preguntar si al usuario si está a favor de la paz, guardar en una variable tipo char llamada voto,
    validar si el voto es ‘S’ o el voto es ‘N’ escribir en pantalla “voto valido”
    en caso de que sea cualquier otro carácter escribir, “voto invalido” */ 
        char voto = ' ';
    cout << "A favor s/n : ";
    cin >> voto;
    cout << endl;
    if (voto == 's'
        or voto == 'n' or
        voto == 'S' or
        voto == 'N')
    {
        cout << "Voto valido "
            << endl;
    }
    else
    {
        cout << "Voto invalido "
            << endl;
    }
   /* 6. Preguntar al usuario cuantas horas ha trabajado el empleado durante la semana, si, 
   el empleado trabajo más de 40 horas, el excedente de horas se multiplicará por 75 pesos 
   y publicar este cálculo en pantalla que será el bono del empleado.*/
        int horasTrabajadas = 0;
    cout << "Horas trabajadas : ";
    cin >> horasTrabajadas;
    cout << endl;
    int horasBono = horasTrabajadas
        - 40;
    if (horasBono > 0)
    {
        horasBono = horasBono * 75;
        cout << "Bono " << horasBono;
    }
    /* 7.Crear dos variables de tipo int, que guarden el día y mes, del cumpleaños del usuario.
    Si la fecha corresponde a mes 9 y día 15, escribir en pantalla, “Feliz cumpleaños” */
        
    /*8.Crear una variable que se llame velocidad, pregunta por este valor, 
    si esta es negativa, escribir en pantalla “velocidad negativa”, 
    si la velocidad es cero, escribir en pantalla “en reposo”, 
    y si es positiva escribir en pantalla “velocidad positiva”.*/

    /*9.Crear las siguientes variables de tipo int: huevos, mantequilla, leche, harina, levadura, azucar y sal.
    Asigna valores aleatorios a cada variable, entre 1 y 5. Si todos los ingredientes tienen al menos un elemento, 
    escribir en pantalla “Puedes crear hot cakes” de lo contrario escribir en pantalla “No hay suficientes ingredientes”*/
        
    /*10. Crear un programa en C++ que determine cuantos hot cakes se pueden hacer basado en la pregunta anterior.*/
}
