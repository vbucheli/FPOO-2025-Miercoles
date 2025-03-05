/*
    Clase: Bombillo
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:
    
    Clase: Bombillo

    Responsabilidades:
        - Abstraer el comportamiento de un bombillo
        - El bombillo puede encender y apagar
    
    Colaboradores:
        - 

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.


    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Marzo 2025
*/
#ifndef BOMBILLO_H
#define BOMBILLO_H

//Tiene Nombre
class Bombillo {
private:
	//caracteristicas
	bool encendidoApagado;
public:
	//funcionalidades
	Bombillo();
	void enceder();
	void apagar();
    bool getEncendidoApagado();
};
#endif // BOMBILLO_H