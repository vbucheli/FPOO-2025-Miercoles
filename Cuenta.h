    /*
        Clase: Cuenta
        Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
        Universidad del Valle

        Información CRC:
        
        Clase: Cuenta

        Responsabilidades:
            - Abstraer el comportamiento de una cuenta dentro de un banco su información y sus operaciones
            - Cuenta puede obtener el numero de cuenta
            - Cuenta puede recibir depositos
            - Cuenta puede retirar dinero
        
        Colaboradores:
            - Clientes
            - Banco


        Autor: Juan Jose Atuesta
        Correo: atuesta.juan@correounivalle.edu.co
        Fecha: Marzo 2025
        Contribuidor: Victor Bucheli

        Notas: Falta por realizar el metodo de adicionar clientes

    */

    #ifndef _CUENTA_H_
    #define _CUENTA_H_
    #include <string> 
    #include <vector>
    #include "Cliente.h"
    using  namespace std;
    class Cuenta {
        private:
            string numero;
            long saldo;
            vector<Cliente> clientes;

        public:
            //constructor
            Cuenta(string parametroNumero, Cliente parametroCliente);
            //getters
                string getNumero();
            long getSaldo();
            //acciones
            bool consignar(long);
            bool retirar(long);

    };
    #endif