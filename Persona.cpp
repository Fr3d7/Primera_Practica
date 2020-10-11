// Nombre: Fredy Junior Lopez Perez 
//Carne: 3590-20-10386 

#include<iostream>
using namespace std;
class Persona{
	// Atributos
	protected : string nombres,apellidos;
				int telefono;	
	protected :
		Persona(string nom,string ape,int tel){
			nombres=nom;
			apellidos=ape;
			telefono=tel;	
		}
		
	// Metodos de accion
		void agregar();
		void mostrar();
};


