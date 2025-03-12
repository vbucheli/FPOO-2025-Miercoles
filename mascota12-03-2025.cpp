/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * mascota.cpp
 * Copyright (C) 2025 Victor Bucheli <victor.bucheli@correounivalle.edu.co>
 *
 * proyectoTamagochi is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * proyectoTamagochi is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mascota.h"


#include <iostream>
#include <string>

//atributos de esta clase (INICIALIZAR en .h)
Mascota::Mascota(string auxNombre) {//constructor: no lleva void, ni tipo de dato a return
  nombre = auxNombre;//atributos inicializados al crear objetos de esta clase
  tipo = "n/a";
  comerSaturacion = 0; //puede ser que
}

//atributos de esta clase (INICIALIZAR en .h)
Mascota::Mascota(string auxNombre, int auxComer) {//constructor: no lleva void, ni tipo de dato a return
  nombre = auxNombre;//atributos inicializados al crear objetos de esta clase
  tipo = "n/a";
  comerSaturacion = auxComer; //puede ser que
}

//metodos de esta clase (INICIALIZAR en .h)
void Mascota::saludar() { 
  cout<<"Hola, soy tu mascota "<<nombre<<endl;
  comerSaturacion=comerSaturacion-15;
  
}

void Mascota::siComio() {//nombres de atributos y methods siempre diferent
  if (comerSaturacion >= 80){
    cout<<nombre<<": Pero que lleno estoy, no más comida."<<endl;
    
    }
  else{
    cout<<nombre<<": Creo que moriré de hambre"<<endl;
    }
  
}

void Mascota::darLaPata() { 
  cout<<nombre<<": hola, saludo y doy la pata"<<endl;
comerSaturacion=comerSaturacion-10;
  
}

//getters and setters (inicializar en .h)
string Mascota::getNombre(){
  return nombre;
}

void Mascota::setNombre(string auxNombre){
  nombre = auxNombre;
}

string Mascota::getTipo(){
  return tipo;
}

void Mascota::setTipo(string auxTipo){
 tipo = auxTipo;
}

int Mascota::getComer(){
  return comerSaturacion;
}

void Mascota::setComer(int saturacionComida){
	comerSaturacion = comerSaturacion+saturacionComida;
}
