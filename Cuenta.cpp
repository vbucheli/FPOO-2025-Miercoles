    /*
        Proyecto: Banco
        Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
        Universidad del Valle

        Descripción:
        Este proyecto busca desarrollar un proyecto completo en FPOO analisis, diseño e implementación
        programar un banco

        Autor: Juan Jose Atuesta
        Correo: atuesta.juan@correounivalle.edu.co
        Fecha: Marzo 2025
        Contribuidor: Victor Bucheli
    */
    #include <string>
    #include <iostream>
    #include "Cuenta.h"
    using namespace std;

    Cuenta::Cuenta(string parametroNumero, Cliente parametroCliente ){
        numero = parametroNumero;
        clientes.push_back(parametroCliente);
        saldo = 0;
    }

    string Cuenta::getNumero(){
        return numero;
    }
    long Cuenta::getSaldo(){
        return saldo;
    }

    bool Cuenta::consignar(long valor_consignar){
        if (valor_consignar>0){
            saldo = saldo + valor_consignar;
            return true;
        }
        else{
            return false;
        }

    }

    bool Cuenta::retirar(long valor_retirar){
        if(valor_retirar<= saldo){
            saldo = saldo - valor_retirar;
            return true;
        }
        else{
            return false;
        }

    }