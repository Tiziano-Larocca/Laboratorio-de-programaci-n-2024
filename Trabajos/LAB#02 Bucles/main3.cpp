#include <iostream>

using namespace std;

bool divisible(int, int);

int main(int argc, char** argv) {
	
	int num1;
	int num2;
	
	cout<<"Ingrese dos numeros"<<endl;
	
	cin>>num1;
	cin>>num2;
	
	cout<<divisible(num1, num2);
	
	return 0;
}

bool divisible(int a, int b){
	
	bool funcion;
	
	if(a % b == 0 || b % a == 0){
		
		funcion = true;
		
	}
	else{
		
		funcion = false;
		
	}
	
	return funcion;
	
}
