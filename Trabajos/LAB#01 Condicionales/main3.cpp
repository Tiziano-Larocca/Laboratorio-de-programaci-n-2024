#include <iostream>
using namespace std;
int num1;
int num2;
int main(int argc, char** argv) {
	cout<<"Ingrese  2 numeros"<<endl;
	cin>>num1;
	cin>>num2;
	
	if((num1 % num2) == 0){
		cout<<"El numero "<<num1<<" es divisible por el numero "<<num2<<endl;
	}
	else{
		cout<<"El numero "<<num1<<" no es divisible por el numero "<<num2<<endl;
	}
	
	return 0;
}
