#include <iostream>
using namespace std;
int numero;
int main(int argc, char** argv) {
	
	cout<<"Ingresa un numero"<<endl;
	cin>>numero;
	
	if(numero > 0){
		cout<<"Tu numero es positivo"<<endl;
	}
	else{
		cout<<"Tu numero es negativo"<<endl;
	}
	
	return 0;
}
