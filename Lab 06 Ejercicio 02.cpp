/*2. Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
#include <string>
#include "alumnoEjercicio02.h"
using namespace std;
int main(int argc, char *argv[]) {
	alumno alumno1;
	int ID;
	string Nombre;
	float a,b,c;
	int i;
	i=0;
	while (i<1){
		cout<<"Ingrese el CUI del alumno: ";
		cin>>ID;
		if (ID>20000000 && ID<21009999){/*Cadena de 8 dígitos, contando desde el año 2000 y el alumno 0000 hasta el año 2100 y el alumno 9999.*/
			i++;
		}
		else{
			cout<<"Ingrese un CUI valido. "<<endl;
		}
	}
	cout<<"Ingrese el nombre del alumno (primero nombres): ";
	cin.ignore();
	getline(cin,Nombre);
	cin.clear();
	i=0;
	cout<<"Ingrese las notas del alumno: "<<endl;
	while (i<1){
		cout<<"Primera nota: ";
		cin>>a;
		if (a>=0 && a<=20){
			i++;
		}
		else{
			cout<<"Ingrese una nota valida. "<<endl;
		}
	}
	i=0;
	while (i<1){
		cout<<"Segunda nota: ";
		cin>>b;
		if (b>=0 && b<=20){
			i++;
		}
		else{
			cout<<"Ingrese una nota valida. "<<endl;
		}
	}
	i=0;
	while (i<1){
		cout<<"Tercera nota: ";
		cin>>c;
		if (c>=0 && c<=20){
			i++;
		}
		else{
			cout<<"Ingrese una nota valida. "<<endl;
		}
	}
	alumno1.Datos(ID,Nombre,a,b,c);
	alumno1.aproboOno();
	cout<<endl;
	cout<<"CUI: "<<alumno1.EncontrarCUI()<<endl;
	string PrimerNombre=alumno1.EncontrarNombre().substr(0,(alumno1.EncontrarNombre()).find(" "));
	cout<<"Primer nombre: "<<PrimerNombre<<endl;
	cout<<"Promedio: "<<alumno1.NotaPromedio()<<endl;
	if (alumno1.VerSiAprobo()==1){
		cout<<"Estado: Aprobado"<<endl;
	}
	else{
		cout<<"Estado: Desaprobado"<<endl;
	}
	system("pause");
	return 0;
}

