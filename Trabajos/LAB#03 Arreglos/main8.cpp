#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	const int V1 = 5; //declaramos el tamano de los vectores como constantes.
	const int V2 = 5;
	const int V3 = 10;
	int v1[V1]; //los vectores tienen el tamano de una variable constante.
	int v2[V2];
	int v3[V3];
	int i;
	
	for(i = 0; i < 5; i++){
		
		cout<<"Ingrese un numero (Vector 1)"<<endl;
		cin>>v1[i];
		v3[i] = v1[i];
		
	}
	
	for(i = 0; i < 5; i++){
		
		cout<<"Ingrese un numero (Vector 2)"<<endl;
		cin>>v2[i];
		v3[i + 5] = v2[i];
		
	}
	
	for(i = 0; i < 10; i++){
		
		cout<<v3[i]<<"\t";
		
	}
	
	return 0;
}
