#include <iostream>
#include <string>

using namespace std;

/*
	En este programa, el usuario puede ingresar su fecha de nacimiento en el formato día, 
	mes y año (por ejemplo: 25 7 1990). Si el usuario ingresa "0" como año de nacimiento,
 	el programa se detiene y muestra un mensaje de despedida. El programa también realiza
  	las validaciones necesarias para asegurarse de que se ingrese una fecha válida y 
  	considera los años bisiestos para el mes de febrero. Si la fecha ingresada no es válida,
   	el programa pedirá al usuario que ingrese nuevamente su fecha de nacimiento hasta 
   	que se ingrese una fecha válida o se decida salir con "0"*/

// Función para validar si un año es bisiesto
bool esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Función para validar si un día es válido para un mes específico
bool esDiaValido(int day, int month, int year) {
    static const int diasPorMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (day > 0 && day <= diasPorMes[month - 1]) || (month == 2 && day == 29 && esBisiesto(year));
}

// Función para obtener el signo zodiacal
string obtenerSignoZodiaco(int day, int month) {
    static const string signos[12] = {
        "Capricornio", "Acuario", "Piscis", "Aries", "Tauro", "Géminis",
        "Cáncer", "Leo", "Virgo", "Libra", "Escorpio", "Sagitario"
    };

    static const int limites[12] = { 20, 19, 20, 20, 20, 21, 22, 22, 22, 22, 21, 21 };

    return (day <= limites[month - 1]) ? signos[month - 1] : signos[month % 12];
}

int main() {
    cout << "Bienvenido al programa del Zodiaco" << endl;

    while (true) {
        int day, month, year;

        // Pedimos la fecha de nacimiento al usuario
        cout << "Ingresa tu fecha de nacimiento (día mes año) o 0 para salir: ";
        cin >> day;

        // Si el usuario ingresa 0, salimos del programa
        if (day == 0) {
            cout << "¡Hasta luego!" << endl;
            break;
        }

        cin >> month >> year;

        // Validamos si la fecha es válida
        if (year <= 0 || month < 1 || month > 12 || day < 1 || !esDiaValido(day, month, year)) {
            cout << "Fecha de nacimiento inválida. Por favor, ingresa una fecha válida." << endl;
            continue;
        }

        // Obtenemos el signo zodiacal
        string signoZodiaco = obtenerSignoZodiaco(day, month);

        // Mostramos el resultado
        cout << "Tu signo zodiacal es: " << signoZodiaco << endl;
    }

    return 0;
}
/*
//Leer por tclado un numero del 1 al 12 y leer el signo del sodiaco
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
	int d_fecha1,m_fecha1;
	int diasFecha1;
	

		//Solicita el dia de nacimiento:
	do {cout<<"Escriba el numero del dia que nacio:  ";
			cin>>d_fecha1;}
			
			
			//Condicional para no pasar de 31 dias del mes
		while (d_fecha1 > 31) ;{
		cout<<endl;}
	
			//Solicita el mes de nacimiento:
	do	{cout<<"Escriba el numero del mes que nacio:  ";
			cin>>m_fecha1;}
			
			//Condicional para no pasar de 12 meses: 
		while (m_fecha1 > 12);{
		cout<<endl;}	
		
		//Condicional para despues del 29 de febrero:
		if (d_fecha1>=30 && m_fecha1==2){
			cout<<"Esa fecha no existe...."<<endl;}
										 
	
	
	//calcular los dias desde comienzo de año	
	m_fecha1 = m_fecha1 * 30;
	diasFecha1 = m_fecha1 + d_fecha1;
	
	cout<<endl;
	
	
			//Calculo del signo según el total de dias desde el 19 de enero: 
	 	if(diasFecha1 >=50 && diasFecha1<=78) {
		 	 cout<<"Su signo es Acuario..."; }		 

			
			if(diasFecha1 ==89){
				cout<<"Naciste en año viciesto, ";}
			
			
				if(diasFecha1 >=79 && diasFecha1 <= 110) {
		 			 cout<<"Su signo es Piscis..."; }
		 		
		 		
					if(diasFecha1 >=111 && diasFecha1 <=139){
		 				cout<<"Su signo es Aries..."; }


						if(diasFecha1 >=140 && diasFecha1 <=170){
	 			 			cout<<"Su signo es Tauro..."; }	
						
						
							if(diasFecha1 >=171 && diasFecha1 <=200){
	 							cout<<"Su signo es Geminis..."; }

						
								if(diasFecha1 >=201 && diasFecha1 <=232) {
	 								cout<<"Su signo es Cancer..."; }	
		 					 
		 					 
									if(diasFecha1 >=233 && diasFecha1 <=262){
		 	 							cout<<"Su signo es Leo..."; }

								
										if(diasFecha1 >=263 && diasFecha1 <=292){
		 	 								cout<<"Su signo es Virgo..."; }

										
											if(diasFecha1 >=293 && diasFecha1 <=322){
		 	 									cout<<"Su signo es Libra..."; }
											  
											
												if(diasFecha1 >=323 && diasFecha1 <=351){
		 	 										cout<<"Su signo es Escorpio..."; }
 
											
													if(diasFecha1 >=352 && diasFecha1 <=381){
		 	 											cout<<"Su signo es Sagitario..."; }
													
													
														//Este signo incluye dias de diciembre y enero...
													if(diasFecha1 >=382 && diasFecha1 <=391||diasFecha1>=31 && diasFecha1<=49) {
	 													cout<<"Su signo es Capricornio..."; }
													
													
														//cuando la fecha sobrepasa los dias del año: 
													 if(diasFecha1>391){
													 	cout<<"Datos fuera de rango, se utiliza el Calendario Gregorino....";}
	cout<<endl;
	
	
	system("pause");		
	return 0;
}*/