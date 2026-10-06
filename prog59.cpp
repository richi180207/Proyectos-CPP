//este programa es de nomina de empleados
//incluir libreria
#include<iostream>
#include<windows.h>
#include<iomanip>
#include<fstream>
using namespace std;
void escribir();
int main()
{
	escribir();
	richermy:
	system("color 75");
	//inicio
	cout<<"                  _____________________________________________"<<endl;
	cout<<"                 |           Richermy Duran                    |"<<endl;
	cout<<"                 |           La Especial SRL                   |"<<endl;
	cout<<"                 |           Nomina de empleados               |"<<endl;
	cout<<"                 |_____________________________________________|"<<endl;
	
	//declarar variables
	string nombre,nombre2,nombre3,apellido,apellido2,apellido3,si,si1="si";
	float horas=0,precio=0,sueldo=0,seguro=0,cooperativa=0,descuento=0,sueldoNeto=0,
	total_hora=0,total_sueldo=0,total_seguro=0,total_cooperativa=0,total_descuento=0,total_Neto=0,
	precio2=0,precio3=0,horas2=0,horas3=0,sueldo2=0,seguro2=0,cooperativa2=0,descuento2=0,sueldoNeto2=0,
	sueldo3=0,seguro3=0,cooperativa3=0,descuento3=0,sueldoNeto3=0;
	int numero=0;
	///insertar y capturar datos
	cout<<"  ------------MENU------------"<<endl;
	cout<<" 1-llenar los datos del empleado"<<endl;
	cout<<" 2-Tabla de los datos"<<endl;
	cout<<" 3-Se mostraran cuales son los empleados con menos sueldo bruto"<<endl;
	cout<<" 4-Salida"<<endl;
	volver:
	cout<<"Digite del 1 al 4"<<endl;
	cin>>numero;
	if(numero>=1 && numero<=4)
	goto cont;
	else
	goto volver;
	cont:
		system("cls");
		//declarar variables
	int i;
	//Configuracion De Consola
	SetConsoleCP(437);
    SetConsoleOutputCP(437);
	//Declaracion de Variables con Caracteres 
	int bar1= 176, bar2= 221; 
	
   cout<<"\n\n\n\t\t\t\tLoading...";
    cout<<"\n\n\n\t\t\t\t";
	//Funcion For Para la Cadena de Caracteres
	for(int i=0; i<25; i++)
	cout<< (char)bar1;
	//Barra Invertida
    cout<<"\r";
	cout<<"\t\t\t\t";
	for (int i=0; i<25; i++)
	{
	cout <<(char)bar2;
	//Bucle de Suspension
	Sleep(150);
	}
	cout<<"\n\t\t\t\t"<<(char)1 <<"!";
	switch(numero){
		case 1:{
			cout<<"Ingrese sus Datos"<<endl;
			cout<<"Digite el nombre del empleado(enter)"<<endl;
			cin>>nombre;
			cout<<"Digite el apellido del empleado(enter)"<<endl;
			cin>>apellido;
		       cout<<"Digite las horas trabajadas(enter)"<<endl;
				cin>>horas;
				cout<<"Digite el precio de las horas trabajadas(enter)"<<endl;
				cin>>precio;
			cout<<"desea digitar mas empleados?(si o no)(enter)"<<endl;
			cin>>si;
			if(si==si1){
				cout<<"Digite el nombre del empleado(enter)"<<endl;
				cin>>nombre2;
				cout<<"Digite el apellido del empleado(enter)"<<endl;
				cin>>apellido2;
				cout<<"Digite las horas trabajadas(enter)"<<endl;
				cin>>horas2;
				cout<<"Digite el precio de las horas trabajadas(enter)"<<endl;
				cin>>precio2;
			}
			else {
			goto conti;}
			conti:
			cout<<"desea digitar mas empleados?(si o no)(enter)"<<endl;
			cin>>si;
			if(si==si1){
				cout<<"Digite el nombre del empleado(enter)"<<endl;
				cin>>nombre3;
				cout<<"Digite el apellido del empleado(enter)"<<endl;
				cin>>apellido3;
				cout<<"Digite las horas trabajadas(enter)"<<endl;
				cin>>horas3;
				cout<<"Digite el precio de las horas trabajadas(enter)"<<endl;
				cin>>precio3;
				goto cont3;}
				else
			 goto cont2;
			
				
			break;
		}
		case 2:{
			cont3:
			cont2:
				system("cls");
				sueldo3=horas3*precio3;
				seguro3=(sueldo3*0.012);
				cooperativa3=(sueldo3*0.05);
				descuento3=seguro3+cooperativa3;
				sueldoNeto3=sueldo3-descuento3;
				
				sueldo2=horas2*precio2;
				seguro2=(sueldo2*0.012);
				cooperativa2=(sueldo2*0.05);
				descuento2=seguro2+cooperativa2;
				sueldoNeto2=sueldo2-descuento2;
				
				sueldo=horas*precio;
				seguro=(sueldo*0.012);
				cooperativa=(sueldo*0.05);
				descuento=seguro+cooperativa;
				sueldoNeto=sueldo-descuento;
				cout<<"                                           TABLA DE EMPLEADOS"<<endl;
				cout<<"________________________________________________________________________________________________________________"<<endl;
				cout<<"| Empleados"<<"         |"<<" Horas trabajadas"<<"|"<<"Precio X hora"<<"|"<<"Sueldo Bruto"<<"|"<<"Seguro"<<" |"<<"Cooperativa"<<"|"<<"Total Descuento"<<"|"<<"Sueldo Neto"<<"|"<<endl;   
				cout<<"| "<<nombre<<"  "<<setw(4)<<apellido<<"   | "<<setw(8)<<horas<<setw(9)<<" |"<<setw(8)<<precio<<setw(6)<<" |"<<setw(8)<<sueldo<<setw(6)<<" | "<<setw(4)<<seguro<<"  | "<<setw(8)<<cooperativa<<setw(4)<<" | "<<setw(8)<<descuento<<setw(8)<<" | "<<sueldoNeto<<setw(7)<<" | "<<endl;
				cout<<"| "<<nombre2<<"    "<<setw(6)<<apellido2<<"  | "<<setw(8)<<horas2<<setw(9)<<" |"<<setw(8)<<precio2<<setw(6)<<" |"<<setw(8)<<sueldo2<<setw(6)<<" | "<<setw(4)<<seguro2<<" | "<<setw(8)<<cooperativa2<<setw(4)<<" | "<<setw(8)<<descuento2<<setw(8)<<" | "<<sueldoNeto2<<setw(5)<<" | "<<endl;
				cout<<"| "<<nombre3<<"     "<<setw(6)<<apellido3<<"  | "<<setw(9)<<horas3<<setw(8)<<" |"<<setw(8)<<precio3<<setw(6)<<" |"<<setw(8)<<sueldo3<<setw(6)<<" | "<<setw(4)<<seguro3<<"| "<<setw(8)<<cooperativa3<<setw(4)<<" | "<<setw(8)<<descuento3<<setw(8)<<" | "<<sueldoNeto3<<setw(5)<<" | "<<endl;
				cout<<"|________________________________________________________________________________________________________________|"<<endl;
				goto cont4;
			break;
			case 3:{cont4:
				system("cls");
				
				//proceso de if menor sueldo bruto
if(sueldo<sueldo2 && sueldo<sueldo3)
//respuesta positiva
cout<<"El empleado de menor sueldo bruto es:"<<sueldo<<endl;
//respuesta negativa
else
if(sueldo2<sueldo && sueldo2<sueldo3)
//respuesta positiva
cout<<"El empleado de menor sueldo bruto es:"<<sueldo2<<endl;
//respuesta negativa
else
if(sueldo3<sueldo && sueldo3<sueldo2)
//respuesta positiva
cout<<"El empleado de menor sueldo bruto es:"<<sueldo3<<endl;
cout<<"presione enter para continuar"<<endl;
				goto cont5;
				break;
			}
			case 4:{
				cont5:
				//control de salida
   string salir="si", salir1;
   cout<<"Digite si o no para salir"<<endl;
   cin>>salir1;
   if(salir1==salir)
   PostQuitMessage(0);
   else
   goto richermy;
				break;
			}
		}
	}
    //comando de cierre
    return 0;
	}
	void escribir(){
	ofstream archivo;
	archivo.open("prog59.txt,ios::out");//abriendo el archivo
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	 archivo.close();//cerrar el archivo
}
