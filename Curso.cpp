#include <iostream>
#include "Estudiante.cpp"

using namespace std;

class Curso : Estudiante{
	// Atributos
	private :	string curso;
				float nota1, nota2, nota3, nota4;

	// Constructor
	public :
			Curso (){
			}	
			
			Curso (int cod, string nom, string ape, string cur, float n1, float n2, float n3, float n4) : Estudiante(cod, nom, ape){
				curso = cur;
				nota1 = n1;
				nota2 = n2;
				nota3 = n3;
				nota4 = n4;				
			}
	
	// Métodos
	// set (Modificar)
	
	void setcod(int cod){codigo = cod;}
	void setnom(string nom){nombres = nom;}
	void setape(string ape){apellidos = ape;}
	void setcur(string cur){curso = cur;}
	void setn1(float n1){nota1 = n1;}
	void setn2(float n2){nota2 = n2;}
	void setn3(float n3){nota3 = n3;}
	void setn4(float n4){nota4 = n4;}

	// get (mostrar)
	
	int getcod(){return codigo;}
	string getnom(){return nombres;}
	string getape(){return apellidos;}
	string getcur(){return curso;}
	float getn1(){return nota1;}
	float getn2(){return nota2;}
	float getn3(){return nota3;}
	float getn4(){return nota4;}

	// Métodos
	void mostrar(){
		cout << "___________________________________________" << endl << endl;
		cout << "ESTUDIANTE" << endl;
		cout << "Codigo.....:" << codigo << endl;
		cout << "Nombre.....:" << nombres << endl;
		cout << "Apellidos..:" << apellidos << endl << endl;
		cout << "CURSO" << endl;
		cout << "Codigo.....:" << curso << endl;
		cout << "Nota 1.....:" << nota1 << endl;
		cout << "Nota 2.....:" << nota2 << endl;
		cout << "Nota 3.....:" << nota3 << endl;
		cout << "Nota 4.....:" << nota4 << endl;
		cout << "___________________________________________" << endl << endl;
	}
	
	float CalcularPromedio(){
		float promedio = 0;
		
		promedio = (nota1 + nota2 + nota3 + nota4)/4;
		return promedio;
	}
};
