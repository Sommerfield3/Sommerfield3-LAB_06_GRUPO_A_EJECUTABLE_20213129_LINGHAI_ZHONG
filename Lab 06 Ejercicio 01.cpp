/*1. Implemente un programa con clases que calcule el área de un rectángulo y perímetro.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
#include "rectangulo.h"
using namespace std;

int main (int argc, char *argv[]) {
	Rectangulo rectangulo;
	float a,b;
	int g=0;
	while (g<1){
		cout<<"Ingrese el valor del primer lado: ";
		cin>>a;
		cout<<"Ingrese el valor del segundo lado: ";
		cin>>b;
		if (a>b && b>0){
			g++;
		}
		else if (b>a && a>0){
			g++;
		}
		else{
			cout<<"Ingresar valores permitidos. "<<endl;
		}
	}
	rectangulo.lados(a,b);
	rectangulo.HallarPerimetro();
	rectangulo.HallarArea();
	cout<<"El perimetro del rectangulo es: "<<rectangulo.EncontrarPerimetro()<<endl;
	cout<<"El area del rectangulo es: "<<rectangulo.EncontrarArea()<<endl;
	cout<<endl;
	system("pause");
	return 0;
}

