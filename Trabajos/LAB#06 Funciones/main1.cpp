#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

long resultado(int, int);

int main(int argc, char** argv) {
	
	srand(time(NULL));
	int numero;
	int potencia;
	
	cout<<"Ingrese base y potencia"<<endl;
	cin>>numero;
	cin>>potencia;
	
	cout<<numero<<" elevado a "<<potencia<<" es igual a:"<<endl;
	
	cout<<resultado(numero, potencia);
	
	return 0;
}

long resultado(int a, int b){
	
	int aux = a;
	
	for(int i = 1; i < b; i++){
		
		a = aux * a;
	
	}
		
	return a;
	
}

