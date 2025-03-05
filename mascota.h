#include <string> //sin esto no puedo utilizar tipo de dato string
//#include <iostream> no parece ser necesario cuz (no utilizo endl ni cout)
using  namespace std;

class mascota
{ 
  private:
    string nombre;
    string tipo;
    bool comer;

  public:
    mascota(string nombre); //declaracion del constructor
    //setters
    void setNombre(string nombre);
    void setTipo(string);
    void setComer(bool);
    //getters
    string getNombre();
    string getTipo();
    bool getComer();
    //funciones
    void siComio(); //pendiente.........
    void darLaPata();
    void saludar();

}; //extraño pero asi termina };
