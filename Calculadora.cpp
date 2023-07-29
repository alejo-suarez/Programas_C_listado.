#include <iostream>

using namespace std;

int main() {
    char operador;
    double num1, num2, resultado;

    cout << "Calculadora en C++" << endl;
    cout << "Ingresa la operación que deseas realizar (+, -, *, /) o 'q' para salir: ";

    while (cin >> operador && operador != 'q') {
        cout << "Ingresa el primer número: ";
        cin >> num1;

        cout << "Ingresa el segundo número: ";
        cin >> num2;

        switch (operador) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    cout << "¡Error! No se puede dividir entre cero." << endl;
                    continue;
                }
                break;
            default:
                cout << "Operador inválido. Inténtalo nuevamente." << endl;
                continue;
        }

        cout << "El resultado es: " << resultado << endl;
        cout << "Ingresa la operación que deseas realizar (+, -, *, /) o 'q' para salir: ";
    }

    cout << "¡Hasta luego!" << endl;
    return 0;
}

/*Calculadora que se ingrese dos numeros y dar a escoger la
oporación desea usar. Mostrar el resultado.
#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstdlib>
using namespace std;


int main(){
	int opcion,num3,num4;
	float num1,num2,total,res;
	
		//Menu de opciones:
		
		cout<<"    CALCULOS BASICOS:"<<endl;
	
		cout<<endl;
	
		cout<<"   Opciones:"<<endl;
		cout<<"\n    SUMAR:  marque: 1"<<endl;
		cout<<"\n    RESTAR:  marque: 2"<<endl;
		cout<<"\n    MULTIPLICAR:  marque: 3"<<endl;
		cout<<"\n    DIVIDIR:  marque: 4"<<endl;
		cout<<"\n    POTENCIACION:  marque: 5"<<endl;
		cout<<endl;
		cout<<" \n Que calculo desea hacer?:  ";
			cin>>opcion;
			
			//Suma:
		if(opcion==1){
			cout<<"Diga primer numero a sumar:  ";
			cin>>num1;
			cout<<"Diga el segundo numero a sumar: ";
			cin>>num2;
			total = num1 + num2;
			cout<<"\n El resultado de la suma es:  "<<total<<endl;
			}
		
				//Resta:
				else if(opcion==2){
					cout<<"Diga primer numero a restar: ";
					cin>>num1;cout<<"Diga el segundo numero a restar: ";
					cin>>num2;
					total = num1 - num2;
					cout<<"\n El resultado de la resta es:  "<<total<<endl;}
				
				
					//Multiplicación:	
					else if(opcion==3){
						cout<<"Diga primer numero a multiplicar: ";
						cin>>num1;
						cout<<"Diga el segundo numero a multiplicar: ";
						cin>>num2;
						total = num1 * num2;
						cout<<"\n El resultado de la multiplicacion es:  "<<total<<endl;}
					
					
						//División con residuo:
						else if(opcion==4){
							cout<<"Diga el numero dividendo: ";
							cin>>num3;
							cout<<"Diga el numero divisor: ";
							cin>>num4;
							div_t total; 
							total = div(num3,num4);
							cout<<"El resultado es:  "<<total.quot<<endl;
							cout<<"El Residuo es: "<<total.rem<<endl;}	
							
								//Potenciación:
								else if(opcion==5){
									cout<<"diga el base de la potencia:  ";
									cin>>num1;
									cout<<"diga el exponente:  ";
									cin>>num2;
									total = pow(num1,num2);
									cout<<"\n El resultado es:  "<<total<<endl;}													
									
									//Error en opción:
									else if(opcion>5){
										cout<<"...Opcion NO EXISTE o fuera de rango..."<<endl;}
						
									
	
	system ("pause");
	
	return 0;
}



*/