/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2025 Victor Bucheli <victor.bucheli@correounivalle.edu.co>
 * 
 * tamagochi is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * tamagochi is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mascota.h"
#include "comida.h"

using namespace std;
int main(){
  Mascota kira = Mascota("");
  Comida hamburguesa= Comida("hamburguesa",100);
  Comida pizza= Comida("pizza",100);
  Comida papas= Comida("papas",50);

  kira.setNombre("Kira");
  kira.setTipo("Perro");
  kira.saludar();
  kira.siComio();
  kira.setComer (hamburguesa.getSaturacion ());
  kira.siComio();
  kira.saludar();
  kira.saludar();
  kira.siComio();
  kira.setComer (papas.getSaturacion ());
  kira.siComio();
	return 0;
}

