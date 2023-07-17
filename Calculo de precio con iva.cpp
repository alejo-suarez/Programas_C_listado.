/*Pedir un precio de un producto por teclado y calcula el precio con IVA (21%)*/
#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	float total_P,precio, precio_I, imp;
	
		//Constante porcentaje de impuesto:
	const float iva = 0.21;
	cout<<endl;
	
			//Solictar datos por pantalla:
		cout<<"Indique el precio del producto(para los centimos utilice .):   ";
		cin>>precio;
	
			//Calculo del Impuesto:
		precio_I = precio * iva; 
		imp = iva * precio;
		total_P = precio + precio_I;
	
			//Respuesta:
		cout<<endl;
		cout<<"Precio del producto:  "<<precio<<endl;
		cout<<endl;
		cout<<"Impuesto del 21%: "<<fixed<<setprecision(2)<<imp<<endl;
		cout<<endl;
		cout<<"Total a pagar (incluido el IVA):  "<<total_P<<endl; 
		cout<<endl;

		
	system("pause");
	return 0;
}
