/*Mostrar los numeros del 1 al 100 usando un bucle for*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num,i;
	
	//Calculo:
	num = 1;
		for (int i=0;i<100;i++){
		cout<<" "<<num;
		num = num + 1;	
		}	
		
	getch();
	return 0;
}
