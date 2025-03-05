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
#include<iostream>
#include<vector>
#include "Bombillo.h"
using namespace std;


int main(){
    Bombillo hilux;
    Bombillo hiundai;
    Bombillo nec;
    Bombillo philips;
    vector<Bombillo> lucesNavidad;
    lucesNavidad.push_back(hilux);
    lucesNavidad.push_back(hiundai);
    lucesNavidad.push_back(nec);
    lucesNavidad.push_back(philips);
//Imprimir
    for(int i=0; i<4; i++){
        cout<<lucesNavidad[i].getEncendidoApagado()<<endl;
    }

    //Enceder luces de navidad
    for(int i=0; i<4; i++){
        lucesNavidad[i].enceder();
    }
//Imprimir
    for(int i=0; i<4; i++){
        cout<<lucesNavidad[i].getEncendidoApagado()<<endl;
    }
//encender solo pares
    for(int i=0; i<4; i++){
        if(i%2==0) lucesNavidad[i].enceder();
        else lucesNavidad[i].apagar();
    }
//Imprimir
    for(int i=0; i<4; i++){
        cout<<lucesNavidad[i].getEncendidoApagado()<<endl;
    }

    /*
    cout<<hilux.getEncendidoApagado()<<endl;
    cout<<hiundai.getEncendidoApagado()<<endl;
    cout<<nec.getEncendidoApagado()<<endl;
    cout<<philips.getEncendidoApagado()<<endl;
    
    philips.enceder();
    cout<<hilux.getEncendidoApagado()<<endl;
    cout<<hiundai.getEncendidoApagado()<<endl;
    cout<<nec.getEncendidoApagado()<<endl;
    cout<<philips.getEncendidoApagado()<<endl;
    hilux.encendidoApagado=true;
    cout<<hilux.getEncendidoApagado()<<endl;
    */
    



}