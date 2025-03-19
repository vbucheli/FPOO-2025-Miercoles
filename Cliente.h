    /*
        Clase: Cliente
        Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
        Universidad del Valle

        Información CRC:
        
        Clase: Cliente

        Responsabilidades:
            - Abstraer el comportamiento de un cliente dentro de un banco su información y sus operaciones
            - El cliente puede modificar su información
        
        Colaboradores:
            - Cuenta
            - Banco


        Autor: Juan Fernando Marmolejo 
        Correo: juan.fernando.marmolejo@correounivalle.edu.co
        Fecha: Marzo 2025
        Contribuidor: Victor Bucheli

    */

    #ifndef Cliente_h
    #define Cliente_h
    #include <iostream>
    #include <string>
    using namespace std;
    class Cliente{
    private:
        string nombre;
        string identificacion;
        string telefono;

    public:
        Cliente(const string parametro_identificacion);
        //Get
        std::string getNombre();
        std::string getIdentificacion();
        std::string getTelefono();

        //Set
        void setNombre(string parametro_nombre);
        void setTelefono(string parametro_telefono);
        void imprimir();

    };
    #endif //Cliente_h