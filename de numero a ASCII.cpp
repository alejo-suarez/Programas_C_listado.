/*Leer un numero por teclado y mostrar por patalla a que corresponde en
codigo ASCII. Ejm. Indtroduzco el 97 y aparece a.*/


#include<iostream>
using namespace std;

int main(){
	int variable;
	char carac;
	
		//Solicitud de datos:
	cout<<"Ingrese numero: ";
	cin>>variable;
	
		//Se lleva el numero a caracter:
	carac=variable;
	cout<<endl;
	cout<<"El caracter es:  "<<carac<<endl;
	cout<<endl;
			
	system("pause");
	return 0;
}
