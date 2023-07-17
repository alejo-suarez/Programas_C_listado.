//Ejemplo de la condicional While

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int conteo=0, numero;
	
	cout<<"\n escriba un numero:  ";
	cin>>numero;
	
		while (numero!=0){
			conteo++;
			cout<<"\n escriba un numero:  ";
			cin>>numero;
		}
	
	cout<<"el total de numero introducidos es:   "<<conteo<<endl;
	
	
	
	getch();
return 0;	
}

