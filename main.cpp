/*
UNIVERSIDAD MARIANO GALVEZ
PROGRAMACION 1
EDUARDO DEL CID
5990-21-21461

Crear un programa que le solicite al usuario ingresar N cantidad de estudiantes 
(Código, nombres, apellidos, Curso ,nota1, nota2, nota3, nota4 ) 
y que calcule automáticamente el promedio; 
y si la nota es superior a 60 que indique que el estudiante aprobó 
caso contrario que indique que reprobó. 
Aplicar los Paradigmas de la Programación Orientada a Objetos.
*/
#include <iostream>
#include "Curso.cpp"

using namespace std;

main(){
	int codigo = 0, cantidad = 0;
	string nombres = "", apellidos = "", curso = "";
	float  nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, promedio = 0;

	cout << endl << "Cuántos estudiantes va a trabajar?.....: ";
	cin  >> cantidad;

	for (int i=1; i<=cantidad; i++)
	{
		system("cls");
		cout << endl << "Ingrese los valores pedidos de estudiante " << i << ";" << endl << endl;
		cout << "Codigo......: ";
		cin >> codigo;
		cout << "Nombres.....: ";
		cin >> nombres;
		cout << "Apellidos...: ";
		cin >> apellidos;
		cout << "Cod Curso...: ";
		cin >> curso;
		cout << "Nota 1......: ";
		cin >> nota1;
		cout << "Nota 2......: ";
		cin >> nota2;
		cout << "Nota 3......: ";
		cin >> nota3;
		cout << "Nota 4......: ";
		cin >> nota4;
		
		// Instanciar un objeto
		
//		Curso objdata = Curso(codigo, nombres, apellidos, curso, nota1, nota2, nota3, nota4);

		Curso objdata = Curso();	//Mando los datos al constructor de la clase que se definió vacío, para después llenarla con los SET y así utilizarlos en el examen.
		objdata.setcod(codigo);
		objdata.setnom(nombres);
		objdata.setape(apellidos);
		objdata.setcur(curso);
		objdata.setn1(nota1);
		objdata.setn2(nota2);
		objdata.setn3(nota3);
		objdata.setn4(nota4);

		objdata.mostrar();
		promedio = objdata.CalcularPromedio();
	
		cout << "PROMEDIO....: " << promedio << endl;	
	
		if (promedio  > 60 ){
			cout << "El estudiante " << objdata.getnom() << " " << objdata.getape() << " APROBO el curso " << objdata.getcur() << "." << endl;
		}
		else {
			cout << "El estudiante " << objdata.getnom() << " " << objdata.getape() << " REPROBO el curso " << objdata.getcur() << "." << endl;
		}
		cout << endl << "___________________________________________" << endl << endl;
		
		system("pause");
	}

}
