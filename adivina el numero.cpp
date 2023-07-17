/*Crear un programa donde la compu elija un numero
luego el usuario debe decir cualquier numero y el sistema
debe decir si es mayor o menor hasta que acierte*/
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

	//Secuencia de numeros aleatorios:
	int num,num2;
	srand(time(NULL));
	num2 = 1 + rand()%(100);

	//Primera pregunta para adivinar:

cout<<"  Diga un numero del 1 al 100:  ";
		cin>>num;

	//Ayuda para adivinar mas rapido:

	while(num!=num2){
		
		if(num>num2){
			cout<<"     No: el numero es menor....."<<endl;
		}
		else{
			cout<<"     No: el numero es mayor...."<<endl;
			}
	
		cout<<"      escriba otro numero...";
		cin>>num;
		cout<<endl;
		}
		
		//Secuencia para cuando acierta el numero:
		cout<<endl;
		cout<<"    CORRECTO!!!! ese es el numero"<<endl;
		cout<<"     El numero a adivinar era el: "<<num2<<endl;	
		cout<<endl;	


getch();
return 0;	
	
}
