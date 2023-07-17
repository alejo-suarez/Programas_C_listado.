/*Un programa que determine el area de un circulo*/
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main(){
	float radio,longitud,area;
	
	const float pi = 3.141592;
	
	
		//Solcitar datos:
	cout<<"ingrese el radio de la circunferencia en cm.:  ";
	cin>>radio;
	
		//Calculo del área:
	area = pi * pow(radio,2);
	 
	  //Resultado:
	cout<<" El area de la circunferencia es:   "<<area<<" cm."<<endl;
	
	
	
	return 0;
}

