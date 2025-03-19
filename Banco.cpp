      /*
          Proyecto: Banco
          Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
          Universidad del Valle

        Descripción:
          Este proyecto busca desarrollar un proyecto completo en FPOO analisis, diseño e implementación
          programar un banco

            Autor: Ignacio Henao 
            Correo: ignacio.henao@correounivalle.edu.co
            Fecha: Marzo 2025
            Contribuidor: Victor Bucheli
      */


    #include <iostream>
    #include <vector>
    #include <string>
    #include "Banco.h"
    #include "Cliente.h"
    #include "Cuenta.h"
    using namespace std;
    Banco::Banco(){
       clientesCuenta.clear();
       cuentasBanco.clear();
    }

    void Banco::crearCliente(string parametro_identificacion, string parametro_nombre, string parametro_telefono){
        Cliente clienteAux(parametro_identificacion);
        clienteAux.setNombre(parametro_nombre);
        clienteAux.setTelefono(parametro_telefono);
        clientesCuenta.push_back(clienteAux);
    }

    void Banco::crearCuenta(string parametroNumero, Cliente parametroCliente){
        Cuenta cuentaAux(parametroNumero,parametroCliente);
        cuentasBanco.push_back(cuentaAux);
    }
    void Banco::imprimirSaldos(){
        cout << "Reporte de Saldos Banco: " <<endl;
        for (int i=0; i<cuentasBanco.size(); i++) {
            cout << "Numero de cuenta: " << cuentasBanco[i].getNumero() << endl;
            cout << "Saldo de la cuenta: " << cuentasBanco[i].getSaldo() << endl;
            cout << "Nombre de los clientes: ";
                 for (int j=0; j < clientesCuenta.size(); j++){
                    cout << clientesCuenta[j].getNombre();
                }
            cout << endl;
        }
    }
    long Banco::calcularPromedio(){
        double sumaSaldos = 0;
        for(int i=0; i<cuentasBanco.size(); i++) {
            sumaSaldos += cuentasBanco[i].getSaldo();
        }
        return sumaSaldos / cuentasBanco.size();
    }

    void Banco::imprimirPromedio(){
        cout << "El promedio del saldo de las cuentas es: " << calcularPromedio()<<endl;
    }

     void Banco::consignarBanco(string parametroNumero, double paramteroValor){
        for (int i=0; i<cuentasBanco.size(); i++) {
            if(cuentasBanco[i].getNumero() == parametroNumero) cuentasBanco[i].consignar(paramteroValor);
        }

     }