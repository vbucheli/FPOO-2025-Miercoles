  /*
      Proyecto: Banco
      Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
      Universidad del Valle

        Descripción:
      Este proyecto busca desarrollar un proyecto completo en FPOO analisis, diseño e implementación
      programar un banco

      Autor: Juan Fernando Marmolejo 
      Correo: juan.fernando.marmolejo@correounivalle.edu.co
      Fecha: Marzo 2025
      Contribuidor: Victor Bucheli
  */
  #include "Cliente.h"
  #include <iostream>
  #include <string>
  using namespace std;

  Cliente::Cliente(const string parametro_identificacion){
      nombre="";
      telefono="";
      identificacion=parametro_identificacion;
    
  };



  string Cliente::getNombre(){
    return nombre;  
  };

  string Cliente::getIdentificacion(){
    return identificacion;  
  };

  string Cliente::getTelefono(){
    return telefono;  
  };

  void Cliente::setNombre(string parametro_nombre){
    nombre=parametro_nombre;
  };

  void Cliente::setTelefono(string parametro_telefono){
    telefono= parametro_telefono;
  };

  void Cliente::imprimir(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Identificacion: "<<identificacion<<endl;
    cout<<"Telefono: "<<telefono<<endl;
  };