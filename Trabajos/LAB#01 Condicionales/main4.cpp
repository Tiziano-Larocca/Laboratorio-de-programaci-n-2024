#include <iostream>
using namespace std;
int numero;
int main(int argc, char** argv) {
	
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	
	if(numero % 2 == 0){
		
		cout<<"El numero "<<numero<<" es par"<<endl;
		
		if(numero % 3 == 0){
			
			cout<<"El numero "<<numero<<" es multiplo es 3"<<endl;
		}
		else{
			
			cout<<"El numero "<<numero<<" no es multiplo de 3"<<endl;
		}
	}
	else{
		cout<<"El numero "<<numero<<" es impar"<<endl;
		
		if(numero % 3 == 0){
			
			cout<<"El numero "<<numero<<" es multiplo es 3"<<endl;
		}
		else{
			
			cout<<"El numero "<<numero<<" no es multiplo de 3"<<endl;
			
		}
	}
	
	return 0;
}
