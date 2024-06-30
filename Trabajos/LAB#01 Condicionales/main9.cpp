#include <iostream>
using namespace std;
int num1;
int num2;
int main(int argc, char** argv) {
	
	cout<<"Ingrese 2 numeros"<<endl;
	cin>>num1;
	cin>>num2;
	
	if(num1 > num2){
		cout<<"El numero "<<num1<<" es mayor a "<<num2<<endl;
	}
	
	else{
		
		if(num2 > num1){
			cout<<"El numero "<<num2<<" es mayor a "<<num1<<endl;
		
		}
		
		else{
			cout<<"Ambos numeros son iguales"<<endl;
		}
	}
	
	return 0;
}
