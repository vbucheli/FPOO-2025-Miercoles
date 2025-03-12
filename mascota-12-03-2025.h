/* Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 
/*
/* mascota.h
/* Copyright (C) 2025 Victor Bucheli <victor.bucheli@correounivalle.edu.co>
/* 
/*
/*    Clase: Mascota
/*    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
/*    Universidad del Valle
/*
/*    Información CRC:
/*    
/*    Clase: Mascota
/*
/*    Responsabilidades:
/*        - simular una mascota como un tamagochi
/*		- simula la necesidad de sueño
/*		- simula la necesidad de comer
/*    
/*    Colaboradores:
/*        -
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
/*|      Mascota         |
/*+-------------------------------+
/*| - nombre: string              |
/*| - tipo: string                |
/*| - comerSaturacion: int        |
/*| - dormir: bool                |
/*+-----------------------------------+
/*| + Mascota(nombre: string)         |
/*| + setNombre(nombre: string): void |
/*| + setTipo(tipo: string): void     |
/*| + setComer(comer: bool): void     |
/*| + getNombre(): string             |
/*| + getTipo(): string               |
/*| + getComer(): bool                |
/*| + siComio(): void                 |
/*| + darLaPata(): void               |
/*| + jugar(): void                   |
/*| + morder(): void                  |
/*| + saludar(): void                 |
/*+-----------------------------------+
/*
*/

#ifndef _MASCOTA_H_
#define _MASCOTA_H_
#include <string> //sin esto no puedo utilizar tipo de dato string
//#include <iostream> no parece ser necesario cuz (no utilizo endl ni cout)
using  namespace std;

class Mascota
{
  private:
    string nombre;
    string tipo;
    int comerSaturacion;
	bool dormir;

  public:
    Mascota(string auxNombre); //declaracion del constructor
    Mascota(string auxNombre, int auxComer); //declaracion del constructor
    //setters
    void setNombre(string auxNombre);
    void setTipo(string auxTipo);
    void setComer(int saturacionComida);
    //getters
    string getNombre();
    string getTipo();
    int getComer();
    //funciones
    void siComio(); //pendiente.........
    void darLaPata();
    void saludar();
	void jugar();

};

#endif // _MASCOTA_H_

