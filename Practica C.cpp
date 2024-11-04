
#include <iostream>
using namespace std;

int main()
{
	/* 1.1 Escriba el código que pregunte al usuario por un número y escribir el resultado del
 cuadrado. De la siguiente manera: */

	int cuadrado;

	cout << "ingrese un numero: ";
	cin >> cuadrado;
	cout << endl;

	cout << "el cuadrado de " << cuadrado << " es: ";
	cout << cuadrado * cuadrado << endl;

	cout << endl;

	/* 1.2 Escriba un código que solicite un número entero e imprima los resultados de x, 2x, 3x,
4x y 5x. Donde x es el número ingresado por el usuario, y los subsecuentes implican
multiplicar por 2, multiplicar por 3, multiplicar por 4 y multiplicar por 5, y escribir el
resultado en el siguiente formato:*/

	int x;

	cout << "ingrese un numero: ";
	cin >> x;
	cout << endl;

	cout << x << " -- "
		<< 2 * x << " -- "
		<< 3 * x << " -- "
		<< 4 * x << " -- "
		<< 5 * x << endl;

	cout << endl;

	/*1.3 Escriba un programa que pregunte al usuario por su peso y en kilogramos y lo
convierta en libras, el factor de conversión es 2.2 libras por un kilo.*/

	int pesoKg, pesoLb;


	cout << "Ingrese su peso en kilogramos: ";
	cin >> pesoKg;
	cout << endl;

	pesoLb = 2.2 * pesoKg;

	cout << "Su peso en libras es: " << pesoLb << " libras." << endl;
	cout << endl;

	/*1.4 Escriba el código de un programa que pregunte por 3 números
	(use 3 instrucciones de entrada).
	Cree las tres variables de entrada,
	adicionalmente cree una variable que se llame Total y Promedio,
	donde Total contendrá la suma de las tres variables y Promedio
	que será el cálculo del promedio de los 3 números.*/

	float num1, num2, num3, total, promedio;

	cout << "Por favor ingrese 3 numeros" << endl
		<< "numero 1: ";
	cin >> num1;

	cout << "numero 2: ";
	cin >> num2;

	cout << "numero 3: ";
	cin >> num3;
	cout << endl;

	total = num1 + num2 + num3;
	promedio = total / 3.0;

	cout << "La suma de sus numeros es: " << total << endl
		<< "El promedio de sus numeros es: " << promedio << endl;

	cout << endl;

	/*1.5 Escriba un cálculo que calcule la propina de un Total,
	donde le pregunte al usuario por el total de la cuenta,
	y el porcentaje de propina a aplicar y guardarlo en una variable que se llame Porcentaje
	y como resultado imprima la cantidad a dar de propina.*/

	float totalCuenta, propina, porcentajePropina;

	cout << "Ingrese el total de la cuenta:";
	cin >> totalCuenta;

	cout << "Ingrese el porcentaje de propina que quieres dar: ";
	cin >> porcentajePropina;

	propina = totalCuenta * (porcentajePropina / 100);

	cout << "La cantidad de propina a dar es: " << propina
		<< " pesos" << endl;

	cout << endl;

	/*1.6 Escriba el código que solicite un número al usuario y
	si este número es mayor a 100, que imprima “El número es mayor a 100”,
	de lo contrario que imprima “El número es menor o igual que 100”*/

	float m;

	cout << "Ingresa un numero: ";
	cin >> m;

	if (m <= 100)
	{
		cout << "El numero es menor o igual a 100" << endl;
	}
	else
	{
		cout << "El numero es mayor a 100" << endl;
	}

	cout << endl;

	/*1.7 Escriba el código que solicite un número al usuario si este número es menor a cero
entonces imprima que “el número es negativo”, de lo contrario imprimir el “número es
positivo”*/

	float n;

	cout << "Ingresa un numero: ";
	cin >> n;

	if (n < 0.0)
	{
		cout << "El numero es negativo" << endl;
	}
	else
	{
		cout << "El numero es positivo" << endl;
	}

	cout << endl;

	/*1.8 Escriba un programa que pregunte por el mail del usuario
	y guardarlo en una variable llamada “Miemail”,
	y luego que pregunte por un password
	y se guarde en una variable llamada “Password_Ingresado”,
	validar si el password es igual a “12345”
	entonces imprimir “Felicidades password correcto”
	de otra manera imprimir “Su password es incorrecto”*/

	string miemail;
	string passwordIngresado;

	cout << "ingresar su email: ";
	cin >> miemail;

	cout << "ingresar un password: ";
	cin >> passwordIngresado;

	if (passwordIngresado == "12345")
	{
		cout << "Felicidades password correcto" << endl;
	}
	else
	{
		cout << "Su password es incorrecto" << endl;
	}

	cout << endl;

	/*1.9 Crear un código que convierta de grados farenheit
	a grados centígrados, usando una variable llamada Farenheith;
	basado en la siguiente formula: (farenheight − 32) * (5/9)*/

	float farenheith, celcius;

	cout << "ingresar temperatura en fahrenheit: ";
	cin >> farenheith;

	if (farenheith == 32.0)
	{
		cout << "La temperatura es de 0 grados centigrados. " << endl;
	}
	else
	{
		celcius = ((farenheith - 32.0) * (5.0 / 9.0));

		cout << "La temperatura es de " << celcius << " grados centigrados.";

	}
	cout << endl;

	/*1.10 Crear el código que reciba el peso y la estatura del usuario,
	y calcule la masa corporal en base a la fórmula:
	masaCorporal = peso/(estatura*estatura) */

	float estatura, peso, masaCorporal;

	cout << "Ingresa tu estatura en metros: ";
	cin >> estatura;

	cout << "Ingrese su peso en kilogramos: ";
	cin >> peso;

	masaCorporal = peso / (estatura * estatura);

	if (masaCorporal < 18.5)
	{
		cout << "Abajo del peso normal" << endl;
	}
	if (masaCorporal >= 18.5 and masaCorporal < 25)
	{
		cout << "Peso Normal" << endl;
	}
	if (masaCorporal >= 25 and masaCorporal < 30)
	{
		cout << "Sobrepeso" << endl;
	}
	if (masaCorporal >= 30 and masaCorporal < 35)
	{
		cout << "Obeso Clase 1" << endl;
	}
	if (masaCorporal >= 35 and masaCorporal < 40)
	{
		cout << "Obeso Clase 2" << endl;
	}
	if (masaCorporal >= 40)
	{
		cout << "Obeso Clase 3" << endl;
	}


	return 0;
}
