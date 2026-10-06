//este programa es para CONTROL DE DISCOTECA
//incluir libreria
#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
int main()
{ 
    richermy:
   	system("color 75");
	cout<<"Richermy Duran"<<endl;
	cout<<"CONTROL DE DISCOTECA"<<endl;
	getch();
	system ("cls");
	//declarar variables
	int hombres=0, mujeres=0, indefinido=0,boletas=0,servicio=0,vip=0,estandar=0;
	char genero;
//insertar y capturar datos
richi:
    cout<<"si usted es hombre ingrese(H), si es mujer(M) y si es indifinido(I)enter para continuar"<<endl;
    cin>>genero;
    denuevo:
    cout<<"Cual es el tipo de servicio?"<<endl;
    cout<<"(1)VIP"<<endl;
    cout<<"(2)ESTANDAR"<<endl;
    cin>>servicio;
    if(servicio>=1 && servicio<=2)
    goto cont;
    else
    goto denuevo;
    cont:
    	if(servicio==1) {vip++;}
    	else if (servicio==2) {estandar++;}
    cout<<"Digite el numero de boletas vendido(ENTER)"<<endl;
    cin>>boletas;
        //proceso
        if (genero == 'h') { hombres++;} 
         else if (genero == 'm') { mujeres++;}
         else if (genero == 'i') {indefinido++;}
         string salir2="si",salir3;
           cout<<"Digite si para agregar mas generos de las personas(enter para continuar)"<<endl;
            cin>>salir3;
            if(salir3==salir2)
           	system ("cls");
            goto richi;
            else
            goto mariel;
     //salida de datos
	 mariel:
	 	getch();
	 	system ("cls");
    cout << "Resultados de los datos ingresados:" << endl;
    cout << "Hombres:" <<hombres<< endl;
    cout << "Mujeres:" <<mujeres<< endl;
    cout << "Indefinidos:"<<indefinido<< endl;
    cout << "VIP:"<<vip<< endl;
    cout << "ESTANDAR:"<<estandar<< endl;
    cout << "Boletas:"<<boletas<< endl;
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
