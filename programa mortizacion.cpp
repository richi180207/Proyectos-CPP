//este programa es una calculadora de prestamos
#include<iostream>
#include<windows.h>
#include<cmath>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
	richermy:
		//login
	system("color 75");
	cout<<"RICHERMY DURAN"<<endl;
	cout<<"*CALCULADORA DE PRESTAMOS*"<<endl;
	//declarar variables
	double capital=0, interes=0,cuota_mensual=0,tasainteres_m=0,pendiente=0,capital_m=0,interes_m=0;
	int tiempo=0;
	//insertar y capturar datos
	cout<<"DIGITE EL MONTO(ENTER)"<<endl;
	cin>>capital;
	cout<<"DIGITE LA CUOTA(12 meses,24 meses...)(ENTER)"<<endl;
	cin>>tiempo;
	cout<<"DIGITE EL PORCIENTO DEL INTERES ANUAL(ENTER)"<<endl;
	cin>>interes;
	getch();
	//proceso de convertir interes anual, en interes mensual
	tasainteres_m= interes/12/100;
	//calculo de la cuota mensual
	cuota_mensual= (capital*tasainteres_m)/(1-pow(1+tasainteres_m, -tiempo));
	//cuota pendiente
	pendiente=capital;
	cout<<""<<endl;
	cout<<tasainteres_m<<endl;
	cout<<cuota_mensual<<endl;
	cout<<left<<setw(10)<<"MES"<<setw(15)<<"CUOTA"<<setw(15)<<"INTERES"<<setw(15)<<"CAPITAL"<<setw(15)<<"BALANCE"<<endl;
	//ciclo for calculo
	for(int mes=1 ;mes<=tiempo; mes++){
		interes_m=pendiente*tasainteres_m;
		capital_m=cuota_mensual-interes_m;
		pendiente-=capital_m;
		//tabla de mortizacion
		cout<<left<<setw(10)<<mes
		<<setw(15)<<fixed<<setprecision(2)<<cuota_mensual
		<<setw(15)<<fixed<<setprecision(2)<<interes_m
		<<setw(15)<<fixed<<setprecision(2)<<capital_m
		<<setw(15)<<fixed<<setprecision(2)<<(pendiente>0 ? pendiente:0.0)<<endl;
	}
	//control de salida
   string salir="si", salir1;
   cout<<"Digite si o no para salir"<<endl;
   cin>>salir1;
   if(salir1==salir)
   PostQuitMessage(0);
   else
   goto richermy;
	//comando de cierre
	return 0;
}


