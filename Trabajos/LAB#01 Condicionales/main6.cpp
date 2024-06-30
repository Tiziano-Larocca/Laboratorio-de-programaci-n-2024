#include <iostream>
using namespace std;
const int ENTRADA = 7;
float precio_final;
float descuento;
int edad;
int main(int argc, char** argv) {
	
	cout<<"Bienvenido a Cinemark"<<endl;
	cout<<"El valor de la entrada son 7 Euros"<<endl;
	cout<<"Ingrese su edad"<<endl;
	cin>>edad;
	
	if(edad < 5){
		descuento = ENTRADA * 0.6;
		precio_final = ENTRADA - descuento;
		cout<<"Por el menor, el valor de la entrada pasa a "<<precio_final<<" Euros"<<endl;
	}
	else{
		if(edad > 60){
			descuento = ENTRADA * 0.55;
			precio_final = ENTRADA - descuento;
			cout<<"Por el mayor, el valor de la entrada pasa a "<<precio_final<<" Euros"<<endl;
		}
		else{
			 cout<<"Usted no cumple las condiciones de los descuentos, el precio final son "<<ENTRADA<<" Euros"<<endl;
		}
	}
	
	return 0;
}
