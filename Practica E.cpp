
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	/* 1.21 Crear el código de un programa en C++
	que pregunte si quiere salir del ciclo
	usando la instrucción “do … while”,
	y leer un “string” donde el usuario tiene
	solo dos opciones para contestar.
	Si el usuario contesta “SI” entonces salir del ciclo,
	su contesta “NO” entonces volver a hacer la pregunta
	“Quieres salir del ciclo? [SI/NO]”.
	Ojo la contestación deben ser estrictamente mayúsculas*/

	string salirCiclo = "NO";

	do
	{


		cout << "¿Quiere salir del ciclo ? [SI / NO]" << endl;
		cin >> salirCiclo;

		if (salirCiclo != "SI" and salirCiclo != "NO")
		{
			cout << "Respuesta invalida" << endl;
		}

	} while (salirCiclo != "SI");

	cout << "Ha salido del ciclo" << endl;
	cout << endl;

	/*1.22 Hacer un menú de opciones que
	ejecute las operaciones aritméticas básicas
	(+) suma,(-) resta, (*) multiplicación,
	(/) división y (%) residuo.
	que muestre un menú como el que se muestra en la figura de abajo.
	Deberá usar la instrucción “do … while”,
	y deberá leer un carácter y
	en base a la opción deberá ejecutar la operación,
	según la opción que elija.

	Los dos operandos deberán ser preguntados al usuario,
	convertirlos a “int” y guardados en
	dos variables con nombres “numero1” y “numero2”,
	el resultado debe ser guardado en
	una variable llamada “total”,
	el total debe ser impreso en la consola.

	Una vez que termine la operación,
	inicialice las variables “numero1”, “numero2” y “total” en cero
	y el usuario podrá hacer la siguiente operación,
	hasta que el usuario presione “s” de salir entonces terminará el programa.*/

	int numero1, numero2, total;
	char controlMenu;
	do {

		int numero1 = numero2 = 0;


		cout << "Menu de operaciones" << endl
			<< endl
			<< "a) suma de dos operandos" << endl
			<< "b) Resta de dos operandos" << endl
			<< "c) Multiplication de dos operandos" << endl
			<< "d) Division de dos operandos" << endl
			<< "e) Residuo de dos operandos" << endl
			<< "s) Salir del menu" << endl
			<< endl;

		cin >> controlMenu;

		if (controlMenu == 'a' or
			controlMenu == 'b' or
			controlMenu == 'c' or
			controlMenu == 'd' or
			controlMenu == 'e' or
			controlMenu == 's')
		{
			if (controlMenu != 's') {
				cout << "Introduce el primer número: ";
				cin >> numero1;
				cout << "Introduce el segundo número: ";
				cin >> numero2;
				cout << endl;

				if (controlMenu == 'a')
				{
					total = numero1 + numero2;
					cout << "su total es: " << total << endl;
					cout << endl;

				}
				else if (controlMenu == 'b')
				{
					total = numero1 - numero2;
					cout << "su total es: " << total << endl;
					cout << endl;
				}
				else if (controlMenu == 'c')
				{
					total = numero1 * numero2;
					cout << "su total es: " << total << endl;
					cout << endl;
				}
				else if (controlMenu == 'd')
				{
					if (numero2 != 0) {
						total = numero1 / numero2;
						cout << "su total es: " << total << endl;
						cout << endl;
					}
					else {
						cout << "Error: No se puede dividir entre cero." << endl;
						cout << endl;
					}
				}
				else if (controlMenu == 'e')
				{
					if (numero2 != 0) {
						total = numero1 % numero2;
						cout << "su total es: " << total << endl;
						cout << endl;
					}
					else {
						cout << "Error: No se puede dividir entre cero." << endl;
						cout << endl;
					}
				}
			}
		}
		else {
			cout << "Opción no válida. Por favor selecciona una opcion válida." << endl;
			cout << endl;
		}
		cout << endl;
	} while (controlMenu != 's');


	/*1.23 Crear un programa en C++ que “simule” dos operaciones básicas
	de un cajero que es retiro y consulta de saldo,
	el proceso debe considerar la lectura y validación de banda
	magnética o chip*.*/

	/*Menu de operaciones cajero Unitec
	a) Consulta de Saldo
	b) Retiro de dinero
	c) Cancelar Operacion*/


	string anyKey;
	char retiro;
	int pin;
	char menuCajero;
	float saldo = 3450.00,
		cantidadRetiro;


	srand(time(0));


	cout << "Cajero UNITEC" << endl
		<< endl
		<< "Bienvenido al cajero UNITEC!" << endl
		<< "Presione cualquier tecla para ingresar su tarjeta" << endl;

	cin >> anyKey;

	bool tarjeta = rand() % 2;

	if (tarjeta == false)
	{

		/*Si la tarjeta es invalida,
		terminar el proceso usando la instrucción “break “
		de lo contrario pedir un pin de 4 dígitos,
		validar que solo sean 4 dígitos, el digito a validar será “1234”
		de lo contrario será pin invalido.
		Las opciones que deberá mostrar el cajero
		si el chip y el pin son válidos será:*/

		cout << "Chip invalido, presione cualquier tecla para intentarlo otra vez" << endl;
		cout << endl;
		do {
			cin >> anyKey;

			tarjeta = rand() % 2;

			if (tarjeta == false)
			{
				cout << endl << "Chip invalido, presione cualquier tecla para intentarlo otra vez" << endl;
			}
		} while (tarjeta == false);
	}


	if (tarjeta == true)
	{
		cout << "Chip valido!" << endl
			<< endl << "Por favor ingrese su PIN: ";
		cin >> pin;

		if (pin != 1234)
		{
			do
			{
				cout << "PIN invalido, favor de volver a intentarlo" << endl;
				cout << "Por favor ingrese su PIN: " << endl;
				cin >> pin;
			} while (pin != 1234);

		}

		if (pin == 1234)
		{
			cout << "PIN correcto!" << endl;

			do {
				cout << "Menu de operaciones Cajero Unitec" << endl
					<< endl
					<< "a) Consulta de saldo " << endl
					<< "b) Retiro de dinero" << endl
					<< "c) Cancelar operacion" << endl;

				cout << endl;

				cin >> menuCajero;

				switch (menuCajero)
				{
				case 'a':
					cout << "Su saldo es de: " << saldo << endl << endl;
					cout << "A continuación su session se cerrará" << endl;
					menuCajero = 'c';
					/*Para la consulta, solo deberá mostrar el saldo
					y terminar la operación con el cajero */
					break;

				case 'b':

					/*
					El saldo inicial de la cuenta del cliente será 3,450.00 pesos,
					en la opción de retiro, deberá validar si la cantidad que quiere retirar
					es mayor al saldo, entonces desplegará la opción fondos insuficientes,
					y terminará la operación.
					*/

					cout << "Iniciando retiro de dinero" << endl
						<< "¿Cuánto saldo quiere retirar?: " << endl;
					cin >> cantidadRetiro;

					if (cantidadRetiro <= saldo)
					{
						cout << "Saldo inicial: " << saldo << " pesos" << endl;
						cout << "Cantidad a retirar: " << cantidadRetiro << " pesos" << endl;
						cout << "Saldo despues del retiro: "
							<< saldo - cantidadRetiro << " pesos" << endl
							<< endl;

						cout << "Desea confirmar su retiro:? [S/N]" << endl;
						cin >> retiro;

						switch (retiro)
							/*De tener fondos suficientes se le restará al saldo inicial
							y mostrará el saldo remanente
							antes de terminar la operación.
							Si desea cancelar la operación deberá salir del menú.*/
						{
						case 'S':
							saldo = saldo - cantidadRetiro;
							cout << "ha retirado: " << cantidadRetiro << " pesos" << endl << endl;
							cout << "Su nuevo saldo es de: " << saldo << " pesos" << endl << endl;
							break;
						case 'N':
							menuCajero = 'c';
							break;
						default:
							cout << "ingrese una opcion valida" << endl;
							break;
						}

					}
					else
					{
						cout << "Fondos insuficientes" << endl;
						cout << endl;
						menuCajero = 'c';
					}
					break;

				case 'c':
					cout << "Su session se va a cerrar" << endl;
					break;

				default:
					cout << "Opcion invalida, por favor selecciona una opcion del menu";
					break;
				}
			} while (menuCajero != 'c');

		}
		cout << endl;
		cout << "gracias por usar el cajero Unitec" << endl;
		cout << endl;

	}

	/*1.24 Hacer un programa que “simule” “Temple Run” donde el corredor iniciara siempre
	corriendo hacia adelante es decir dirección “adelante”, la dirección tiene otros dos
	posibles valores “izquierda” y “derecha”.*/

	int tiempo = 12;
	char direccion = 'A';
	bool jugando = true;
	char opcion;

	cout << "Bienvenido a Temple Run!" << endl
		<< endl
		<< "Inicias corriendo en la dirección 'adelante'." << endl
		<< endl << "Presiona 0 en cualquier momento para salir." << endl << endl;

	do
	{
		cout << endl << "Tiempo restante: " << tiempo << endl;


		cout << "¿A qué dirección deseas ir ahora? (A = adelante, I = izquierda, D = derecha, 0 = salir): ";
		cin >> opcion;

		if (opcion == '0')
		{
			cout << endl << "Has decidido salir del juego. ¡Hasta la próxima!" << endl;
			jugando = false;
			break;
		}
		else if (opcion == 'A' || opcion == 'I' || opcion == 'D')
		{
			direccion = opcion;
		}
		else
		{
			cout << endl << "Opción inválida. Continuas en la misma dirección." << endl;
		}
		/*En el caso de encontrar un obstáculo, este es generado de manera aleatoria con dos
		valores posibles, Verdadero (“True”) o Falso (“False), En este caso Verdadero que
		representa el castigo, entonces se restará 3 unidades de tiempo al corredor, en caso
		contrario o Falso, solo se restará una unidad. */

		bool obstaculo = rand() % 2;

		if (obstaculo == true)
		{
			cout << endl << "¡Has encontrado un obstáculo! " << endl;
			tiempo = tiempo - 3;
		}
		else
		{
			cout << endl << "No hay obstaculo " << endl;
			tiempo = tiempo - 1;
		}

		cout << endl << "Tiempo restante: " << tiempo << endl;

		if (tiempo <= 0)
		{
			cout << endl << "El tiempo se ha agotado. ¡Juego terminado!" << endl;
			jugando = false;
			break;
		}


		cout << "¿A qué dirección deseas ir ahora? (A = adelante, I = izquierda, D = derecha, 0 = salir): ";
		cin >> opcion;

		if (opcion == '0')
		{
			cout << endl << "Has decidido salir del juego. ¡Hasta la próxima!" << endl;
			jugando = false;
			break;
		}
		else if (opcion == 'A' || opcion == 'I' || opcion == 'D')
		{
			direccion = opcion;
		}
		else
		{
			cout << endl << "Opción inválida. Continuas en la misma dirección." << endl;
		}

		/*Para premiar a nuestro corredor, podrá encontrar un premio o tiempo extra de manera
		aleatoria con dos valores posibles, Verdadero (“True”) o Falso (“False), En este caso
		Verdadero que representa el premio, entonces se sumará 3 unidades de tiempo al
		corredor, en caso contrario o Falso, solo se sumará una unidad.*/

		bool premio = rand() % 2;
		if (premio == true)
		{
			cout << endl << "¡Has encontrado un premio!" << endl;
			tiempo += 3;
		}
		else
		{
			cout << endl << "No hay premio esta vez " << endl;
			tiempo += 1;
		}

		if (tiempo <= 0)
		{
			cout << endl << "El tiempo se ha agotado. ¡Juego terminado!" << endl;
			jugando = false;
			break;
		}

	} while (jugando == true);

	return 0;

}
