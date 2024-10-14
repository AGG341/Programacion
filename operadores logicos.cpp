// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;


int main()
{
    //booleans
    bool bb = true;
    cout << bb << endl;


    cout << boolalpha;
    //Esa linea superior imprime "true" en vez de "1"
    cout << bb << endl;

    //char variale solo tiene 1 caracter alpha, numerico o caracter especial

    char opcion1 = 'a';
    // solo con una comilla, si usas 2, va a marcar error

    cout << opcion1 << endl;

    /*Operaciones logicas (true false)

    think venn diagrams
    "and"  (Disjunción) &&. This would be the interlaced section between the circles
    "or" (Conjución) || This would be the entire area of the circle(s)
    "not" ! Would be the area outside of the circle(s)
    */

    //enteros
    int n1 = 10, n2 = 20;

    // Floats
    float f1 = 1.5, f2 = 5.2;

    cout << boolalpha;

    //Coperaciones con desigualdad, comparaciones, magnitud
    //1. Igualdad
    cout << "(n1 == n2): " << (n1 == n2) << endl;
    cout << "(f1 == f2): " << (f1 == f2) << endl;

    //2. Desigualdad
    cout << "(n1 != n2): " << (n1 != n2) << endl;
    cout << "(f1 != f2): " << (f1 != f2) << endl;

    //3. Mayor que 
    cout << "(n1 > n2): " << (n1 > n2) << endl;
    cout << "(f1 > f2): " << (f1 > f2) << endl;

    //4. Menor que
    cout << "(n1 < n2): " << (n1 < n2) << endl;
    cout << "(f1 < f2): " << (f1 < f2) << endl;

    //5. Mayor o igual que 
    cout << "(n1 >= n2): " << (n1 >= n2) << endl;
    cout << "(f1 >= f2): " << (f1 >= f2) << endl;

    //6. Menor o igual que

    cout << "(n1 <= n2): " << (n1 <= n2) << endl;
    cout << "(f1 <= f2): " << (f1 <= f2) << endl;

    //7. Comparaciones de tipo mixtos
    cout << "(n1 > f2): " << (n1 > f2) << endl;
    cout << "(f1 > n2): " << (f1 > n2) << endl;

    //8. Valores Negativos
    cout << "(n1 > -n2): " << (n1 > -n2) << endl;
    cout << "(f1 > -f2): " << (f1 > -f2) << endl;

    //9. Combinacion de comparaciones
    //Puedes utilizar la palavra "and" e lugar de "&&"
    //Puedes utilizar la palavra "or" e lugar de "||"
    cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) && (f1 > f2)) << endl;
    cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) || (f1 == 5.2)) << endl;

    //10. Comparaciones anidadas
    cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
    cout << "(f1 <= f2 +10.5): " << (f1 <= f2 + 10.5) << endl;

    //11.Comparacion con constantes
    cout << "(n1 == 10): " << (n1 == 10) << endl;
    cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;

    //12. Comparacion con los resultados de las operaciones aritmeticas
    cout << "((n1 + n2) < (f1 * f2)): " << ((n1 + n2) < (f1 * f2)) << endl;
    cout << "((n1 + n2) >= (f1 / f2)): " << ((n1 + n2) >= (f1 / f2)) << endl;

    //13. Comparacion de resultados positivos y negativos
    cout << "((-n1) < n2): " << ((-n1) < n2) << endl;
    cout << "((-f1) > f2): " << ((-f1) > f2) << endl;

    //14. Combinacion de aritméticas y comparación
    cout << "((n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
    cout << "((n2 / n1) <= (f1 + f2)): " << ((n2 / n1) <= (f1 + f2)) << endl;
    
    // 15. Comparaciones encadenadas
    cout << "(n1 <n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
    cout << "(f2 > f1 and f1 > n1): " << (f2 > f1 and f1 > n1) << endl;

    // 16. Comparación de módulos
    cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl;

    //Operadores Lógicos

    bool p = true, q = false;
    
    //17. Lógico AND
    cout << "(p and q): " << (p and q) << endl;

    //18. OR Lógico
    cout << "(p or q): " << (p or q) << endl;

    //19. Lógico NOT; puedes usar la palabra "not" en vez de "!"
    cout << " (!p): " << (!p) << endl;

    //20.Combinación de AND y NOT
    cout << "(p and not(q)): " << (p and not(q)) << endl;

    //21. Doble NOT
    cout << "(not(not(q))):" << (not(not(q))) << endl;

    //22. Operaciones Mixtas
    cout << "(not(p and q) or (p or not(q))): " << (not(p and q) or (p or not(q))) << endl;

    //23. Asignación de variables con operadores lógicos
    bool a = p and q;
    cout << "Valor asignado a varianble 'a': " << a << endl;
     //24. Operaciones lógicas con numeros enteros (distinto de 0 es verdadero, cero es falso)
    int x = 5, y = 0;
    cout << "(x and y): " << (x and y) << endl;

    //25. Operaciones lógicas con tipos de datos mixtos
    float m = 3.5, n = 0.0;
    cout << "(m or n): " << (m or n) << endl;

    //26. Expresiones complejas
    cout << "((p or q) and (x or n)): " << ((p or q) and (x or n)) << endl;

    //27. Expresiones anidadas
    cout << "((x and not (y)) and (m or not(q))): " << ((x and not (y)) and (m or not(q))) << endl;
    
    //28. Operaciónes lógicas con números de punto flotante
    cout << "((m > n) and (m <= 3.5)): " << ((m > n) and (m <= 3.5)) << endl;

    //29. Uso de operadores lógicos con comparación de cadenas de texto (string)
    string str1 = "hola", str2 = "mundo";
    cout << "((str1 == str2) or (str1 != str2)): " << ((str1 == str2) or (str1 != str2)) << endl;

    
return 0;
}
