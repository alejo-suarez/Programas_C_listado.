/*Crear un programa, ingresa un caracater ASCII y emite su numero correspondiente*/

#include<iostream>
using namespace std;

int main(){
	int variable;
	char carac;
	
	//Pedir Carácter:
	cout<<"\n Ingrese un Caracter:  ";
	cin>>carac;
	variable=carac;
	
	
	//Resultado:
	cout<<endl;
	cout<<"El numero que corresponde al caracater es: "<<variable;
	
	cout<<endl;
	
	
	
	system("pause");
	return 0;
}
