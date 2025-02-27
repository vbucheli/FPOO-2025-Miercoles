/**
 * @file factorial.cpp
 * @brief Un programa que computa el factorial de un número
 * 
 * @details frente a la entrada de un numero entero devuelve el factorial de un número como 
 * factoria=factorial*(factorial-1). En los casos negativos devuelve -1 y en los casos superiores 
 * al factorial de 50 devuelve -1
 * @author [Santiago Ceron]
 * @mail [santiago.ceron.gomez@correounivalle.edu.co]
 * @contributors [Victor Bucheli(victor.bucheli@correounivalle.edu.co)]
 * @date 2025-02-26
 * @version 1.0
 */

#include <iostream>
using namespace std;

double factorial(int numero){
  double factorial=1;
  for (int i=0; i<numero; i++)
    {
      factorial = factorial * (i+1);
    }
  return factorial;
}

int main()
{
  int numero=0;
  cout << "Ingrese un numero: ";
  cin >> numero;
    if (numero<0 || numero >50)
    {
      cout << "Error: el dato ingresado fuera de límite"<< endl;
    } 
    else 
    {
      cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
    }
return 0;
}