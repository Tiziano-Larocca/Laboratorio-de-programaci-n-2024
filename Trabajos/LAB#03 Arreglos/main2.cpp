#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int vec[10];
	
	for(int i = 0; i < 10; i++){
		
		cout<<"Ingrese un numero"<<endl;
		cin>>vec[i];
		vec[i] = vec[i] * 2; //multiplicamos por 2 para duplicar el numero.
		
	}
	
	for(int i = 0; i < 10; i++){
		
			cout<<"El numero ingresado es: "<<vec[i]/2<<", y el doble de este es: "<<vec[i]<<endl; //dividimos por 2 para mostrar el numero original. Luego mostramos el duplicado.	
						
		}
		
	
	return 0;
}
