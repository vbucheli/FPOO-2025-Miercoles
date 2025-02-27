/**
 * @file empleado.cpp
 * @brief Un programa que computa los salarios de 10 empleados
 * 
 * @details utiliza dos vectores uno de nombres y otro de salarios
 * El programa almacena los datos de 10 npmbres y 10 empleados
 * El programa devuelve el salario más alto y el nombre del empleado que corresponde
 * @author [Victor Bucheli]
 * @mail [victor.bucheli@correounivalle.edu.co]
 * @date 2025-02-26
 * @version 1.0
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Encuentra el salario más alto y como parametro llega el vector de salarios y devuele la posicion del salario mas alto.
int SalarioMaximo(vector<double> salarios)
{
  double max(0);
  int indiceMax(0);
  max=salarios[0];
  indiceMax=0;
  for (int i=1; i<salarios.size(); i++)
  {
    if(max<salarios[i])
    {
      max=salarios[i];
      indiceMax=i;
    }
  }
  return indiceMax;
}
//imprime la información del sistema y como parametro llega dos vectores: nombres y salarios y devuele 0 como una función main.
int imprimir(vector<double> salarios, vector<string> nombres)
{

  for (int i=0; i<nombres.size(); i++)
  {
    cout<<"indice: "<<i<<" Nombre: "<<nombres[i]<<" "<<"Salario: "<< salarios[i]<<endl;
  }
return 0;
}
//imprime la información del sistema y como parametro llega dos vectores: nombres y salarios y no devuele nada porque es tipo void.
void imprimirVoid(vector<double> salarios, vector<string> nombres)
{

  for (int i=0; i<nombres.size(); i++)
  {
    cout<<"indice: "<<i<<" Nombre: "<<nombres[i]<<" "<<"Salario: "<< salarios[i]<<endl;
  }
}

int main()
{
///Crear los vectores de tipo Srtring y Double
vector<string> nombre;
vector<double> salario;
//Limpiar los contenedores
nombre.clear();
salario.clear();
//Ingresar los datos de Nombre y Salario
nombre.push_back("Ignacio Henao");
salario.push_back(50000000);
nombre.push_back("Juan Manuel Muñoz");
salario.push_back(1600000);
nombre.push_back("Andres Muñoz");
salario.push_back(2000000);
nombre.push_back("Samuel Saldaña");
salario.push_back(3000000);
nombre.push_back("Juan Camilo Ramos");
salario.push_back(2000000);
nombre.push_back("Sebastian Orejuela");
salario.push_back(10000000);
nombre.push_back("Emanuel Paez");
salario.push_back(12000000);
nombre.push_back("Mariana Murillo");
salario.push_back(8000000);
nombre.push_back("Juan Jose Atuesta");
salario.push_back(15000000);
nombre.push_back("Juan Camilo Gonzalez");
salario.push_back(6000000);
imprimirVoid(salario,nombre);
cout<<"El salario máximo es:"<<salario[SalarioMaximo(salario)]<<" corresponde a el empleado: "<<nombre[SalarioMaximo(salario)]<<endl;
return 0;
}