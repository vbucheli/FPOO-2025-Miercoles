/* Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 
/*
/* comida.h
/* Copyright (C) 2025 Victor Bucheli <victor.bucheli@correounivalle.edu.co>
/* 
/*
/*    Clase: Comida
/*    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
/*    Universidad del Valle
/*
/*    Información CRC:
/*    
/*    Clase: Comida
/*
/*    Responsabilidades:
/*      - simular la comida para un tamagochi
/*		- La comida puede tener precio(Desarrolla en la siguiente version)
/*		-
/*    
/*    Colaboradores:
/*        - Mascota
/*
/*    Este es un proyecto del curso FPOO de la Universidad del Valle, 
/*    desarrollado con fines académicos. Puede ser utilizado con fines 
/*    académicos dando los créditos de la autoría.
/*
/*
/*    Autor: Victor Bucheli
/*    Correo: victor.bucheli@correounivalle.edu.co
/*    Fecha: marzo 2025
/*
/*
/*+----------------------+
/*|      Comida         |
/*+----------------------+
/*| - nombre: string          |
/*| - saturacionComida: int   |
/*|                           |
/*+----------------------------------------------+
/*| + Comida(nombre: string, int:auxSaturacion)  |
/*| + getNombre(): string      				     |
/*| + getSaturacion(): int                       |
/*+----------------------------------------------+
/* 
*/

#ifndef _COMIDA_H_
#define _COMIDA_H_
#include <string>
using  namespace std;

class Comida
{
  private:
    string nombre;
    int saturacionComida;
  public:
	Comida(string auxNombre, int auxSaturacion);
	string getNombre();
	int getSaturacion();
};

#endif // _COMIDA_H_

