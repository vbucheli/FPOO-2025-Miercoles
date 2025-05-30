/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * comida.cpp
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

#include "comida.h"
#include <iostream>
#include <string>

Comida::Comida(string auxNombre, int auxSaturacion){
	nombre=auxNombre;
	saturacionComida=auxSaturacion;
}

string Comida::getNombre(){
	return nombre;
}

int Comida::getSaturacion(){
	return saturacionComida;
}
