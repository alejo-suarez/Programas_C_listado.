/*Declara un string que contenga un nombre, despues mostrar 
mensaje de bienvenida...*/

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

void pedirNombre(string &);
void copiaNombre(string);

int main(){
	string nombre;
	cout<<endl;
	pedirNombre(nombre);
	cout<<endl;
	copiaNombre(nombre);
	
		
	getch();
	return 0;
}

void pedirNombre(string & nombre){
	cout<<" Diga el nombre a incluir:  ";
	getline(cin,nombre);
}

void copiaNombre(string nombre){
	
	cout<<" Bienvenido "<<nombre<<"...";
}
