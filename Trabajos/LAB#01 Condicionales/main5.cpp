#include <iostream>
using namespace std;
int numero;
int main(int argc, char** argv) {
	
	cout<<"Ingrese un numero entre 1 y 7"<<endl;
	cin>>numero;
	
	while(numero < 1 || numero > 7){
		cout<<"El numero debe ser entre 1 y 7, intente de nuevo"<<endl;
		cin>>numero;
	}
	
	switch(numero){
		case 1:
			cout<<"Hoy es Domingo"<<endl;
			break;
		case 2:
			cout<<"Hoy es Lunes"<<endl;
			break;
		case 3:
			cout<<"Hoy es Martes"<<endl;
			break;
		case 4:
			cout<<"Hoy es Miercoles"<<endl;
			break;
		case 5:
			cout<<"Hoy es Jueves"<<endl;
			break;
		case 6:
			cout<<"Hoy es Viernes"<<endl;
			break;
		case 7:
			cout<<"Hoy es Sabado"<<endl;
			break;
	}
		
	return 0;
}
