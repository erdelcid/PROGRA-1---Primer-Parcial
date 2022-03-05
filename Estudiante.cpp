#include <iostream>

using namespace std;

class Estudiante{
	// Atributos
	protected : int codigo;
				string nombres, apellidos;
	
	// Constructor
	protected :
				Estudiante (){
				}
				
				Estudiante (int cod, string nom, string ape){
					codigo = cod;
					nombres = nom;
					apellidos = ape;
				}
	
	// Métodos
	void mostrar();
};
