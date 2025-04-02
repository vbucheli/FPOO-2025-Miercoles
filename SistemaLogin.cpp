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

#include "SistemaLogin.h"
#include <iostream>
#include <functional> // Para std::hash
using namespace std;

SistemaLogin::SistemaLogin(string auxNombre, string auxPassword, char auxTipoUsuario){
    nombre=auxNombre;
    password=hasPassword(auxPassword);
    tipoUsuario=auxTipoUsuario;
    session=false;
}

bool SistemaLogin::iniciarSesion(string auxNombre, string auxPassword){
    if (verificarCredenciales(auxNombre, auxPassword)){
        session=true;
        cout<<"Inicio la sesion - Bienvenido al sistema"<<endl;
        return true;
    }
    else{
        session=false;
        cout<<"No incio de sesion en el sistema"<<endl;
        return false;
    }
}

void SistemaLogin::cerrarSesion(){
    session=false;
    cout<<"La sesión se cerró con éxito "<<endl;
 
}
//Para cambiar la constraseña asumimos que el usaurio ya esta logeado y a iniciado sesion
bool SistemaLogin::cambiarPassword(string auxNuevoPassword){
    if (getSesionActiva()){
        password=hasPassword(auxNuevoPassword);
        cout<<"Contraseña modificada con éxito"<<endl;
        return true;
    }
    else{
        cout<<"Contraseña no modificada"<<endl;
        return false;
    }
}

 void SistemaLogin::olvidarPassword(){
            cout<<"Por favor contactar al administrador"<<endl;
 }


 char SistemaLogin::getTipoUsuario(){
    return tipoUsuario;
 }

void SistemaLogin::setTipoUsuario(char auxTipoUsuario){
    tipoUsuario=auxTipoUsuario;
}

bool SistemaLogin::getSesionActiva(){
    return session;
}

string SistemaLogin::hasPassword(string auxPassword){
    hash<string> hasher;
    return to_string(hasher(auxPassword));
}

bool SistemaLogin::verificarCredenciales(string auxNombre, string auxPassword){
    return nombre == auxNombre && hasPassword(auxPassword) == password;
}
