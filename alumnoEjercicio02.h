#ifndef ALUMNOEJERCICIO02_H
#define ALUMNOEJERCICIO02_H
/*Header para la clase alumno*/
#include <string>
class alumno{
private:
	int CUI;
	std::string NombreCompleto;
	float promedio;
	bool Aprobado;
public:
	void Datos(int cui,std::string nombrecompleto,float a,float b, float c);
	void aproboOno();
	int EncontrarCUI();

	std::string EncontrarNombre();
	float NotaPromedio();
	bool VerSiAprobo();
};
void alumno::Datos(int cui,std::string nombrecompleto,float a,float b, float c){
	CUI=cui;
	NombreCompleto=nombrecompleto;
	promedio=(a+b+c)/(3.00);
}
void alumno::aproboOno(){
	if (promedio>=(10.5)){
		Aprobado=true;
	}
	else{
		Aprobado=false;
	}
}
int alumno::EncontrarCUI(){
	return CUI;
}
std::string alumno::EncontrarNombre(){
	return NombreCompleto;
}
float alumno::NotaPromedio(){
	return promedio;
}
bool alumno::VerSiAprobo(){
	return Aprobado;
}
#endif


