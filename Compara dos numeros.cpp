/*Se declara dos variables, se indica cual es el mayor de los dos.
si son iguales indicarlo tambien. cambiar valores para comprobar.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num, num2;
	
		//Solicitar datos:
	cout<<"  Introduzca un numero: ";
	cin>>num;
	cout<<"  Introduzca el segundo numero:  ";
	cin>>num2;
	
	cout<<endl;
	
		//Operación de comparación		
	if(num>num2){
		cout<<"  El Primer numero es mayor..."<<endl;}
		else if (num2>num){
			cout<<"  El segundo numero es mayor..."<<endl;}
		else if (num=num2){
			cout<<"  Los numeros son iguales..."<<endl;}
		
	return 0;
	
}
