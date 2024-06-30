#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int v[20];
	int mayor = 0;
	int posi;
	int i;
	
	for(i = 0; i < 20; i++){
		
		cout<<"Ingrese un numero"<<endl;
		cin>>v[i];
		
		if(v[i] > mayor){
			
			posi = i;
			mayor = v[i];
			
		}
		
	}
	cout<<"El numero "<<mayor<<" es el mas grande, se encuentra el la posicion numero "<<posi + 1<<endl;
	
	
	return 0;
}
