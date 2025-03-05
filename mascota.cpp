#include "mascota.h"//conecta a la clase de inicializacion
#include <iostream>
#include <string>

//atributos de esta clase (INICIALIZAR en .h)
mascota::mascota(string nombre) {//constructor: no lleva void, ni tipo de dato a return
  mascota::nombre = nombre;//atributos inicializados al crear objetos de esta clase
  tipo = "n/a";
  mascota::comer = false; //puede ser que
}

//metodos de esta clase (INICIALIZAR en .h)
void mascota::saludar() { 
  cout<<"Hola, soy tu mascota "<<mascota::nombre<<endl; 
  
}

void mascota::siComio() {//nombres de atributos y methods siempre diferent
  if (mascota::comer == true){
    cout<<mascota::nombre<<": Pero que lleno estoy, no mas comida."<<endl;
    
    }
  else{
    cout<<mascota::nombre<<": Creo que moriré de hambre"<<endl;
    }
  
}

void mascota::darLaPata() { 
  cout<<nombre<<": hola, saludo y doy la pata"<<endl;
  
}

//getters and setters (inicializar en .h)
string mascota::getNombre(){
  return mascota::nombre;
}

void mascota::setNombre(string nombre){
  mascota::nombre = nombre;
}

string mascota::getTipo(){
  return mascota::tipo;
}

void mascota::setTipo(string tipo){
  mascota::tipo = tipo;
}

bool mascota::getComer(){
  return mascota::comer;
}

void mascota::setComer(bool comer){
  mascota::comer = comer;
}


