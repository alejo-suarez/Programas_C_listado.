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
}
