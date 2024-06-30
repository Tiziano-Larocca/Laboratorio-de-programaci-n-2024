#include <iostream>
using namespace std;
int CLAVE;
int main(int argc, char** argv) {
	
	cout<<"Ingrese los 3 numeros"<<endl;
	cin>>CLAVE; 
	
	if(CLAVE == 123){
		cout<<"Acceso permitido"<<endl;
	}
	else{
		cout<<"Acceso denegado"<<endl;
	}
	
	return 0;
}
