/*
    Proyecto: Drogueria 
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Descripción:
    Este proyecto gestiona una Drogueria, proporcionando 
    funcionalidades para registrar, buscar y analizar la información de la drogueria.
    

    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Abril 2025
*/
#include <iostream>
#include <memory>
#include "SistemaLogin.h"
using namespace std;
int main() {
    string AuxUsuario, AuxPassword;
    
    cout << "Registro de usuario" << endl;
    cout << "Ingrese nombre de usuario: ";
    cin >> AuxUsuario;
    cout << "Ingrese contraseña: ";
    cin >> AuxPassword;
    
    SistemaLogin sistema(AuxUsuario, AuxPassword, 'A');
    
    cout << "\nInicio de sesión" << endl;
    cout << "Ingrese nombre de usuario: ";
    cin >> AuxUsuario;
    cout << "Ingrese contraseña: ";
    cin >> AuxPassword;
    
    if (sistema.iniciarSesion(AuxUsuario, AuxPassword)) {
        cout << "\nSesión iniciada correctamente." << endl;
    } else {
        cout << "\nFallo en el inicio de sesión." << endl;
    }
    
    cout << "\nCambiando contraseña" << endl;
    string nuevaPassword;
    cout << "Ingrese la nueva contraseña: ";
    cin >> nuevaPassword;
    
    if (sistema.cambiarPassword(nuevaPassword)) {
        cout << "\nContraseña cambiada con éxito." << endl;
    } else {
        cout << "\nError al cambiar la contraseña." << endl;
    }
    
    sistema.cerrarSesion();
    return 0;
}