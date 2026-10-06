//este programa es para sacar las calificaciones de las escuelas
//incluir libreria
#include <iostream>//bibliotecas
#include <cmath>
#include <windows.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <locale>
using namespace std;
int main()
{
	richermy:
	system("color 75");
	cout<<"Richermy Duran"<<endl;
	cout<<"Este programa es para sacar las calificaciones de las escuelas"<<endl;

string cali1_6to,cali2_6to,cali3_6to,cali4_6to,cali5_6to,cali6_6to,cali7_6to,cali8_6to,cali9_6to,cali10_6to,cali11_6to,cali12_6to,pp_6to,nuevo_6to,nuevo1_6to="si";
	int p1_6to=0,p2_6to=0,p3_6to=0,p4_6to=0,n1_6to=0,n2_6to=0,n3_6to=0,
	n4_6to=0,n5_6to=0,n6_6to=0,n7_6to=0,n8_6to=0,n9_6to=0,n10_6to=0,
	nf1_6to=0,nf2_6to=0,nf3_6to=0,nf4_6to=0,nf5_6to=0,nf6_6to=0,nf7_6to=0,nf8_6to=0,nf9_6to=0,nf10_6to=0,nf11_6to=0,nf12_6to=0,nf_6to=0,
	l1_6to=0,l2_6to=0,l3_6to=0,l4_6to=0,s1_6to=0,s2_6to=0,s3_6to=0,s4_6to=0,q1_6to=0,q2_6to=0,q3_6to=0,q4_6to=0,
	f1_6to=0,f2_6to=0,f3_6to=0,f4_6to=0,e1_6to=0,e2_6to=0,e3_6to=0,e4_6to=0,e5_6to=0,e6_6to=0,e7_6to=0,e8_6to=0,e9_6to=0,e10_6to=0,i1_6to=0,i2_6to=0,i3_6to=0,i4_6to=0,h1_6to=0,h2_6to=0,h3_6to=0,h4_6to=0,
	d1_6to=0,w1_6to=0,w2_6to=0,w3_6to=0,w4_6to=0,w5_6to=0,w6_6to=0,w7_6to=0,w8_6to=0,w9_6to=0,w10_6to=0,t1_6to=0,t2_6to=0,t3_6to=0,t4_6to=0,t5_6to=0,t6_6to=0,t7_6to=0,t8_6to=0,t9_6to=0,t10_6to=0,
	im1_6to=0,im2_6to=0,im3_6to=0,im4_6to=0,im5_6to=0,im6_6to=0,im7_6to=0,im8_6to=0,im9_6to=0,im10_6to=0,a1_6to=0,a2_6to=0,a3_6to=0,a4_6to=0;

	//declarar variables 4to
	string estudiante,maestro,apellido_m,apellido,escuela,materia1,cali1_4to,cali2_4to,cali3_4to,cali4_4to,cali5_4to,cali6_4to,cali7_4to,cali8_4to,cali9_4to,cali10_4to,cali11_4to,cali12_4to,pp_4to,nuevo_4to,nuevo1_4to="si";
	int p1_4to=0,p2_4to=0,p3_4to=0,p4_4to=0,n1_4to=0,n2_4to=0,n3_4to=0,
	n4_4to=0,n5_4to=0,n6_4to=0,n7_4to=0,n8_4to=0,n9_4to=0,n10_4to=0,
	nf1_4to=0,nf2_4to=0,nf3_4to=0,nf4_4to=0,nf5_4to=0,nf6_4to=0,nf7_4to=0,nf8_4to=0,nf9_4to=0,nf10_4to=0,nf11_4to=0,nf12_4to=0,nf_4to=0,
	l1_4to=0,l2_4to=0,l3_4to=0,l4_4to=0,s1_4to=0,s2_4to=0,s3_4to=0,s4_4to=0,q1_4to=0,q2_4to=0,q3_4to=0,q4_4to=0,
	f1_4to=0,f2_4to=0,f3_4to=0,f4_4to=0,o1_4to=0,o2_4to=0,o3_4to=0,o4_4to=0,o5_4to=0,o6_4to=0,o7_4to=0,o8_4to=0,o9_4to=0,o10_4to=0,i1_4to=0,i2_4to=0,i3_4to=0,i4_4to=0,h1_4to=0,h2_4to=0,h3_4to=0,h4_4to=0,
	d1_4to=0,w1_4to=0,w2_4to=0,w3_4to=0,w4_4to=0,w5_4to=0,w6_4to=0,w7_4to=0,w8_4to=0,w9_4to=0,w10_4to=0,b1_4to=0,b2_4to=0,b3_4to=0,b4_4to=0,b5_4to=0,b6_4to=0,b7_4to=0,b8_4to=0,b9_4to=0,b10_4to=0,
	ad1_4to=0,ad2_4to=0,ad3_4to=0,ad4_4to=0,ad5_4to=0,ad6_4to=0,ad7_4to=0,ad8_4to=0,ad9_4to=0,ad10_4to=0,a1_4to=0,a2_4to=0,a3_4to=0,a4_4to=0;


	//declarar variables
	string cali1,cali2,cali3,cali4,cali5,cali6,cali7,cali8,cali9,cali10,cali11,cali12,pp,ppp,nuevo,nuevo1="si";
	int p1=0,p2=0,p3=0,p4=0,n1=0,n2=0,n3=0,
	n4=0,n5=0,n6=0,n7=0,n8=0,n9=0,n10=0,
	nf1=0,nf2=0,nf3=0,nf4=0,nf5=0,nf6=0,nf7=0,nf8=0,nf9=0,nf10=0,nf11=0,nf12=0,nf=0,
	l1=0,l2=0,l3=0,l4=0,s1=0,s2=0,s3=0,s4=0,q1=0,q2=0,q3=0,q4=0,
	f1=0,f2=0,f3=0,f4=0,o1=0,o2=0,o3=0,o4=0,o5=0,o6=0,o7=0,o8=0,o9=0,o10=0,i1=0,i2=0,i3=0,i4=0,h1=0,h2=0,h3=0,h4=0,
	d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,
	r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,a1=0,a2=0,a3=0,a4=0;
	int materia=0,cursos=0,materia_4to=0,materia_6to=0;
	po:
	cout<<"_____________________________________"<<endl;
	cout<<"|---------------CURSOS--------------|"<<endl;
	cout<<"_____________________________________"<<endl;
	cout<<"| (1)        5to Informatica        |"<<endl;
	cout<<"| (2)        4to Informatica        |"<<endl;
	cout<<"| (3)        5to Informatica        |"<<endl;
	cout<<"|-----------------------------------|"<<endl;
	cout<<"Digite del 1 al 3(enter)"<<endl;
    cin>>cursos;
    if(cursos>=1 && cursos<=3){
    	goto pi;
	}
	else{
		goto po;
	}
	pi:
     if(cursos==1){
     	goto to5;
	 }
	 else if(cursos==2){
	 	goto to4;
	 }
	 else if(cursos==3){
	 	goto to6;
	 }
	 
	//insertar y capturar datos
	//cout<<"Digite el nombre del centro educativo(enter)"<<endl;
	//cin>>escuela;
	//cout<<"Digite el nombre del maestro(enter)"<<endl;
	//cin>>maestro;
	//cout<<"Digite el apellido del maestro(enter)"<<endl;
	//cin>>apellido_m;
	//cout<<"Digite el nombre del estudiante(enter)"<<endl;
	//cin>>estudiante;
	//cout<<"Digite el apellido del estudiante(enter)"<<endl;
	//cin>>apellido;
	system("cls");
	to5:
	vv:
		cout<<"**MATERIAS DE 5TO**"<<endl;
	cout<<"1-Matematicas"<<endl;
	cout<<"2-Lengua Espanola"<<endl;
	cout<<"3-Sociales"<<endl;
	cout<<"4-Educacion Fisica"<<endl;
	cout<<"5-Ingles"<<endl;
	cout<<"6-Naturales"<<endl;
	cout<<"7-Educacion Artistica"<<endl;
	cout<<"8-Formacion Humana"<<endl;
	cout<<"9-Administracion de Bases de Datos"<<endl;
	cout<<"10-Analisis y Diseno de Reportes"<<endl;
	cout<<"11-Desarrollo de Aplicaciones y Sistemas Informaticos"<<endl;
	cout<<"12-Formacion y Orientacion Laboral"<<endl;
	cout<<"Digite la materia(del 1 hasta 12),(enter)"<<endl;
	cin>>materia;
		system("cls");
	switch(materia){
		case 1: {
			cout<<"Matematicas"<<endl;
			p1:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>p1;
	if(p1>=0 && p1<=100)
	goto p2;
	else
	goto p1;
	p2:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>p2;
	if(p2>=0 && p2<=100)
	goto p3;
	else
	goto p2;
	p3:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>p3;
	if(p3>=0 && p3<=100)
	goto p4;
	else
	goto p3;
	p4:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>p4;
	if(p4>=0 && p4<=100)
	goto cont;
	else
	goto p4;
	cont:
		
			//proceso de la materia basica
	nf3=(p1+p2+p3+p4)/4;
	
	

	if(nf3>=70 and nf3<=79){
		cali3="C";
	}
	else
	 if(nf3>=80 and nf3<=89){
        cali3="B";
	}
	else
	if(nf3>=90 and nf3<=100){
		cali3="A";
	}
	else
	if(nf3<=69){
		cali3="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;
system("cls");
string pp1 ="si";
if(pp==pp1)
goto vv;
else
goto rr;
	rr:
		
		system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
    cout<<""<<endl;
	cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp;
	rrp:             
			break;}
case 2: {
    system("cls");
    cout << "Lengua Espanola" << endl;
do {
        cout << "Digite el p1(enter)" << endl;
        cin >> l1;
    } while (l1 < 0 || l1 > 100);

    do {
        cout << "Digite el p2(enter)" << endl;
        cin >> l2;
    } while (l2 < 0 || l2 > 100);

    do {
        cout << "Digite el p3(enter)" << endl;
        cin >> l3;
    } while (l3 < 0 || l3 > 100);

    do {
        cout << "Digite el p4(enter)" << endl;
        cin >> l4;
    } while (l4 < 0 || l4 > 100);

    // proceso de la materia basica
    nf1 = (l1 + l2 + l3 + l4) / 4;

    // Calculando la calificaci�n final
    if (nf1 >= 70 && nf1 <= 79) {
        cali1 = "C";
    } else if (nf1 >= 80 && nf1 <= 89) {
        cali1 = "B";
    } else if (nf1 >= 90 && nf1 <= 100) {
        cali1 = "A";
    } else if (nf1 <= 69) {
        cali1 = "reprobado";
    }

    cout << "Desea seguir digitando las calificaciones?";
    cin >> pp;
system("cls");
    string pp1 = "si";
    if (pp == pp1)
        goto vv;
    else
        goto rr2;
rr2:
		
    // salida de datos de materia basica
    cout << "_____________________________________________________________________________________|" << endl;
    cout << "|  ESCUELA:" << " " << escuela << " |  MAESTRO:" << " " << maestro << " |  APELLIDO:" << " " << apellido_m << " |  NOMBRE:" << " " << estudiante << " |  APELLIDO:" << " " << apellido << endl;
    cout << "|_____________________________________________________________________________________|" << endl;
    cout << "|  ASIGNATURAS:" << "  |  p1  " << "  |  p2  " << "  |  p3  " << "  |  p4  |" << "   CF    |" << "   Promedio   |" << endl;
    cout << "| LENGUA ESPANOLA" << "|    " << l1 << "   " << "|   " << l2 << "   " << " |   " << l3 << "   " << " |   " << l4 << " " << " |    " << nf1 << "    " << "|" << "    " << cali1 << "   |" << endl;
    cout << "| INGLES TECNICO " << "|    " << i1 << "   " << "|   " << i2 << "   " << " |   " << i3 << "   " << " |   " << i4 << " " << " |    " << nf2 << "    " << "|" << "    " << cali2 << "   |" << endl;
    cout << "| MATEMATICA     " << "|    " << p1 << "  " << "|   " << p2 << " " << "  | " << p3 << " " << "    |  " << p4 << " " << " |  " << nf3 << "  " << "|" << "    " << cali3 << "   |" << endl << endl;
    cout << "| SOCIALES       " << "|    " << s1 << "   " << "|   " << s2 << "   " << " |   " << s3 << "   " << " |   " << s4 << " " << " |    " << nf4 << "    " << "|" << "    " << cali4 << "   |" << endl;
    cout << "| NATURALES      " << "|    " << q1 << "   " << "|   " << q2 << "   " << " |   " << q3 << "   " << " |   " << q4 << " " << " |    " << nf5 << "    " << "|" << "    " << cali5 << "   |" << endl;
    cout << "| FHIR           " << "|    " << h1 << "   " << "|   " << h2 << "   " << " |   " << h3 << "   " << " |   " << h4 << " " << " |    " << nf6 << "    " << "|" << "    " << cali6 << "   |" << endl;
    cout << "| EDUC. FISICA   " << "|    " << f1 << "   " << "|   " << f2 << "   " << " |   " << f3 << "   " << " |   " << f4 << " " << " |    " << nf7 << "    " << "|" << "    " << cali7 << "   |" << endl;
    cout << "| EDUC. ARTISTICA" << "|    " << a1 << "   " << "|   " << a2 << "   " << " |   " << a3 << "   " << " |   " << a4 << " " << " |    " << nf8 << "    " << "|" << "    " << cali8 << "   |" << endl;
    cout << "|______________________________________________________________________________________________________________________|" << endl << endl;
    cout << "|                                                        ASIGNATURAS TECNICAS                                          |" << endl << endl;
    cout << "|______________________________________________________________________________________________________________________|" << endl << endl;
    cout << "|  ASIGNATURAS:" << "  |  n1  " << "  |  n2  " << "  |  n3  " << "  |  n4   " << "  |  n5  " << "  |  n6  " << "  |  n7  " << "  |  n8  " << "  |  n9  " << "  |  n10  " << "  |     CF  |" << endl << endl;
    cout << "|       ABD      " << "|    " << b1 << "   |    " << b2 << "   |    " << b3 << "   |   " << b4 << "     |" << "   " << b5 << "    |" << "    " << b6 << "   |   " << b7 << "    |    " << b8 << "   |   " << b9 << "    |   " << b10 << "     " << "|   " << nf10 << "    |" << "    " << cali10 << "   |" << endl;
    cout << "|       ADR      " << "|    " << r1 << "   |    " << r2 << "   |    " << r3 << "   |   " << r4 << "     |" << "   " << r5 << "    |" << "    " << r6 << "   |   " << r7 << "    |    " << r8 << "   |   " << r9 << "    |   " << r10 << "     " << "|   " << nf11 << "    |" << "    " << cali11 << "   |" << endl;
    cout << "|       FOL      " << "|    " << o1 << "   |    " << o2 << "   |    " << o3 << "   |   " << o4 << "     |" << "   " << o5 << "    |" << "    " << o6 << "   |   " << o7 << "    |    " << o8 << "   |   " << o9 << "    |   " << o10 << "     " << "|   " << nf12 << "    |" << "    " << cali12 << "   |" << endl;
    cout << "|----------------|--------|--------------------------------------------------------------------------------------------|" << endl << endl;
cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp2;
	rrp2:
system("cls");
				break;}
				case 3:{
					system("cls");
								cout<<"Sociales"<<endl;
			ppp1:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>s1;
	if(s1>=0 && s1<=100)
	goto ppp2;
	else
	goto ppp1;
	ppp2:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>s2;
	if(s2>=0 && s2<=100)
	goto ppp3;
	else
	goto ppp2;
	ppp3:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>s3;
	if(s3>=0 && s3<=100)
	goto ppp4;
	else
	goto ppp3;
	ppp4:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>s4;
	if(s4>=0 && s4<=100)
	goto cont3;
	else
	goto ppp4;
	cont3:
		
			//proceso de la materia basica
		
	nf4=(s1+s2+s3+s4)/4;
	if(nf4>=70 and nf4<=79){
		cali4="C";
	}
	else
	 if(nf4>=80 and nf4<=89){
        cali4="B";
	}
	else
	if(nf4>=90 and nf4<=100){
		cali4="A";
	}
	else
	if(nf4<=69){
		cali4="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;
system("cls");
string pp1 ="si";
if(pp==pp1)
goto vv;
else
goto rr3;
rr3:
	system("cls");
		//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp3;
	rrp3:
					break;
				}
				case 4:{
					system("cls");
								cout<<"Educacion Fisica"<<endl;
			pppp1:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>f1;
	if(f1>=0 && f1<=100)
	goto pppp2;
	else
	goto pppp1;
	pppp2:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>f2;
	if(f2>=0 && f2<=100)
	goto pppp3;
	else
	goto pppp2;
	pppp3:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>f3;
	if(f3>=0 && f3<=100)
	goto pppp4;
	else
	goto pppp3;
	pppp4:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>f4;
	if(f4>=0 && f4<=100)
	goto cont4;
	else
	goto pppp4;
	cont4:
		
			//proceso de la materia basica
	nf7=(f1+f2+f3+f4)/4;
	if(nf7>=70 and nf7<=79){
		cali7="C";
	}
	else
	 if(nf7>=80 and nf7<=89){
        cali7="B";
	}
	else
	if(nf7>=90 and nf7<=100){
		cali7="A";
	}
	else
	if(nf7<=69){
		cali7="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;

string pp1 ="si";
if(pp==pp1)
goto vv;
else
goto rr4;
rr4:
	
	//salida de datos de materia basica
	system("cls");
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp4;
	rrp4:
				break;
			}
				case 5:{
					system("cls");
					cout<<"Ingles"<<endl;
			ppppp1:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>i1;
	if(i1>=0 && i1<=100)
	goto ppppp2;
	else
	goto ppppp1;
	ppppp2:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>i2;
	if(i2>=0 && i2<=100)
	goto ppppp3;
	else
	goto ppppp2;
	ppppp3:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>i3;
	if(i3>=0 && i3<=100)
	goto ppppp4;
	else
	goto ppppp3;
	ppppp4:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>i4;
	if(i4>=0 && i4<=100)
	goto cont5;
	else
	goto ppppp4;
	cont5:
		
			//proceso de la materia basica
	nf5=(i1+i2+i3+i4)/4;
	if(nf2>=70 and nf2<=79){
		cali2="C";

	}
	else{
	
	 if(nf2>=80 and nf2<=89){
        cali2="B";
	}
	else
	if(nf2>=90 and nf2<=100){
		cali2="A";
	}
	else
	if(nf2<=69){
		cali2="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;

string pp1 ="si";
if(pp==pp1)
goto vv;
else 
goto rr5;
rr5:
	//salida de datos de materia basica
system("cls");
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
		cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp5;
	rrp5:
		
					break;}
				
					case 6:{
					system("cls");
					cout<<"Naturales"<<endl;
			pppppp1:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>q1;
	if(q1>=0 && q1<=100)
	goto pppppp2;
	else
	goto pppppp1;
	pppppp2:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>q2;
	if(q2>=0 && q2<=100)
	goto pppppp3;
	else
	goto pppppp2;
	pppppp3:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>q3;
	if(q3>=0 && q3<=100)
	goto pppppp4;
	else
	goto pppppp3;
	pppppp4:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>q4;
	if(q4>=0 && q4<=100)
	goto cont6;
	else
	goto pppppp4;
	cont6:
			//proceso de la materia basica
	nf5=(q1+q2+q3+q4)/4;
	if(nf5>=70 and nf5<=79){
		cali5="C";
	}
	else
	 if(nf5>=80 and nf5<=89){
        cali5="B";
	}
	else
	if(nf5>=90 and nf5<=100){
		cali5="A";
	}
	else
	if(nf5<=69){
		cali5="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;

string pp1 ="si";
if(pp==pp1)
goto vv;
else 
goto rr6;
rr6:
	
	system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp6;
	rrp6:

				break;}
				case 7:{
					system("cls");
									cout<<"Educacion Artistica"<<endl;
			ppppppp1:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>a1;
	if(a1>=0 && a1<=100)
	goto ppppppp2;
	else
	goto ppppppp1;
	ppppppp2:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>a2;
	if(a2>=0 && a2<=100)
	goto ppppppp3;
	else
	goto ppppppp2;
	ppppppp3:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>a3;
	if(a3>=0 && a3<=100)
	goto pppppp4;
	else
	goto pppppp3;
	ppppppp4:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>a4;
	if(a4>=0 && a4<=100)
	goto cont7;
	else
	goto ppppppp4;
	cont7:
			//proceso de la materia basica
	nf8=(a1+a2+a3+a4)/4;
	if(nf8>=70 and nf8<=79){
		cali8="C";
	}
	else
	 if(nf8>=80 and nf8<=89){
        cali8="B";
	}
	else
	if(nf8>=90 and nf8<=100){
		cali8="A";
	}
	else
	if(nf8<=69){
		cali8="reprobado";
	}
cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;

string pp1 ="si";
if(pp==pp1)
goto vv;
else 
goto rr7;
rr7:
system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
					cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp7;
	rrp7:
					break;
				}
				case 8:{
					system("cls");
									cout<<"Formacion Integral Humana y Religiosa"<<endl;
			pppppppppp1:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>h1;
	if(h1>=0 && h1<=100)
	goto pppppppppp2;
	else
	goto pppppppppp1;
	pppppppppp2:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>h2;
	if(h2>=0 && h2<=100)
	goto pppppppppp3;
	else
	goto pppppppppp2;
	pppppppppp3:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>h3;
	if(h3>=0 && h3<=100)
	goto pppppppppp4;
	else
	goto pppppppppp3;
	pppppppppp4:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>h4;
	if(h4>=0 && h4<=100)
	goto cont8;
	else
	goto pppppppppp4;
	cont8:
			//proceso de la materia basica
	nf8=(h1+h2+h3+h4)/4;
	if(nf6>=70 and nf6<=79){
		cali6="C";
	}
	else
	 if(nf6>=80 and nf6<=89){
        cali6="B";
	}
	else
	if(nf6>=90 and nf6<=100){
		cali6="A";
	}
	else
	if(nf6<=69){
		cali6="reprobado";
	}
	//salida de datos de materia basica
cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;

string pp1 ="si";
if(pp==pp1)
goto vv;
else 
goto rr8;
rr8:

system("cls");
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
					cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp8;
	rrp8:
					break;}
					case 9:{ 
					system("cls");
					reversa:
									cout<<"Administracion de Base de datos"<<endl;
						ppppppppppp1:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>b1;
	if(b1>=0 && b1<=100)
	goto pppppppppppp2;
	else
	goto ppppppppppp1;
	pppppppppppp2:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>b2;
	if(b2>=0 && b2<=100)
	goto ppppppppppp3;
	else
	goto pppppppppppp2;
	ppppppppppp3:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>b3;
	if(b3>=0 && b3<=100)
	goto ppppppppppp4;
	else
	goto ppppppppppp3;
	ppppppppppp4:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>b4;
	if(b4>=0 && b4<=100)
	goto cont9;
	else
	goto ppppppppppp4;
	cont9:
		ppppppppppp5:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>b5;
	if(b5>=0 && b5<=100)
	goto cont10;
	else
	goto ppppppppppp5;
	cont10:
		pppppppppppp6:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>b6;
	if(b6>=0 && b6<=100)
	goto cont11b;
	else
	goto pppppppppppp6;
	cont11b:
		ppppppppppp7:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>b7;
	if(b7>=0 && b7<=100)
	goto cont12;
	else
	goto ppppppppppp7;
	cont12:
			ppppppppppp12:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>b8;
	if(b8>=0 && b8<=100)
	goto cont13;
	else
	goto ppppppppppp12;
	cont13:
		ppppppppppp13:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>b9;
	if(b9>=0 && b9<=100)
	goto cont14;
	else
	goto ppppppppppp13;
	cont14:
			ppppppppppp14:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>b10;
	if(b10>=0 && b10<=100)
	goto cont15;
	else
	goto ppppppppppp14;
	cont15:
			//proceso de la materia basica
	nf10=(b1+b2+b3+b4+b5+b6+b7+b8+b9+b10);
	if(nf10>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo;
		if(nuevo==nuevo1){
			goto reversa;
		}
	}
	else{ goto cont16;
	}
	cont16:
	if(nf10>=70 and nf10<=79){
		cali10="C";
	}
	else
	 if(nf10>=80 and nf10<=89){
        cali10="B";
	}
	else
	if(nf10>=90 and nf10<=100){
		cali10="A";
	}
	else
	if(nf10<=69){
		cali10="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;

string pp1 ="si";
if(pp==pp1)
goto vv;
else 
goto rr9;
rr9:
	system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
				cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp9;
	rrp9:
					break;}
									case 10:{ 
					system("cls");
					reversa2:
									cout<<"Analisis y Diseno de Reportes"<<endl;
						pppppppppppp1:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>r1;
	if(r1>=0 && r1<=100)
	goto ppppppppppppp2;
	else
	goto pppppppppppp1;
	ppppppppppppp2:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>r2;
	if(r2>=0 && r2<=100)
	goto pppppppppppp3;
	else
	goto ppppppppppppp2;
	pppppppppppp3:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>r3;
	if(r3>=0 && r3<=100)
	goto pppppppppppp4;
	else
	goto pppppppppppp3;
	pppppppppppp4:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>r4;
	if(r4>=0 && r4<=100)
	goto cont9r;
	else
	goto pppppppppppp4;
	cont9r:
		pppppppppppp5:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>r5;
	if(r5>=0 && r5<=100)
	goto cont10r;
	else
	goto pppppppppppp5;
	cont10r:
		ppppppppppppp6:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>r6;
	if(r6>=0 && r6<=100)
	goto cont11r;
	else
	goto ppppppppppppp6;
	cont11r:
		pppppppppppp7:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>r7;
	if(r7>=0 && r7<=100)
	goto cont12r;
	else
	goto pppppppppppp7;
	cont12r:
			pppppppppppp12:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>r8;
	if(r8>=0 && r8<=100)
	goto cont13r;
	else
	goto pppppppppppp12;
	cont13r:
		pppppppppppp13:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>r9;
	if(r9>=0 && r9<=100)
	goto cont14r;
	else
	goto pppppppppppp13;
	cont14r:
			pppppppppppp14:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>r10;
	if(r10>=0 && r10<=100)
	goto cont15r;
	else
	goto pppppppppppp14;
	cont15r:
			//proceso de la materia basica
	nf11=(r1+r2+r3+r4+r5+r6+r7+r8+r9+r10);
	if(nf11>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo;
		if(nuevo==nuevo1){
			goto reversa2;
		}
	}
	else{ goto cont16r;
	}
	cont16r:
	if(nf11>=70 and nf11<=79){
		cali11="C";
	}
	else
	 if(nf11>=80 and nf11<=89){
        cali11="B";
	}
	else
	if(nf11>=90 and nf11<=100){
		cali11="A";
	}
	else
	if(nf11<=69){
		cali11="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;

string pp1 ="si";
if(pp==pp1)
goto vv;
else 
goto rr10;
rr10:
	system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;          
			    cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp10;
	rrp10:
				break;}
			    case 11:{ 
					system("cls");
					reversa3:
									cout<<"Desarrollo de Aplicaciones y Sistemas Informaticos"<<endl;
						ppppppppppppp1:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>d1;
	if(d1>=0 && d1<=100)
	goto pppppppppppppp2;
	else
	goto ppppppppppppp1;
	pppppppppppppp2:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>d2;
	if(d2>=0 && d2<=100)
	goto ppppppppppppp3;
	else
	goto pppppppppppppp2;
	ppppppppppppp3:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>d3;
	if(d3>=0 && d3<=100)
	goto ppppppppppppp4;
	else
	goto ppppppppppppp3;
	ppppppppppppp4:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>d4;
	if(d4>=0 && d4<=100)
	goto cont9d;
	else
	goto ppppppppppppp4;
	cont9d:
		ppppppppppppp5:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>d5;
	if(d5>=0 && d5<=100)
	goto cont10d;
	else
	goto ppppppppppppp5;
	cont10d:
		pppppppppppppp6:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>d6;
	if(d6>=0 && d6<=100)
	goto cont11d;
	else
	goto pppppppppppppp6;
	cont11d:
		ppppppppppppp7:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>d7;
	if(d7>=0 && d7<=100)
	goto cont12d;
	else
	goto ppppppppppppp7;
	cont12d:
			ppppppppppppp12:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>d8;
	if(d8>=0 && d8<=100)
	goto cont13d;
	else
	goto ppppppppppppp12;
	cont13d:
		ppppppppppppp13:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>d9;
	if(d9>=0 && d9<=100)
	goto cont14d;
	else
	goto ppppppppppppp13;
	cont14d:
			ppppppppppppp14:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>d10;
	if(d10>=0 && d10<=100)
	goto cont15d;
	else
	goto ppppppppppppp14;
	cont15d:
			//proceso de la materia basica
	nf9=(d1+d2+d3+d4+d5+d6+d7+d8+d9+d10);
	if(nf9>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo;
		if(nuevo==nuevo1){
			goto reversa3;
		}
	}
	else{ goto cont16d;
	}
	cont16d:
	if(nf9>=70 and nf9<=79){
		cali9="C";
	}
	else
	 if(nf9>=80 and nf9<=89){
        cali9="B";
	}
	else
	if(nf9>=90 and nf9<=100){
		cali9="A";
	}
	else
	if(nf9<=69){
		cali9="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;

string pp1 ="si";
if(pp==pp1)
goto vv;
else 
goto rr11;
rr11:
	system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;          
			    cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp11;
	rrp11:
				break;}
			    case 12:{ 
					system("cls");
					reversa4:
									cout<<"Formacion y Orientacion Laboral"<<endl;
						pppppppppppppp1:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>o1;
	if(o1>=0 && o1<=100)
	goto ppppppppppppppp2;
	else
	goto pppppppppppppp1;
	ppppppppppppppp2:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>o2;
	if(o2>=0 && d2<=100)
	goto pppppppppppppp3;
	else
	goto ppppppppppppppp2;
	pppppppppppppp3:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>o3;
	if(o3>=0 && o3<=100)
	goto pppppppppppppp4;
	else
	goto pppppppppppppp3;
	pppppppppppppp4:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>o4;
	if(o4>=0 && o4<=100)
	goto cont9o;
	else
	goto pppppppppppppp4;
	cont9o:
		pppppppppppppp5:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>o5;
	if(o5>=0 && o5<=100)
	goto cont10o;
	else
	goto pppppppppppppp5;
	cont10o:
		ppppppppppppppp6:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>o6;
	if(o6>=0 && o6<=100)
	goto cont11o;
	else
	goto ppppppppppppppp6;
	cont11o:
		pppppppppppppp7:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>o7;
	if(o7>=0 && d7<=100)
	goto cont12o;
	else
	goto pppppppppppppp7;
	cont12o:
			pppppppppppppp12:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>o8;
	if(o8>=0 && o8<=100)
	goto cont13o;
	else
	goto pppppppppppppp12;
	cont13o:
		pppppppppppppp13:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>o9;
	if(o9>=0 && o9<=100)
	goto cont14o;
	else
	goto pppppppppppppp13;
	cont14o:
			pppppppppppppp14:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>o10;
	if(o10>=0 && o10<=100)
	goto cont15o;
	else
	goto pppppppppppppp14;
	cont15o:
			//proceso de la materia basica
	nf12=(o1+o2+o3+o4+o5+o6+o7+o8+o9+o10);
	if(nf12>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo;
		if(nuevo==nuevo1){
			goto reversa4;
		}
	}
	else{ goto cont16o;
	}
	cont16o:
	if(nf12>=70 and nf12<=79){
		cali12="C";
	}
	else
	 if(nf12>=80 and nf12<=89){
        cali12="B";
	}
	else
	if(nf12>=90 and nf12<=100){
		cali12="A";
	}
	else
	if(nf12<=69){
		cali12="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp;

string pp1 ="si";
if(pp==pp1)
goto vv;
else 
goto rr12;
rr12:
	system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1<<"   "<<"|   "<<l2<<"   "<<" |   "<<l3<<"   "<<" |   "<<l4<<" "<<" |    "<<nf1<<"    "<<"|"<<"    "<<cali1<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1<<"   "<<"|   "<<i2<<"   "<<" |   "<<i3<<"   "<<" |   "<<i4<<" "<<" |    "<<nf2<<"    "<<"|"<<"    "<<cali2<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1<<"  "<<"|   "<<p2<<" "<<"  | "<<p3<<" "<<"    |  "<<p4<<" "<<" |  "<<nf3<<"  "<<"|"<<"    "<<cali3<<"   |"<<endl<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1<<"   "<<"|   "<<s2<<"   "<<" |   "<<s3<<"   "<<" |   "<<s4<<" "<<" |    "<<nf4<<"    "<<"|"<<"    "<<cali4<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1<<"   "<<"|   "<<q2<<"   "<<" |   "<<q3<<"   "<<" |   "<<q4<<" "<<" |    "<<nf5<<"    "<<"|"<<"    "<<cali5<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1<<"   "<<"|   "<<h2<<"   "<<" |   "<<h3<<"   "<<" |   "<<h4<<" "<<" |    "<<nf6<<"    "<<"|"<<"    "<<cali6<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1<<"   "<<"|   "<<f2<<"   "<<" |   "<<f3<<"   "<<" |   "<<f4<<" "<<" |    "<<nf7<<"    "<<"|"<<"    "<<cali7<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1<<"   "<<"|   "<<a2<<"   "<<" |   "<<a3<<"   "<<" |   "<<a4<<" "<<" |    "<<nf8<<"    "<<"|"<<"    "<<cali8<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|       ADSI     "<<"|    "<<d1<<"   |    "<<d2<<"   |    "<<d3<<"   |   "<<d4<<"     |"<<"   "<<d5<<"    |"<<"    "<<d6<<"   |   "<<d7<<"    |    "<<d8<<"   |   "<<d9<<"    |   "<<d10<<"     "<<"|   "<<nf9<<"     |"<<"    "<<cali9<<"    |"<<endl;
	cout<<"|       ABD      "<<"|    "<<b1<<"   |    "<<b2<<"   |    "<<b3<<"   |   "<<b4<<"     |"<<"   "<<b5<<"    |"<<"    "<<b6<<"   |   "<<b7<<"    |    "<<b8<<"   |   "<<b9<<"    |   "<<b10<<"     "<<"|   "<<nf10<<"    |"<<"    "<<cali10<<"   |"<<endl;
	cout<<"|       ADR      "<<"|    "<<r1<<"   |    "<<r2<<"   |    "<<r3<<"   |   "<<r4<<"     |"<<"   "<<r5<<"    |"<<"    "<<r6<<"   |   "<<r7<<"    |    "<<r8<<"   |   "<<r9<<"    |   "<<r10<<"     "<<"|   "<<nf11<<"    |"<<"    "<<cali11<<"   |"<<endl;
	cout<<"|       FOL      "<<"|    "<<o1<<"   |    "<<o2<<"   |    "<<o3<<"   |   "<<o4<<"     |"<<"   "<<o5<<"    |"<<"    "<<o6<<"   |   "<<o7<<"    |    "<<o8<<"   |   "<<o9<<"    |   "<<o10<<"     "<<"|   "<<nf12<<"    |"<<"    "<<cali12<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;          
			    cout<<""<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp12;
	rrp12:
				break;}
				default:
					cout<<"Opcion no valida"<<endl;
					break;
				}
				
					system("cls");
					to4:
	vv_4to:
		cout<<" **MATERIAS DE 4TO**"<<endl;
	cout<<"1-Matematicas"<<endl;
	cout<<"2-Lengua Espanola"<<endl;
	cout<<"3-Sociales"<<endl;
	cout<<"4-Educacion Fisica"<<endl;
	cout<<"5-Ingles"<<endl;
	cout<<"6-Naturales"<<endl;
	cout<<"7-Educacion Artistica"<<endl;
	cout<<"8-Formacion Humana"<<endl;
	cout<<"9-Diseno y Desarrollo de Bases de Datos"<<endl;
	cout<<"10-Analisis y Diseno de Sistemas informaticos"<<endl;
	cout<<"11-Diseno de Portales Web y Recursos Multimedia"<<endl;
	cout<<"12-Ofimatica"<<endl;
	cout<<"Digite la materia(del 1 hasta 12),(enter)"<<endl;
	cin>>materia_4to;
		system("cls");
	switch(materia_4to){
		case 1: {
			cout<<"Matematicas"<<endl;
			p1_4to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>p1_4to;
	if(p1_4to>=0 && p1_4to<=100)
	goto p2_4to;
	else
	goto p1_4to;
	p2_4to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>p2_4to;
	if(p2_4to>=0 && p2_4to<=100)
	goto p3_4to;
	else
	goto p2_4to;
	p3_4to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>p3_4to;
	if(p3_4to>=0 && p3_4to<=100)
	goto p4_4to;
	else
	goto p3_4to;
	p4_4to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>p4_4to;
	if(p4_4to>=0 && p4_4to<=100)
	goto cont_4to;
	else
	goto p4_4to;
	cont_4to:
		
			//proceso de la materia basica
	nf3_4to=(p1_4to+p2_4to+p3_4to+p4_4to)/4;
	
	

	if(nf3_4to>=70 and nf3_4to<=79){
		cali3_4to="C";
	}
	else
	 if(nf3_4to>=80 and nf3_4to<=89){
        cali3_4to="B";
	}
	else
	if(nf3_4to>=90 and nf3_4to<=100){
		cali3_4to="A";
	}
	else
	if(nf3_4to<=69){
		cali3_4to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;
system("cls");
string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else
goto rr_4to;
	rr_4to:
		system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
                 cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp1_4to;
	rrp1_4to:
				
			break; }
case 2: {
    system("cls");
    cout << "Lengua Espanola" << endl;
do {
        cout << "Digite el p1(enter)" << endl;
        cin >> l1_4to;
    } while (l1_4to < 0 || l1_4to > 100);

    do {
        cout << "Digite el p2(enter)" << endl;
        cin >> l2_4to;
    } while (l2_4to < 0 || l2_4to > 100);

    do {
        cout << "Digite el p3(enter)" << endl;
        cin >> l3_4to;
    } while (l3_4to < 0 || l3_4to > 100);

    do {
        cout << "Digite el p4(enter)" << endl;
        cin >> l4_4to;
    } while (l4_4to < 0 || l4_4to > 100);

    // proceso de la materia basica
    nf1_4to = (l1_4to + l2_4to + l3_4to + l4_4to) / 4;

    // Calculando la calificaci�n final
    if (nf1_4to >= 70 && nf1_4to <= 79) {
        cali1_4to = "C";
    } else if (nf1_4to >= 80 && nf1_4to <= 89) {
        cali1_4to = "B";
    } else if (nf1_4to >= 90 && nf1_4to <= 100) {
        cali1_4to = "A";
    } else if (nf1_4to <= 69) {
        cali1_4to = "reprobado";
    }

    cout << "Desea seguir digitando las calificaciones?";
    cin >> pp_4to;
system("cls");
    string pp1_4to = "si";
    if (pp_4to == pp1_4to)
        goto vv_4to;
    else
        goto rr2_4to;
rr2_4to:
system("cls");
    // salida de datos de materia basica
    	cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp2_4to;
	rrp2_4to:

				break;}
				case 3:{
					system("cls");
								cout<<"Sociales"<<endl;
			ppp1_4to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>s1_4to;
	if(s1_4to>=0 && s1_4to<=100)
	goto ppp2_4to;
	else
	goto ppp1_4to;
	ppp2_4to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>s2_4to;
	if(s2_4to>=0 && s2_4to<=100)
	goto ppp3_4to;
	else
	goto ppp2_4to;
	ppp3_4to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>s3_4to;
	if(s3_4to>=0 && s3_4to<=100)
	goto ppp4_4to;
	else
	goto ppp3_4to;
	ppp4_4to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>s4_4to;
	if(s4_4to>=0 && s4_4to<=100)
	goto cont3_4to;
	else
	goto ppp4_4to;
	cont3_4to:
		
			//proceso de la materia basica
		
	nf4_4to=(s1_4to+s2_4to+s3_4to+s4_4to)/4;
	if(nf4_4to>=70 and nf4_4to<=79){
		cali4_4to="C";
	}
	else
	 if(nf4_4to>=80 and nf4_4to<=89){
        cali4_4to="B";
	}
	else
	if(nf4_4to>=90 and nf4_4to<=100){
		cali4_4to="A";
	}
	else
	if(nf4_4to<=69){
		cali4_4to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;
system("cls");
string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else
goto rr3_4to;
rr3_4to:
	system("cls");
		//salida de datos de materia basica
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp3_4to;
	rrp3_4to:

					break;
				}
				case 4:{
					system("cls");
								cout<<"Educacion Fisica"<<endl;
			pppp1_4to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>f1_4to;
	if(f1_4to>=0 && f1_4to<=100)
	goto pppp2_4to;
	else
	goto pppp1_4to;
	pppp2_4to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>f2_4to;
	if(f2_4to>=0 && f2_4to<=100)
	goto pppp3_4to;
	else
	goto pppp2_4to;
	pppp3_4to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>f3_4to;
	if(f3_4to>=0 && f3_4to<=100)
	goto pppp4_4to;
	else
	goto pppp3_4to;
	pppp4_4to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>f4_4to;
	if(f4_4to>=0 && f4_4to<=100)
	goto cont4_4to;
	else
	goto pppp4_4to;
	cont4_4to:
		
			//proceso de la materia basica
	nf7_4to=(f1_4to+f2_4to+f3_4to+f4_4to)/4;
	if(nf7_4to>=70 and nf7_4to<=79){
		cali7_4to="C";
	}
	else
	 if(nf7_4to>=80 and nf7_4to<=89){
        cali7_4to="B";
	}
	else
	if(nf7_4to>=90 and nf7_4to<=100){
		cali7_4to="A";
	}
	else
	if(nf7_4to<=69){
		cali7_4to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;

string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else
goto rr4_4to;
rr4_4to:
	//salida de datos de materia basica
	system("cls");
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;

cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp4_4to;
	rrp4_4to:
				break;
			}
				case 5:{
					system("cls");
					cout<<"Ingles"<<endl;
			ppppp1_4to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>i1_4to;
	if(i1_4to>=0 && i1_4to<=100)
	goto ppppp2_4to;
	else
	goto ppppp1_4to;
	ppppp2_4to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>i2_4to;
	if(i2_4to>=0 && i2_4to<=100)
	goto ppppp3_4to;
	else
	goto ppppp2_4to;
	ppppp3_4to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>i3_4to;
	if(i3_4to>=0 && i3_4to<=100)
	goto ppppp4_4to;
	else
	goto ppppp3_4to;
	ppppp4_4to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>i4_4to;
	if(i4_4to>=0 && i4_4to<=100)
	goto cont5_4to;
	else
	goto ppppp4_4to;
	cont5_4to:
		
			//proceso de la materia basica
	nf5_4to=(i1_4to+i2_4to+i3_4to+i4_4to)/4;
	if(nf2_4to>=70 and nf2_4to<=79){
		cali2_4to="C";

	}
	else{
	
	 if(nf2_4to>=80 and nf2_4to<=89){
        cali2_4to="B";
	}
	else
	if(nf2_4to>=90 and nf2_4to<=100){
		cali2_4to="A";
	}
	else
	if(nf2_4to<=69){
		cali2_4to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;

string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else 
goto rr5_4to;
rr5_4to:
	//salida de datos de materia basica
system("cls");
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
		cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp5_4to;
	rrp5_4to:
		
					break;}
				
					case 6:{
					system("cls");
					cout<<"Naturales"<<endl;
			pppppp1_4to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>q1_4to;
	if(q1_4to>=0 && q1_4to<=100)
	goto pppppp2_4to;
	else
	goto pppppp1_4to;
	pppppp2_4to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>q2_4to;
	if(q2_4to>=0 && q2_4to<=100)
	goto pppppp3_4to;
	else
	goto pppppp2_4to;
	pppppp3_4to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>q3_4to;
	if(q3_4to>=0 && q3_4to<=100)
	goto pppppp4_4to;
	else
	goto pppppp3_4to;
	pppppp4_4to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>q4_4to;
	if(q4_4to>=0 && q4_4to<=100)
	goto cont6_4to;
	else
	goto pppppp4_4to;
	cont6_4to:
			//proceso de la materia basica
	nf5_4to=(q1_4to+q2_4to+q3_4to+q4_4to)/4;
	if(nf5_4to>=70 and nf5_4to<=79){
		cali5_4to="C";
	}
	else
	 if(nf5_4to>=80 and nf5_4to<=89){
        cali5_4to="B";
	}
	else
	if(nf5_4to>=90 and nf5_4to<=100){
		cali5_4to="A";
	}
	else
	if(nf5_4to<=69){
		cali5_4to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;

string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else 
goto rr6_4to;
rr6_4to:
	
	system("cls");
	//salida de datos de materia basica
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp6_4to;
	rrp6_4to:

				break;}
				case 7:{
					system("cls");
									cout<<"Educacion Artistica"<<endl;
			ppppppp1_4to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>a1_4to;
	if(a1_4to>=0 && a1_4to<=100)
	goto ppppppp2_4to;
	else
	goto ppppppp1_4to;
	ppppppp2_4to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>a2_4to;
	if(a2_4to>=0 && a2_4to<=100)
	goto ppppppp3_4to;
	else
	goto ppppppp2_4to;
	ppppppp3_4to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>a3_4to;
	if(a3_4to>=0 && a3_4to<=100)
	goto pppppp4_4to;
	else
	goto pppppp3_4to;
	ppppppp4_4to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>a4_4to;
	if(a4_4to>=0 && a4_4to<=100)
	goto cont7_4to;
	else
	goto ppppppp4_4to;
	cont7_4to:
			//proceso de la materia basica
	nf8_4to=(a1_4to+a2_4to+a3_4to+a4_4to)/4;
	if(nf8_4to>=70 and nf8_4to<=79){
		cali8_4to="C";
	}
	else
	 if(nf8_4to>=80 and nf8_4to<=89){
        cali8_4to="B";
	}
	else
	if(nf8_4to>=90 and nf8_4to<=100){
		cali8_4to="A";
	}
	else
	if(nf8_4to<=69){
		cali8_4to="reprobado";
	}
cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;

string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else 
goto rr7_4to;
rr7_4to:
system("cls");
	//salida de datos de materia basica
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
				cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp7_4to;
	rrp7_4to:
					break;
				}
				case 8:{
					system("cls");
									cout<<"Formacion Integral Humana y Religiosa"<<endl;
			pppppppppp1_4to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>h1_4to;
	if(h1_4to>=0 && h1_4to<=100)
	goto pppppppppp2_4to;
	else
	goto pppppppppp1_4to;
	pppppppppp2_4to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>h2_4to;
	if(h2_4to>=0 && h2_4to<=100)
	goto pppppppppp3_4to;
	else
	goto pppppppppp2_4to;
	pppppppppp3_4to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>h3_4to;
	if(h3_4to>=0 && h3_4to<=100)
	goto pppppppppp4_4to;
	else
	goto pppppppppp3_4to;
	pppppppppp4_4to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>h4_4to;
	if(h4_4to>=0 && h4_4to<=100)
	goto cont8_4to;
	else
	goto pppppppppp4_4to;
	cont8_4to:
			//proceso de la materia basica
	nf6_4to=(h1_4to+h2_4to+h3_4to+h4_4to)/4;
	if(nf6_4to>=70 and nf6_4to<=79){
		cali6_4to="C";
	}
	else
	 if(nf6_4to>=80 and nf6_4to<=89){
        cali6_4to="B";
	}
	else
	if(nf6_4to>=90 and nf6_4to<=100){
		cali6_4to="A";
	}
	else
	if(nf6_4to<=69){
		cali6_4to="reprobado";
	}
	//salida de datos de materia basica
cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;

string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else 
goto rr8_4to;
rr8_4to:

system("cls");
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
				cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp8_4to;
	rrp8_4to:
					break;}
					case 9:{ 
					system("cls");
					reversa_4to:
									cout<<"Diseno y Desarrollo de Bases de Datos"<<endl;
						ppppppppppp1_4to:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>b1_4to;
	if(b1_4to>=0 && b1_4to<=100)
	goto pppppppppppp2_4to;
	else
	goto ppppppppppp1_4to;
	pppppppppppp2_4to:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>b2_4to;
	if(b2_4to>=0 && b2_4to<=100)
	goto ppppppppppp3_4to;
	else
	goto pppppppppppp2_4to;
	ppppppppppp3_4to:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>b3_4to;
	if(b3_4to>=0 && b3_4to<=100)
	goto ppppppppppp4_4to;
	else
	goto ppppppppppp3_4to;
	ppppppppppp4_4to:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>b4_4to;
	if(b4_4to>=0 && b4_4to<=100)
	goto cont9_4to;
	else
	goto ppppppppppp4_4to;
	cont9_4to:
		ppppppppppp5_4to:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>b5_4to;
	if(b5_4to>=0 && b5_4to<=100)
	goto cont10_4to;
	else
	goto ppppppppppp5_4to;
	cont10_4to:
		pppppppppppp6_4to:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>b6_4to;
	if(b6_4to>=0 && b6_4to<=100)
	goto cont11b_4to;
	else
	goto pppppppppppp6_4to;
	cont11b_4to:
		ppppppppppp7_4to:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>b7_4to;
	if(b7_4to>=0 && b7_4to<=100)
	goto cont12_4to;
	else
	goto ppppppppppp7_4to;
	cont12_4to:
			ppppppppppp12_4to:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>b8_4to;
	if(b8_4to>=0 && b8_4to<=100)
	goto cont13_4to;
	else
	goto ppppppppppp12_4to;
	cont13_4to:
		ppppppppppp13_4to:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>b9_4to;
	if(b9_4to>=0 && b9_4to<=100)
	goto cont14_4to;
	else
	goto ppppppppppp13_4to;
	cont14_4to:
			ppppppppppp14_4to:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>b10_4to;
	if(b10_4to>=0 && b10_4to<=100)
	goto cont15_4to;
	else
	goto ppppppppppp14_4to;
	cont15_4to:
			//proceso de la materia basica
	nf10_4to=(b1_4to+b2_4to+b3_4to+b4_4to+b5_4to+b6_4to+b7_4to+b8_4to+b9_4to+b10_4to);
	if(nf10_4to>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo_4to;
		if(nuevo_4to==nuevo1_4to){
			goto reversa_4to;
		}
	}
	else{ goto cont16_4to;
	}
	cont16_4to:
	if(nf10_4to>=70 and nf10_4to<=79){
		cali10_4to="C";
	}
	else
	 if(nf10_4to>=80 and nf10_4to<=89){
        cali10_4to="B";
	}
	else
	if(nf10_4to>=90 and nf10_4to<=100){
		cali10_4to="A";
	}
	else
	if(nf10_4to<=69){
		cali10_4to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;

string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else 
goto rr9_4to;
rr9_4to:
	system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
					cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp1_9to;
	rrp1_9to:
					break;}
									case 10:{ 
					system("cls");
					reversa2_4to:
									cout<<"Analisis y Diseno de Sistemas informaticos"<<endl;
						pppppppppppp1_4to:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>ad1_4to;
	if(ad1_4to>=0 && ad1_4to<=100)
	goto ppppppppppppp2_4to;
	else
	goto pppppppppppp1_4to;
	ppppppppppppp2_4to:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>ad2_4to;
	if(ad2_4to>=0 && ad2_4to<=100)
	goto pppppppppppp3_4to;
	else
	goto ppppppppppppp2_4to;
	pppppppppppp3_4to:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>ad3_4to;
	if(ad3_4to>=0 && ad3_4to<=100)
	goto pppppppppppp4_4to;
	else
	goto pppppppppppp3_4to;
	pppppppppppp4_4to:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>ad4_4to;
	if(ad4_4to>=0 && ad4_4to<=100)
	goto cont9ad_4to;
	else
	goto pppppppppppp4_4to;
	cont9ad_4to:
		pppppppppppp5_4to:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>ad5_4to;
	if(ad5_4to>=0 && ad5_4to<=100)
	goto cont10ad_4to;
	else
	goto pppppppppppp5_4to;
	cont10ad_4to:
		ppppppppppppp6_4to:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>ad6_4to;
	if(ad6_4to>=0 && ad6_4to<=100)
	goto cont11ad_4to;
	else
	goto ppppppppppppp6_4to;
	cont11ad_4to:
		pppppppppppp7_4to:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>ad7_4to;
	if(ad7_4to>=0 && ad7_4to<=100)
	goto cont12ad_4to;
	else
	goto pppppppppppp7_4to;
	cont12ad_4to:
			pppppppppppp12_4to:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>ad8_4to;
	if(ad8_4to>=0 && ad8_4to<=100)
	goto cont13ad_4to;
	else
	goto pppppppppppp12_4to;
	cont13ad_4to:
		pppppppppppp13_4to:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>ad9_4to;
	if(ad9_4to>=0 && ad9_4to<=100)
	goto cont14ad_4to;
	else
	goto pppppppppppp13_4to;
	cont14ad_4to:
			pppppppppppp14_4to:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>ad10_4to;
	if(ad10_4to>=0 && ad10_4to<=100)
	goto cont15ad_4to;
	else
	goto pppppppppppp14_4to;
	cont15ad_4to:
			//proceso de la materia basica
	nf11_4to=(ad1_4to+ad2_4to+ad3_4to+ad4_4to+ad5_4to+ad6_4to+ad7_4to+ad8_4to+ad9_4to+ad10_4to);
	if(nf11_4to>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo_4to;
		if(nuevo_4to==nuevo1_4to){
			goto reversa2_4to;
		}
	}
	else{ goto cont16ad_4to;
	}
	cont16ad_4to:
	if(nf11_4to>=70 and nf11_4to<=79){
		cali11_4to="C";
	}
	else
	 if(nf11_4to>=80 and nf11_4to<=89){
        cali11_4to="B";
	}
	else
	if(nf11_4to>=90 and nf11_4to<=100){
		cali11_4to="A";
	}
	else
	if(nf11_4to<=69){
		cali11_4to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;

string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else 
goto rr10_4to;
rr10_4to:
	system("cls");
	//salida de datos de materia basica
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;          
			    
				cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp10_4to;
	rrp10_4to:break;}
			    case 11:{ 
					system("cls");
					reversa3_4to:
									cout<<"Diseno de Portales Web y Recursos Multimedia"<<endl;
						ppppppppppppp1_4to:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>w1_4to;
	if(w1_4to>=0 && w1_4to<=100)
	goto pppppppppppppp2_4to;
	else
	goto ppppppppppppp1_4to;
	pppppppppppppp2_4to:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>w2_4to;
	if(w2_4to>=0 && w2_4to<=100)
	goto ppppppppppppp3_4to;
	else
	goto pppppppppppppp2_4to;
	ppppppppppppp3_4to:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>w3_4to;
	if(w3_4to>=0 && w3_4to<=100)
	goto ppppppppppppp4_4to;
	else
	goto ppppppppppppp3_4to;
	ppppppppppppp4_4to:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>w4_4to;
	if(w4_4to>=0 && w4_4to<=100)
	goto cont9w_4to;
	else
	goto ppppppppppppp4_4to;
	cont9w_4to:
		ppppppppppppp5_4to:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>w5_4to;
	if(w5_4to>=0 && w5_4to<=100)
	goto cont10w_4to;
	else
	goto ppppppppppppp5_4to;
	cont10w_4to:
		pppppppppppppp6_4to:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>w6_4to;
	if(w6_4to>=0 && w6_4to<=100)
	goto cont11w_4to;
	else
	goto pppppppppppppp6_4to;
	cont11w_4to:
		ppppppppppppp7_4to:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>w7_4to;
	if(w7_4to>=0 && w7_4to<=100)
	goto cont12w_4to;
	else
	goto ppppppppppppp7_4to;
	cont12w_4to:
			ppppppppppppp12_4to:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>w8_4to;
	if(w8_4to>=0 && w8_4to<=100)
	goto cont13w_4to;
	else
	goto ppppppppppppp12_4to;
	cont13w_4to:
		ppppppppppppp13_4to:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>w9_4to;
	if(w9_4to>=0 && w9_4to<=100)
	goto cont14w_4to;
	else
	goto ppppppppppppp13_4to;
	cont14w_4to:
			ppppppppppppp14_4to:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>w10_4to;
	if(w10_4to>=0 && w10_4to<=100)
	goto cont15w_4to;
	else
	goto ppppppppppppp14_4to;
	cont15w_4to:
			//proceso de la materia basica
	nf9_4to=(w1_4to+w2_4to+w3_4to+w4_4to+w5_4to+w6_4to+w7_4to+w8_4to+w9_4to+w10_4to);
	if(nf9_4to>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo_4to;
		if(nuevo_4to==nuevo1_4to){
			goto reversa3_4to;
		}
	}
	else{ goto cont16w_4to;
	}
	cont16w_4to:
	if(nf9_4to>=70 and nf9_4to<=79){
		cali9_4to="C";
	}
	else
	 if(nf9_4to>=80 and nf9_4to<=89){
        cali9_4to="B";
	}
	else
	if(nf9_4to>=90 and nf9_4to<=100){
		cali9_4to="A";
	}
	else
	if(nf9_4to<=69){
		cali9_4to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;

string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else 
goto rr11_4to;
rr11_4to:
	system("cls");
	//salida de datos de materia basica
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl; 
	
		
char respuesta;
    cout << "¿Desea exportar la nota a un archivo de txt? (S/N): ";
    cin >> respuesta;

    // Si la respuesta es sí, entonces exportar la nota a un archivo de texto
    if (respuesta == 'S' || respuesta == 's' || respuesta == 'si' || respuesta == 'SI' ||respuesta =='Si') {
      ofstream archivo_salida("prueba escuela.txt");
        if (archivo_salida.is_open()) {
      			  archivo_salida <<"_____________________________________________________________________________________|"<<endl;
	  archivo_salida <<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	  archivo_salida <<"|_____________________________________________________________________________________|"<<endl;  
	  archivo_salida <<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	  archivo_salida <<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	  archivo_salida <<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	  archivo_salida <<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	  archivo_salida <<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	  archivo_salida <<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	  archivo_salida <<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	  archivo_salida <<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	  archivo_salida <<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	  archivo_salida <<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	  archivo_salida <<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	  archivo_salida <<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	  archivo_salida <<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	  archivo_salida <<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	  archivo_salida <<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	  archivo_salida <<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	  archivo_salida <<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	  archivo_salida <<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl; 
	
	
            archivo_salida.close();
            cout << "Los datos se han exportado correctamente a prueba escuela.txt" << endl;
    }
}

		

         
			    cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp11_4to;
	rrp11_4to:
				break;}
			    case 12:{ 
					system("cls");
					reversa4_4to:
									cout<<"Ofimatica"<<endl;
						pppppppppppppp1_4to:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>o1_4to;
	if(o1_4to>=0 && o1_4to<=100)
	goto ppppppppppppppp2_4to;
	else
	goto pppppppppppppp1_4to;
	ppppppppppppppp2_4to:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>o2_4to;
	if(o2_4to>=0 && o2_4to<=100)
	goto pppppppppppppp3_4to;
	else
	goto ppppppppppppppp2_4to;
	pppppppppppppp3_4to:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>o3_4to;
	if(o3_4to>=0 && o3_4to<=100)
	goto pppppppppppppp4_4to;
	else
	goto pppppppppppppp3_4to;
	pppppppppppppp4_4to:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>o4_4to;
	if(o4_4to>=0 && o4_4to<=100)
	goto cont9o_4to;
	else
	goto pppppppppppppp4_4to;
	cont9o_4to:
		pppppppppppppp5_4to:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>o5_4to;
	if(o5_4to>=0 && o5_4to<=100)
	goto cont10o_4to;
	else
	goto pppppppppppppp5_4to;
	cont10o_4to:
		ppppppppppppppp6_4to:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>o6_4to;
	if(o6_4to>=0 && o6_4to<=100)
	goto cont11o_4to;
	else
	goto ppppppppppppppp6_4to;
	cont11o_4to:
		pppppppppppppp7_4to:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>o7_4to;
	if(o7_4to>=0 && o7_4to<=100)
	goto cont12o_4to;
	else
	goto pppppppppppppp7_4to;
	cont12o_4to:
			pppppppppppppp12_4to:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>o8_4to;
	if(o8_4to>=0 && o8_4to<=100)
	goto cont13o_4to;
	else
	goto pppppppppppppp12_4to;
	cont13o_4to:
		pppppppppppppp13_4to:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>o9_4to;
	if(o9_4to>=0 && o9_4to<=100)
	goto cont14o_4to;
	else
	goto pppppppppppppp13_4to;
	cont14o_4to:
			pppppppppppppp14_4to:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>o10_4to;
	if(o10_4to>=0 && o10_4to<=100)
	goto cont15o_4to;
	else
	goto pppppppppppppp14_4to;
	cont15o_4to:
			//proceso de la materia basica
	nf12_4to=(o1_4to+o2_4to+o3_4to+o4_4to+o5_4to+o6_4to+o7_4to+o8_4to+o9_4to+o10_4to);
	if(nf12_4to>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo_4to;
		if(nuevo_4to==nuevo1_4to){
			goto reversa4_4to;
		}
	}
	else{ goto cont16o_4to;
	}
	cont16o_4to:
	if(nf12_4to>=70 and nf12_4to<=79){
		cali12_4to="C";
	}
	else
	 if(nf12_4to>=80 and nf12_4to<=89){
        cali12_4to="B";
	}
	else
	if(nf12_4to>=90 and nf12_4to<=100){
		cali12_4to="A";
	}
	else
	if(nf12_4to<=69){
		cali12_4to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_4to;

string pp1_4to ="si";
if(pp_4to==pp1_4to)
goto vv_4to;
else 
goto rr12_4to;
rr12_4to:
	system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_4to<<"   "<<"|   "<<l2_4to<<"   "<<" |   "<<l3_4to<<"   "<<" |   "<<l4_4to<<" "<<" |    "<<nf1_4to<<"    "<<"|"<<"    "<<cali1_4to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_4to<<"   "<<"|   "<<i2_4to<<"   "<<" |   "<<i3_4to<<"   "<<" |   "<<i4_4to<<" "<<" |    "<<nf2_4to<<"    "<<"|"<<"    "<<cali2_4to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_4to<<"   "<<"|   "<<p2_4to<<"  "<<"  | "<<p3_4to<<"  "<<"    |  "<<p4_4to<<"  "<<" |    "<<nf3_4to<<"    "<<"|"<<"    "<<cali3_4to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_4to<<"   "<<"|   "<<s2_4to<<"   "<<" |   "<<s3_4to<<"   "<<" |   "<<s4_4to<<" "<<" |    "<<nf4_4to<<"    "<<"|"<<"    "<<cali4_4to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_4to<<"   "<<"|   "<<q2_4to<<"   "<<" |   "<<q3_4to<<"   "<<" |   "<<q4_4to<<" "<<" |    "<<nf5_4to<<"    "<<"|"<<"    "<<cali5_4to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_4to<<"   "<<"|   "<<h2_4to<<"   "<<" |   "<<h3_4to<<"   "<<" |   "<<h4_4to<<" "<<" |    "<<nf6_4to<<"    "<<"|"<<"    "<<cali6_4to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_4to<<"   "<<"|   "<<f2_4to<<"   "<<" |   "<<f3_4to<<"   "<<" |   "<<f4_4to<<" "<<" |    "<<nf7_4to<<"    "<<"|"<<"    "<<cali7_4to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_4to<<"   "<<"|   "<<a2_4to<<"   "<<" |   "<<a3_4to<<"   "<<" |   "<<a4_4to<<" "<<" |    "<<nf8_4to<<"    "<<"|"<<"    "<<cali8_4to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"|      Ofimatica "<<"|    "<<o1_4to<<"   |    "<<o2_4to<<"   |    "<<o3_4to<<"   |   "<<o4_4to<<"     |"<<"   "<<o5_4to<<"    |"<<"    "<<o6_4to<<"   |   "<<o7_4to<<"    |    "<<o8_4to<<"   |   "<<o9_4to<<"    |   "<<o10_4to<<"     "<<"|   "<<nf9_4to<<"     |"<<"    "<<cali9_4to<<"    |"<<endl;
	cout<<"|      DDBD      "<<"|    "<<b1_4to<<"   |    "<<b2_4to<<"   |    "<<b3_4to<<"   |   "<<b4_4to<<"     |"<<"   "<<b5_4to<<"    |"<<"    "<<b6_4to<<"   |   "<<b7_4to<<"    |    "<<b8_4to<<"   |   "<<b9_4to<<"    |   "<<b10_4to<<"     "<<"|   "<<nf10_4to<<"    |"<<"    "<<cali10_4to<<"   |"<<endl;
	cout<<"|      ADSI      "<<"|    "<<ad1_4to<<"   |    "<<ad2_4to<<"   |    "<<ad3_4to<<"   |   "<<ad4_4to<<"     |"<<"   "<<ad5_4to<<"    |"<<"    "<<ad6_4to<<"   |   "<<ad7_4to<<"    |    "<<ad8_4to<<"   |   "<<ad9_4to<<"    |   "<<ad10_4to<<"     "<<"|   "<<nf11_4to<<"    |"<<"    "<<cali11_4to<<"   |"<<endl;
	cout<<"|      DPWRM     "<<"|    "<<w1_4to<<"   |    "<<w2_4to<<"   |    "<<w3_4to<<"   |   "<<w4_4to<<"     |"<<"   "<<w5_4to<<"    |"<<"    "<<w6_4to<<"   |   "<<w7_4to<<"    |    "<<w8_4to<<"   |   "<<w9_4to<<"    |   "<<w10_4to<<"     "<<"|   "<<nf12_4to<<"    |"<<"    "<<cali12_4to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;          
			    cout<<"Desea seguir digitando las calificaciones de otros cursos?"; cin>>ppp;
system("cls");
string ppp1 ="si";
if(ppp==ppp1)
goto po;
else
goto rrp12_4to;
	rrp12_4to:
				break;}
				default:
					cout<<"Opcion no valida"<<endl;
					break;
				}
			}
}	
	system("cls");
	to6:
	vv_6to:
		cout<<"**MATERIAS DE 6TO**"<<endl;
	cout<<"1-Matematicas"<<endl;
	cout<<"2-Lengua Espanola"<<endl;
	cout<<"3-Sociales"<<endl;
	cout<<"4-Educacion Fisica"<<endl;
	cout<<"5-Ingles"<<endl;
	cout<<"6-Naturales"<<endl;
	cout<<"7-Educacion Artistica"<<endl;
	cout<<"8-Formacion Humana"<<endl;
	cout<<"9-Implementacion y Mantenimiento de Aplicaciones y Sistemas Informaticos"<<endl;
	cout<<"10-Emprendimiento"<<endl;
	cout<<"11-Desarrollo e Implementacion de Soluciones Web y Multimedia"<<endl;
	cout<<"12-Formacion en Centros de Trabajos"<<endl;
	cout<<"Digite la materia(del 1 hasta 12),(enter)"<<endl;
	cin>>materia_6to;
		system("cls");
	switch(materia_6to){
		case 1: {
			cout<<"Matematicas"<<endl;
			p1_6to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>p1_6to;
	if(p1_6to>=0 && p1_6to<=100)
	goto p2_6to;
	else
	goto p1_6to;
	p2_6to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>p2_6to;
	if(p2_6to>=0 && p2_6to<=100)
	goto p3_6to;
	else
	goto p2_6to;
	p3_6to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>p3_6to;
	if(p3_6to>=0 && p3_6to<=100)
	goto p4_6to;
	else
	goto p3_6to;
	p4_6to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>p4_6to;
	if(p4_6to>=0 && p4_6to<=100)
	goto cont_6to;
	else
	goto p4_6to;
	cont_6to:
		
			//proceso de la materia basica
	nf3_6to=(p1_6to+p2_6to+p3_6to+p4_6to)/4;
	
	

	if(nf3_6to>=70 and nf3_6to<=79){
		cali3_6to="C";
	}
	else
	 if(nf3_6to>=80 and nf3_6to<=89){
        cali3_6to="B";
	}
	else
	if(nf3_6to>=90 and nf3_6to<=100){
		cali3_6to="A";
	}
	else
	if(nf3_6to<=69){
		cali3_6to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;
system("cls");
string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else
goto rr_6to;
	rr_6to:
		system("cls");
	//salida de datos de materia basica
		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
                 }
			break;
case 2: {
    system("cls");
    cout << "Lengua Espanola" << endl;
do {
        cout << "Digite el p1(enter)" << endl;
        cin >> l1_6to;
    } while (l1_6to < 0 || l1_6to > 100);

    do {
        cout << "Digite el p2(enter)" << endl;
        cin >> l2_6to;
    } while (l2_6to < 0 || l2_6to > 100);

    do {
        cout << "Digite el p3(enter)" << endl;
        cin >> l3_6to;
    } while (l3_6to < 0 || l3_6to > 100);

    do {
        cout << "Digite el p4(enter)" << endl;
        cin >> l4_6to;
    } while (l4_6to < 0 || l4_6to > 100);

    // proceso de la materia basica
    nf1_6to = (l1_6to + l2_6to + l3_6to + l4_6to) / 4;

    // Calculando la calificaci�n final
    if (nf1_6to >= 70 && nf1_6to <= 79) {
        cali1_6to = "C";
    } else if (nf1_6to >= 80 && nf1_6to <= 89) {
        cali1_6to = "B";
    } else if (nf1_6to >= 90 && nf1_6to <= 100) {
        cali1_6to = "A";
    } else if (nf1_6to <= 69) {
        cali1_6to = "reprobado";
    }

    cout << "Desea seguir digitando las calificaciones?";
    cin >> pp_6to;
system("cls");
    string pp1_6to = "si";
    if (pp_6to == pp1_6to)
        goto vv_6to;
    else
        goto rr2_6to;
rr2_6to:
system("cls");
    // salida de datos de materia basica
    		cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;

				break;}
				case 3:{
					system("cls");
								cout<<"Sociales"<<endl;
			ppp1_6to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>s1_6to;
	if(s1_6to>=0 && s1_6to<=100)
	goto ppp2_6to;
	else
	goto ppp1_6to;
	ppp2_6to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>s2_6to;
	if(s2_6to>=0 && s2_6to<=100)
	goto ppp3_6to;
	else
	goto ppp2_6to;
	ppp3_6to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>s3_6to;
	if(s3_6to>=0 && s3_6to<=100)
	goto ppp4_6to;
	else
	goto ppp3_6to;
	ppp4_6to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>s4_6to;
	if(s4_6to>=0 && s4_6to<=100)
	goto cont3_6to;
	else
	goto ppp4_6to;
	cont3_6to:
		
			//proceso de la materia basica
		
	nf4_6to=(s1_6to+s2_6to+s3_6to+s4_6to)/4;
	if(nf4_6to>=70 and nf4_6to<=79){
		cali4_6to="C";
	}
	else
	 if(nf4_6to>=80 and nf4_6to<=89){
        cali4_6to="B";
	}
	else
	if(nf4_6to>=90 and nf4_6to<=100){
		cali4_6to="A";
	}
	else
	if(nf4_6to<=69){
		cali4_6to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;
system("cls");
string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else
goto rr3_6to;
rr3_6to:
	system("cls");
		//salida de datos de materia basica
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;

					break;
				}
				case 4:{
					system("cls");
								cout<<"Educacion Fisica"<<endl;
			pppp1_6to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>f1_6to;
	if(f1_6to>=0 && f1_6to<=100)
	goto pppp2_6to;
	else
	goto pppp1_6to;
	pppp2_6to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>f2_6to;
	if(f2_6to>=0 && f2_6to<=100)
	goto pppp3_6to;
	else
	goto pppp2_6to;
	pppp3_6to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>f3_6to;
	if(f3_6to>=0 && f3_6to<=100)
	goto pppp4_6to;
	else
	goto pppp3_6to;
	pppp4_6to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>f4_6to;
	if(f4_6to>=0 && f4_6to<=100)
	goto cont4_6to;
	else
	goto pppp4_6to;
	cont4_6to:
		
			//proceso de la materia basica
	nf7_6to=(f1_6to+f2_6to+f3_6to+f4_6to)/4;
	if(nf7_6to>=70 and nf7_6to<=79){
		cali7_6to="C";
	}
	else
	 if(nf7_6to>=80 and nf7_6to<=89){
        cali7_6to="B";
	}
	else
	if(nf7_6to>=90 and nf7_6to<=100){
		cali7_6to="A";
	}
	else
	if(nf7_6to<=69){
		cali7_6to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;

string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else
goto rr4_6to;
rr4_6to:
	//salida de datos de materia basica
	system("cls");
				cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;

				break;
			}
				case 5:{
					system("cls");
					cout<<"Ingles"<<endl;
			ppppp1_6to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>i1_6to;
	if(i1_6to>=0 && i1_6to<=100)
	goto ppppp2_6to;
	else
	goto ppppp1_6to;
	ppppp2_6to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>i2_6to;
	if(i2_6to>=0 && i2_6to<=100)
	goto ppppp3_6to;
	else
	goto ppppp2_6to;
	ppppp3_6to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>i3_6to;
	if(i3_6to>=0 && i3_6to<=100)
	goto ppppp4_6to;
	else
	goto ppppp3_6to;
	ppppp4_6to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>i4_6to;
	if(i4_6to>=0 && i4_6to<=100)
	goto cont5_6to;
	else
	goto ppppp4_6to;
	cont5_6to:
		
			//proceso de la materia basica
	nf5_6to=(i1_6to+i2_6to+i3_6to+i4_6to)/4;
	if(nf2_6to>=70 and nf2_6to<=79){
		cali2_6to="C";

	}
	else{
	
	 if(nf2_6to>=80 and nf2_6to<=89){
        cali2_6to="B";
	}
	else
	if(nf2_6to>=90 and nf2_6to<=100){
		cali2_6to="A";
	}
	else
	if(nf2_6to<=69){
		cali2_6to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;

string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else 
goto rr5_6to;
rr5_6to:
	//salida de datos de materia basica
system("cls");
				cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
		}
					break;}
				
					case 6:{
					system("cls");
					cout<<"Naturales"<<endl;
			pppppp1_6to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>q1_6to;
	if(q1_6to>=0 && q1_6to<=100)
	goto pppppp2_6to;
	else
	goto pppppp1_6to;
	pppppp2_6to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>q2_6to;
	if(q2_6to>=0 && q2_6to<=100)
	goto pppppp3_6to;
	else
	goto pppppp2_6to;
	pppppp3_6to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>q3_6to;
	if(q3_6to>=0 && q3_6to<=100)
	goto pppppp4_6to;
	else
	goto pppppp3_6to;
	pppppp4_6to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>q4_6to;
	if(q4_6to>=0 && q4_6to<=100)
	goto cont6_6to;
	else
	goto pppppp4_6to;
	cont6_6to:
			//proceso de la materia basica
	nf5_6to=(q1_6to+q2_6to+q3_6to+q4_6to)/4;
	if(nf5_6to>=70 and nf5_6to<=79){
		cali5_6to="C";
	}
	else
	 if(nf5_6to>=80 and nf5_6to<=89){
    cali5_6to="B";
	}
	else
	if(nf5_6to>=90 and nf5_6to<=100){
		cali5_6to="A";
	}
	else
	if(nf5_6to<=69){
		cali5_6to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;

string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else 
goto rr6_6to;
rr6_6to:
	
	system("cls");
	//salida de datos de materia basica
			cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
}
				break;
				case 7:{
					system("cls");
									cout<<"Educacion Artistica"<<endl;
			ppppppp1_6to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>a1_6to;
	if(a1_6to>=0 && a1_6to<=100)
	goto ppppppp2_6to;
	else
	goto ppppppp1_6to;
	ppppppp2_6to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>a2_6to;
	if(a2_6to>=0 && a2_6to<=100)
	goto ppppppp3_6to;
	else
	goto ppppppp2_6to;
	ppppppp3_6to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>a3_6to;
	if(a3_6to>=0 && a3_6to<=100)
	goto pppppp4_6to;
	else
	goto pppppp3_6to;
	ppppppp4_6to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>a4_6to;
	if(a4_6to>=0 && a4_6to<=100)
	goto cont7_6to;
	else
	goto ppppppp4_6to;
	cont7_6to:
			//proceso de la materia basica
	nf8_6to=(a1_6to+a2_6to+a3_6to+a4_6to)/4;
	if(nf8_6to>=70 and nf8_6to<=79){
		cali8_6to="C";
	}
	else
	 if(nf8_6to>=80 and nf8_6to<=89){
        cali8_6to="B";
	}
	else
	if(nf8_6to>=90 and nf8_6to<=100){
		cali8_6to="A";
	}
	else
	if(nf8_6to<=69){
		cali8_6to="reprobado";
	}
cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;

string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else 
goto rr7_6to;
rr7_6to:
system("cls");
	//salida de datos de materia basica
				cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
					break;
				}
				case 8:{
					system("cls");
									cout<<"Formacion Integral Humana y Religiosa"<<endl;
			pppppppppp1_6to:
	cout<<"Digite el p1(enter)"<<endl;
	cin>>h1_6to;
	if(h1_6to>=0 && h1_6to<=100)
	goto pppppppppp2_6to;
	else
	goto pppppppppp1_6to;
	pppppppppp2_6to:
	cout<<"Digite el p2(enter)"<<endl;
	cin>>h2_6to;
	if(h2_6to>=0 && h2_6to<=100)
	goto pppppppppp3_6to;
	else
	goto pppppppppp2_6to;
	pppppppppp3_6to:
	cout<<"Digite el p3(enter)"<<endl;
	cin>>h3_6to;
	if(h3_6to>=0 && h3_6to<=100)
	goto pppppppppp4_6to;
	else
	goto pppppppppp3_6to;
	pppppppppp4_6to:
	cout<<"Digite el p4(enter)"<<endl;
	cin>>h4_6to;
	if(h4_6to>=0 && h4_6to<=100)
	goto cont8_6to;
	else
	goto pppppppppp4_6to;
	cont8_6to:
			//proceso de la materia basica
	nf6_6to=(h1_6to+h2_6to+h3_6to+h4_6to)/4;
	if(nf6_6to>=70 and nf6_6to<=79){
		cali6_6to="C";
	}
	else
	 if(nf6_6to>=80 and nf6_6to<=89){
        cali6_6to="B";
	}
	else
	if(nf6_6to>=90 and nf6_6to<=100){
		cali6_6to="A";
	}
	else
	if(nf6_6to<=69){
		cali6_6to="reprobado";
	}
	//salida de datos de materia basica
cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;

string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else 
goto rr8_6to;
rr8_6to:

system("cls");
				cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;

					break;}
					case 9:{ 
					system("cls");
					reversa_6to:
									cout<<"Implementacion y Mantenimiento de Aplicaciones y Sistemas Informaticos"<<endl;
						ppppppppppp1_6to:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>im1_6to;
	if(im1_6to>=0 && im1_6to<=100)
	goto pppppppppppp2_6to;
	else
	goto ppppppppppp1_6to;
	pppppppppppp2_6to:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>im2_6to;
	if(im2_6to>=0 && im2_6to<=100)
	goto ppppppppppp3_6to;
	else
	goto pppppppppppp2_6to;
	ppppppppppp3_6to:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>im3_6to;
	if(im3_6to>=0 && im3_6to<=100)
	goto ppppppppppp4_6to;
	else
	goto ppppppppppp3_6to;
	ppppppppppp4_6to:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>im4_6to;
	if(im4_6to>=0 && im4_6to<=100)
	goto cont9_6to;
	else
	goto ppppppppppp4_6to;
	cont9_6to:
		ppppppppppp5_6to:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>im5_6to;
	if(im5_6to>=0 && im5_6to<=100)
	goto cont10_6to;
	else
	goto ppppppppppp5_6to;
	cont10_6to:
		pppppppppppp6_6to:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>im6_6to;
	if(im6_6to>=0 && im6_6to<=100)
	goto cont11im_6to;
	else
	goto pppppppppppp6_6to;
	cont11im_6to:
		ppppppppppp7_6to:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>im7_6to;
	if(im7_6to>=0 && im7_6to<=100)
	goto cont12_6to;
	else
	goto ppppppppppp7_6to;
	cont12_6to:
			ppppppppppp12_6to:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>im8_6to;
	if(im8_6to>=0 && im8_6to<=100)
	goto cont13_6to;
	else
	goto ppppppppppp12_6to;
	cont13_6to:
		ppppppppppp13_6to:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>im9_6to;
	if(im9_6to>=0 && im9_6to<=100)
	goto cont14_6to;
	else
	goto ppppppppppp13_6to;
	cont14_6to:
			ppppppppppp14_6to:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>im10_6to;
	if(im10_6to>=0 && im10_6to<=100)
	goto cont15_6to;
	else
	goto ppppppppppp14_6to;
	cont15_6to:
			//proceso de la materia basica
	nf11_6to=(im1_6to+im2_6to+im3_6to+im4_6to+im5_6to+im6_6to+im7_6to+im8_6to+im9_6to+im10_6to);
	if(nf11_6to>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo_6to;
		if(nuevo_6to==nuevo1_6to){
			goto reversa_6to;
		}
	}
	else{ goto cont16_6to;
	}
	cont16_6to:
	if(nf11_6to>=70 and nf11_6to<=79){
		cali11_6to="C";
	}
	else
	 if(nf11_6to>=80 and nf11_6to<=89){
        cali11_6to="B";
	}
	else
	if(nf11_6to>=90 and nf11_6to<=100){
		cali11_6to="A";
	}
	else
	if(nf11_6to<=69){
		cali11_6to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;

string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else 
goto rr9_6to;
rr9_6to:
	system("cls");
	//salida de datos de materia basica
							cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
					break;}
									case 10:{ 
					system("cls");
					reversa2_6to:
									cout<<"Emprendimiento"<<endl;
						pppppppppppp1_6to:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>e1_6to;
	if(e1_6to>=0 && e1_6to<=100)
	goto ppppppppppppp2_6to;
	else
	goto pppppppppppp1_6to;
	ppppppppppppp2_6to:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>e2_6to;
	if(e2_6to>=0 && e2_6to<=100)
	goto pppppppppppp3_6to;
	else
	goto ppppppppppppp2_6to;
	pppppppppppp3_6to:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>e3_6to;
	if(e3_6to>=0 && e3_6to<=100)
	goto pppppppppppp4_6to;
	else
	goto pppppppppppp3_6to;
	pppppppppppp4_6to:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>e4_6to;
	if(e4_6to>=0 && e4_6to<=100)
	goto cont9e_6to;
	else
	goto pppppppppppp4_6to;
	cont9e_6to:
		pppppppppppp5_6to:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>e5_6to;
	if(e5_6to>=0 && e5_6to<=100)
	goto cont10e_6to;
	else
	goto pppppppppppp5_6to;
	cont10e_6to:
		ppppppppppppp6_6to:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>e6_6to;
	if(e6_6to>=0 && e6_6to<=100)
	goto cont11e_6to;
	else
	goto ppppppppppppp6_6to;
	cont11e_6to:
		pppppppppppp7_6to:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>e7_6to;
	if(e7_6to>=0 && e7_6to<=100)
	goto cont12e_6to;
	else
	goto pppppppppppp7_6to;
	cont12e_6to:
			pppppppppppp12_6to:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>e8_6to;
	if(e8_6to>=0 && e8_6to<=100)
	goto cont13e_6to;
	else
	goto pppppppppppp12_6to;
	cont13e_6to:
		pppppppppppp13_6to:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>e9_6to;
	if(e9_6to>=0 && e9_6to<=100)
	goto cont14e_6to;
	else
	goto pppppppppppp13_6to;
	cont14e_6to:
			pppppppppppp14_6to:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>e10_6to;
	if(e10_6to>=0 && e10_6to<=100)
	goto cont15e_6to;
	else
	goto pppppppppppp14_6to;
	cont15e_6to:
			//proceso de la materia basica
	nf9_6to=(e1_6to+e2_6to+e3_6to+e4_6to+e5_6to+e6_6to+e7_6to+e8_6to+e9_6to+e10_6to);
	if(nf9_6to>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo_6to;
		if(nuevo_6to==nuevo1_6to){
			goto reversa2_6to;
		}
	}
	else{ goto cont16e_6to;
	}
	cont16e_6to:
	if(nf9_6to>=70 and nf9_6to<=79){
		cali9_6to="C";
	}
	else
	 if(nf9_6to>=80 and nf9_6to<=89){
        cali9_6to="B";
	}
	else
	if(nf9_6to>=90 and nf9_6to<=100){
		cali9_6to="A";
	}
	else
	if(nf9_6to<=69){
		cali9_6to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;

string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else 
goto rr10_6to;
rr10_6to:
	system("cls");
	//salida de datos de materia basica
								cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;          
			    break;}
			    case 11:{ 
					system("cls");
					reversa3_6to:
									cout<<"Desarrollo e Implementacion de Soluciones Web y Multimedia"<<endl;
						ppppppppppppp1_6to:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>w1_6to;
	if(w1_6to>=0 && w1_6to<=100)
	goto pppppppppppppp2_6to;
	else
	goto ppppppppppppp1_6to;
	pppppppppppppp2_6to:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>w2_6to;
	if(w2_6to>=0 && w2_6to<=100)
	goto ppppppppppppp3_6to;
	else
	goto pppppppppppppp2_6to;
	ppppppppppppp3_6to:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>w3_6to;
	if(w3_6to>=0 && w3_6to<=100)
	goto ppppppppppppp4_6to;
	else
	goto ppppppppppppp3_6to;
	ppppppppppppp4_6to:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>w4_6to;
	if(w4_6to>=0 && w4_6to<=100)
	goto cont9w_6to;
	else
	goto ppppppppppppp4_6to;
	cont9w_6to:
		ppppppppppppp5_6to:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>w5_6to;
	if(w5_6to>=0 && w5_6to<=100)
	goto cont10w_6to;
	else
	goto ppppppppppppp5_6to;
	cont10w_6to:
		pppppppppppppp6_6to:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>w6_6to;
	if(w6_6to>=0 && w6_6to<=100)
	goto cont11w_6to;
	else
	goto pppppppppppppp6_6to;
	cont11w_6to:
		ppppppppppppp7_6to:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>w7_6to;
	if(w7_6to>=0 && w7_6to<=100)
	goto cont12w_6to;
	else
	goto ppppppppppppp7_6to;
	cont12w_6to:
			ppppppppppppp12_6to:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>w8_6to;
	if(w8_6to>=0 && w8_6to<=100)
	goto cont13w_6to;
	else
	goto ppppppppppppp12_6to;
	cont13w_6to:
		ppppppppppppp13_6to:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>w9_6to;
	if(w9_6to>=0 && w9_6to<=100)
	goto cont14w_6to;
	else
	goto ppppppppppppp13_6to;
	cont14w_6to:
			ppppppppppppp14_6to:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>w10_6to;
	if(w10_6to>=0 && w10_6to<=100)
	goto cont15w_6to;
	else
	goto ppppppppppppp14_6to;
	cont15w_6to:
			//proceso de la materia basica
	nf12_6to=(w1_6to+w2_6to+w3_6to+w4_6to+w5_6to+w6_6to+w7_6to+w8_6to+w9_6to+w10_6to);
	if(nf12_6to>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo_6to;
		if(nuevo_6to==nuevo1_6to){
			goto reversa3_6to;
		}
	}
	else{ goto cont16w_6to;
	}
	cont16w_6to:
	if(nf12_6to>=70 and nf12_6to<=79){
		cali12_6to="C";
	}
	else
	 if(nf12_6to>=80 and nf12_6to<=89){
        cali12_6to="B";
	}
	else
	if(nf12_6to>=90 and nf12_6to<=100){
		cali12_6to="A";
	}
	else
	if(nf12_6to<=69){
		cali12_6to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;

string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else 
goto rr11_6to;
rr11_6to:
	system("cls");
	//salida de datos de materia basica
									cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;          
			    break;}
			    case 12:{ 
					system("cls");
					reversa4_6to:
									cout<<"Formacion en Centros de Trabajos"<<endl;
						pppppppppppppp1_6to:
	cout<<"Digite el n1(enter)"<<endl;
	cin>>t1_6to;
	if(t1_6to>=0 && t1_6to<=100)
	goto ppppppppppppppp2_6to;
	else
	goto pppppppppppppp1_6to;
	ppppppppppppppp2_6to:
	cout<<"Digite el n2(enter)"<<endl;
	cin>>t2_6to;
	if(t2_6to>=0 && t2_6to<=100)
	goto pppppppppppppp3_6to;
	else
	goto ppppppppppppppp2_6to;
	pppppppppppppp3_6to:
	cout<<"Digite el n3(enter)"<<endl;
	cin>>t3_6to;
	if(t3_6to>=0 && t3_6to<=100)
	goto pppppppppppppp4_6to;
	else
	goto pppppppppppppp3_6to;
	pppppppppppppp4_6to:
	cout<<"Digite el n4(enter)"<<endl;
	cin>>t4_6to;
	if(t4_6to>=0 && t4_6to<=100)
	goto cont9o_6to;
	else
	goto pppppppppppppp4_6to;
	cont9o_6to:
		pppppppppppppp5_6to:
	cout<<"Digite el n5(enter)"<<endl;
	cin>>t5_6to;
	if(t5_6to>=0 && t5_6to<=100)
	goto cont10o_6to;
	else
	goto pppppppppppppp5_6to;
	cont10o_6to:
		ppppppppppppppp6_6to:
	cout<<"Digite el n6(enter)"<<endl;
	cin>>t6_6to;
	if(t6_6to>=0 && t6_6to<=100)
	goto cont11o_6to;
	else
	goto ppppppppppppppp6_6to;
	cont11o_6to:
		pppppppppppppp7_6to:
	cout<<"Digite el n7(enter)"<<endl;
	cin>>t7_6to;
	if(t7_6to>=0 && t7_6to<=100)
	goto cont12o_6to;
	else
	goto pppppppppppppp7_6to;
	cont12o_6to:
			pppppppppppppp12_6to:
	cout<<"Digite el n8(enter)"<<endl;
	cin>>t8_6to;
	if(t8_6to>=0 && t8_6to<=100)
	goto cont13o_6to;
	else
	goto pppppppppppppp12_6to;
	cont13o_6to:
		pppppppppppppp13_6to:
	cout<<"Digite el n9(enter)"<<endl;
	cin>>t9_6to;
	if(t9_6to>=0 && t9_6to<=100)
	goto cont14o_6to;
	else
	goto pppppppppppppp13_6to;
	cont14o_6to:
			pppppppppppppp14_6to:
	cout<<"Digite el n10(enter)"<<endl;
	cin>>t10_6to;
	if(t10_6to>=0 && t10_6to<=100)
	goto cont15o_6to;
	else
	goto pppppppppppppp14_6to;
	cont15o_6to:
			//proceso de la materia basica
	nf11_6to=(t1_6to+t2_6to+t3_6to+t4_6to+t5_6to+t6_6to+t7_6to+t8_6to+t9_6to+t10_6to);
	if(nf11_6to>100){
		cout<<"Hubo un error, digite de nuevo por favor."<<endl;
		cout<<"**Recordatorio** las materias tecnicas son sumatorias"<<endl;
		cout<<"Desea digitar de nuevo?(si,no):"<<endl;
		cin>>nuevo_6to;
		if(nuevo_6to==nuevo1_6to){
			goto reversa4_6to;
		}
	}
	else{ goto cont16o_6to;
	}
	cont16o_6to:
	if(nf11_6to>=70 and nf11_6to<=79){
		cali12_6to="C";
	}
	else
	 if(nf11_6to>=80 and nf11_6to<=89){
        cali12_6to="B";
	}
	else
	if(nf11_6to>=90 and nf11_6to<=100){
		cali11_6to="A";
	}
	else
	if(nf11_6to<=69){
		cali11_6to="reprobado";
	}
	cout<<"Desea seguir digitando las calificaciones?"; cin>>pp_6to;

string pp1_6to ="si";
if(pp_6to==pp1_6to)
goto vv_6to;
else 
goto rr12_6to;
rr12_6to:
	system("cls");
	//salida de datos de materia basica
									cout<<"_____________________________________________________________________________________|"<<endl;
	cout<<"|  ESCUELA:"<<" "<<escuela<<" |  MAESTRO:"<<" "<<maestro<<" |  APELLIDO:"<<" "<<apellido_m<<" |  NOMBRE:"<<" "<<estudiante<<" |  APELLIDO:"<<" "<<apellido<<endl;
	cout<<"|_____________________________________________________________________________________|"<<endl;  
	cout<<"|  ASIGNATURAS:"<<"  |  p1  "<<"  |  p2  "<<"  |  p3  "<<"  |  p4  |"<<"   CF    |"<<"   Promedio   |"<<endl;
	cout<<"| LENGUA ESPANOLA"<<"|    "<<l1_6to<<"   "<<"|   "<<l2_6to<<"   "<<" |   "<<l3_6to<<"   "<<" |   "<<l4_6to<<" "<<" |    "<<nf1_6to<<"    "<<"|"<<"    "<<cali1_6to<<"   |"<<endl;
	cout<<"| INGLES TECNICO "<<"|    "<<i1_6to<<"   "<<"|   "<<i2_6to<<"   "<<" |   "<<i3_6to<<"   "<<" |   "<<i4_6to<<" "<<" |    "<<nf2_6to<<"    "<<"|"<<"    "<<cali2_6to<<"   |"<<endl;
	cout<<"| MATEMATICA     "<<"|    "<<p1_6to<<"   "<<"|   "<<p2_6to<<"   "<<" |   "<<p3_6to<<"  "<<"  |   "<<p4_6to<<" "<<" |    "<<nf3_6to<<"    "<<"|"<<"    "<<cali3_6to<<"   |"<<endl;
	cout<<"| SOCIALES       "<<"|    "<<s1_6to<<"   "<<"|   "<<s2_6to<<"   "<<" |   "<<s3_6to<<"   "<<" |   "<<s4_6to<<" "<<" |    "<<nf4_6to<<"    "<<"|"<<"    "<<cali4_6to<<"   |"<<endl;
	cout<<"| NATURALES      "<<"|    "<<q1_6to<<"   "<<"|   "<<q2_6to<<"   "<<" |   "<<q3_6to<<"   "<<" |   "<<q4_6to<<" "<<" |    "<<nf5_6to<<"    "<<"|"<<"    "<<cali5_6to<<"   |"<<endl;
	cout<<"| FHIR           "<<"|    "<<h1_6to<<"   "<<"|   "<<h2_6to<<"   "<<" |   "<<h3_6to<<"   "<<" |   "<<h4_6to<<" "<<" |    "<<nf6_6to<<"    "<<"|"<<"    "<<cali6_6to<<"   |"<<endl;
	cout<<"| EDUC. FISICA   "<<"|    "<<f1_6to<<"   "<<"|   "<<f2_6to<<"   "<<" |   "<<f3_6to<<"   "<<" |   "<<f4_6to<<" "<<" |    "<<nf7_6to<<"    "<<"|"<<"    "<<cali7_6to<<"   |"<<endl;
	cout<<"| EDUC. ARTISTICA"<<"|    "<<a1_6to<<"   "<<"|   "<<a2_6to<<"   "<<" |   "<<a3_6to<<"   "<<" |   "<<a4_6to<<" "<<" |    "<<nf8_6to<<"    "<<"|"<<"    "<<cali8_6to<<"   |"<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|                                                        ASIGNATURAS TECNICAS                                          |"<<endl<<endl;
	cout<<"|______________________________________________________________________________________________________________________|"<<endl<<endl;
	cout<<"|  ASIGNATURAS:"<<"  |  n1  "<<"  |  n2  "<<"  |  n3  "<<"  |  n4   "<<"  |  n5  "<<"  |  n6  "<<"  |  n7  "<<"  |  n8  "<<"  |  n9  "<<"  |  n10  "<<"  |     CF  |"<<endl<<endl;
	cout<<"| Emprendimiento "<<"|    "<<e1_6to<<"   |    "<<e2_6to<<"   |    "<<e3_6to<<"   |   "<<e4_6to<<"     |"<<"   "<<e5_6to<<"    |"<<"    "<<e6_6to<<"   |   "<<e7_6to<<"    |    "<<e8_6to<<"   |   "<<e9_6to<<"    |   "<<e10_6to<<"     "<<"|   "<<nf9_6to<<"     |"<<"    "<<cali9_6to<<"    |"<<endl;
	cout<<"|      FCT       "<<"|    "<<t1_6to<<"   |    "<<t2_6to<<"   |    "<<t3_6to<<"   |   "<<t4_6to<<"     |"<<"   "<<t5_6to<<"    |"<<"    "<<t6_6to<<"   |   "<<t7_6to<<"    |    "<<t8_6to<<"   |   "<<t9_6to<<"    |   "<<t10_6to<<"     "<<"|   "<<nf10_6to<<"    |"<<"    "<<cali10_6to<<"   |"<<endl;
	cout<<"|      IMASI     "<<"|    "<<im1_6to<<"   |    "<<im2_6to<<"   |    "<<im3_6to<<"   |   "<<im4_6to<<"     |"<<"   "<<im5_6to<<"    |"<<"    "<<im6_6to<<"   |   "<<im7_6to<<"    |    "<<im8_6to<<"   |   "<<im9_6to<<"    |   "<<im10_6to<<"     "<<"|   "<<nf11_6to<<"    |"<<"    "<<cali11_6to<<"   |"<<endl;
	cout<<"|      DISWM     "<<"|    "<<w1_6to<<"   |    "<<w2_6to<<"   |    "<<w3_6to<<"   |   "<<w4_6to<<"     |"<<"   "<<w5_6to<<"    |"<<"    "<<w6_6to<<"   |   "<<w7_6to<<"    |    "<<w8_6to<<"   |   "<<w9_6to<<"    |   "<<w10_6to<<"     "<<"|   "<<nf12_6to<<"    |"<<"    "<<cali12_6to<<"   |"<<endl;
	cout<<"|----------------|--------|--------------------------------------------------------------------------------------------|"<<endl<<endl;
	
	          
			    break;}
				default:
					cout<<"Opcion no valida"<<endl;
					break;
				}
	//control de salida
   string salir="no", salir1;
   cout<<"quiere seguir digitando"<<endl;
   cin>>salir1;
   if(salir1==salir)
   PostQuitMessage(0);
   else
   goto richermy;
			
   //comando de cierre
   return 0;
   }









	
	
