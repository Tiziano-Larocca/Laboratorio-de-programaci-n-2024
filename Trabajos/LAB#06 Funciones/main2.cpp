#include <iostream>

using namespace std;

float maximo(float, float);

int main(int argc, char** argv) {
	
	float num1, num2;
	
	cout<<"Ingrese 2 numeros"<<endl;
	cin>>num1;
	cin>>num2;
	
	cout<<"El numero mas grande es: "<<endl;
	cout<<maximo(num1, num2);
	
	return 0;
}

float maximo(float a, float b){
	
	int mayor;
	
	if(a > b){
		
		mayor = a;
		
	}
	else{
		
		mayor = b;
		
	}
	
	return mayor;
	
}
