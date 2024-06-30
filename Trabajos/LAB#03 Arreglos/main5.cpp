#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int valor[10];
	int val[10];
	int v[10];
	int i = 0;
	
	for(i = 0; i < 10; i++){
		
		cout<<"Ingrese un numero (Arreglo 1)"<<endl;
		cin>>val[i];
		
	}
	
	for(i = 0; i < 10; i++){
		
		cout<<"Ingrese un numero (Arreglo 2)"<<endl;
		cin>>v[i];
		
	}
	
	for(i = 0; i < 10; i++){
		
		valor[i] = val[i] + v[i]; //hacemos la suma de los 2 arreglos en sus respectivas posiciones.
		cout<<val[i]<<" + "<<v[i]<<" = "<<valor[i]<<endl;
		
	}
	
	return 0;
}
