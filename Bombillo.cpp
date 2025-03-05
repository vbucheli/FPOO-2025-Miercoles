/*
    Proyecto: Bombillos
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Descripción:
    Este proyecto busca dar los primeros conceptos de FPOO a través de
    programar un bombillo

    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Marzo 2025
*/
#include "Bombillo.h"

Bombillo::Bombillo()  {
   encendidoApagado=false;
}

void Bombillo::enceder(){
    encendidoApagado=true;
}

void Bombillo::apagar(){
    encendidoApagado=false;
}
bool Bombillo::getEncendidoApagado(){
    return encendidoApagado;
}
