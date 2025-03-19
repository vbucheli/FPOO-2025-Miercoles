/*
    Proyecto: Banco
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Descripción:
    Este proyecto busca desarrollar un proyecto completo en FPOO analisis, diseño e implementación
    programar un banco

    Autor: Victor Bucheli 
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Marzo 2025
    Contribuidor: Victor Bucheli
*/
#include<iostream>
#include<vector>
#include "Cliente.h"
#include "Cuenta.h"
#include "Banco.h"
using namespace std;


int main(){
 Banco cajaSocial;
 Cliente juan("1307862");
 juan.setNombre("Juan Marmolejo");
 juan.setTelefono("300218212");
 juan.imprimir();
 Cuenta ahorrosJuan("899817-126",juan);
 cout<<"Este es el saldo de la cuenta de Juan: "<<ahorrosJuan.getSaldo()<<endl;
 ahorrosJuan.consignar(1000000);
 ahorrosJuan.getSaldo();
 cout<<"Este es el nuevo saldo de la cuenta de Juan: "<<ahorrosJuan.getSaldo()<<endl;
 
 cajaSocial.crearCliente("2939920120", "Pepito Pelae", "3002177263");
 cajaSocial.crearCuenta("280129903120-128", juan);
 cajaSocial.consignarBanco("280129903120-128",2000000);
 cajaSocial.crearCuenta("280129903120-122", juan);
 cajaSocial.consignarBanco("280129903120-122",1000000);
 cajaSocial.imprimirSaldos();
 cajaSocial.imprimirPromedio();
 
 

}