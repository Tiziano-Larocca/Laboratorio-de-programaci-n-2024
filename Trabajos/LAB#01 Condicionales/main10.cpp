#include <iostream>
using namespace std;
int numero;
int dgt_1;
int dgt_2;
int SUMA;

int main(int argc, char** argv) {
	
	cout<<"Ingrese un numero"<<endl;
	cin>>numero;
	cout<<"El numero que ingreso es "<<numero<<endl;
	
	if(numero > 9 && numero <= 99){
		dgt_1 = numero / 10;
		dgt_2 = numero % 10;
		SUMA =  dgt_1 + dgt_2;
		cout<<"La suma de los 2 digitos es "<<SUMA<<endl;
		
		if(dgt_1 % 2 == 0){
			cout<<dgt_1<<" es par"<<endl;
		}
		else{
			cout<<dgt_1<<" es impar"<<endl;
		}
		if(dgt_2 % 2 == 0){
			cout<<dgt_2<<" es par"<<endl;
		}
		else{
			cout<<dgt_2<<" es impar"<<endl;
		}
	}
	
	return 0;
}
