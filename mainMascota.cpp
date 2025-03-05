#include <iostream>
#include "mascota.h"

int main(){
  mascota kira = mascota("");
  mascota simon = mascota("");
  //kira.setNombre("Kira");
  kira.setNombre("Kira");
  kira.setTipo("Perro");
  kira.setComer(true);
  kira.saludar();
  kira.siComio();
  kira.darLaPata();
  
  simon.setNombre("Simon");
  simon.setTipo("gato");
  simon.saludar();
  simon.setComer(false);
  simon.siComio();
  simon.darLaPata();
}