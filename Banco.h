    /*
            Clase: Banco
            Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
            Universidad del Valle

            Información CRC:
            
            Clase: Banco

            Responsabilidades:
                - Abstraer el comportamiento de un Banco dentro de un banco su información y sus operaciones
                - El Banco puede crear clientes
                - El Banco puede crear cuentas
                - El Banco puede calcular el promedio del salod de las cuentas
                - El Banco puede imprimir los saldos
            
            Colaboradores:
                - Cuenta
                - Clientes


            Autor: Ignacio Henao 
            Correo: ignacio.henao@correounivalle.edu.co
            Fecha: Marzo 2025
            Contribuidor: Victor Bucheli

        */
    #ifndef _BANCO_H_
    #define _BANCO_H_
    #include <string>
    #include <vector>
    #include "Cliente.h"
    #include "Cuenta.h"

    using  namespace std;

    class Banco {
        private:
            vector<Cliente> clientesCuenta;
            vector<Cuenta> cuentasBanco;
        public:
            Banco();
            void crearCliente(string parametro_identificacion, string parametro_nombre, string parametro_telefono);
            void crearCuenta(string parametroNumero, Cliente parametroCliente);
            void consignarBanco(string parametroNumero, double paramteroValor);
            long calcularPromedio();
            void imprimirSaldos();
            void imprimirPromedio();
    };

    #endif // _BANCO_H_