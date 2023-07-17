/*Numeros divisibles entre 2 y tres.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int num,opcion;
	
		//Pedir datos por consola.
	cout<<"Numeros divisibles entre 2 hasta 100: marque 2: "<<endl;
	cout<<endl;
	cout<<"Numeros divisibles entre 3 hasta 100: marque 3: "<<endl;	
	cin>>opcion;
	
	
		//Operación.
	switch (opcion){
		case 2:
			num = 2;
			while(num<=100){
				cout<<" "<<num;	
				num = num + 2;}break;
		
		case 3:
			num = 3;
			while(num<=100){
				cout<<" "<<num;
				num = num + 3;}break;
		default: cout<<"error en opcion...";break;}
	
getch();
return 0;
}


