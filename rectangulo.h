/*Header para la clase rectangulo*/
#ifndef RECTANGULO_H
#define RECTANGULO_H
class Rectangulo{
private:
	float lado1;
	float lado2;
	float area;
	float perimetro;
public:
	void lados(float a, float b);
	void HallarPerimetro();
	void HallarArea();
	float EncontrarPerimetro();
	float EncontrarArea();
	
};
void Rectangulo::lados(float a,float b){
	lado1=a;
	lado2=b;
}
void Rectangulo::HallarPerimetro(){
	perimetro=(2.00*lado1)+(2.00*lado2);
}
void Rectangulo::HallarArea(){
	area=lado1*lado2;
}
float Rectangulo::EncontrarPerimetro(){
	return perimetro;
}
float Rectangulo::EncontrarArea(){
	return area;
}
#endif
