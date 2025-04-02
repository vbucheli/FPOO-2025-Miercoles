/*
    Clase: Sistema Login
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:
    
    Clase: Sistema Login

    Responsabilidades:
        - Almacenar y gestionar la información de los usuarios, permitiendo logearse en el sistems.
        - Proveer métodos para obtener y manipular la información del nombre y contraseña.
        - Guardar la contraseña como una tabla hash
        - Ofrecer funcionalidades para registrarse, iniciar sesion, cerrar sesión, modificar contraseña.
    
    Colaboradores:
        - 

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos.

    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Abril 2025
*/
#ifndef SISTEMALOGIN_H
#define SISTEMALOGIN_H

#include <string>
using namespace std;

class SistemaLogin {
private:
    string nombre, password;
    char tipoUsuario;
    bool session;
  //Bool verifica si las credenciales son correctas; recibe como parametros el nombre y la contraseña
    bool verificarCredenciales(string auxNombre, string auxPassword);
  //string encriptado como hash; recibe como parametro el password sin encriptar
    string hasPassword(string auxPassword);

public:
  //Constructor
    SistemaLogin(string auxNombre, string auxPassword, char auxTipoUsuario);
  //Bool defin si la sesion se inicia o no; recibe como parametros el nombre y la contraseña
    bool iniciarSesion(string auxNombre, string auxPassword);
    void cerrarSesion();
  //Bool informar si el cambio de contraseña se realizó efectivamente;recibe como parametros la contraseña nueva
    bool cambiarPassword(string auxNuevoPassword);
    void olvidarPassword();
  //Char retorna el tipo de usuario que es de tipo caracter
    char getTipoUsuario();
    void setTipoUsuario(char auxTipoUsuario);
  //Bool define si la sesion está activa o no;  
    bool getSesionActiva();
};

#endif // SISTEMALOGIN_H