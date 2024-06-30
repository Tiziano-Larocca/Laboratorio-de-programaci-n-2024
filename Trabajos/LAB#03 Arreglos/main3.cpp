#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	
	int valores[100];
	int num;
	int repe;
	srand(time(NULL)); //funcion puesta para que no se repitan los mismos numeros random.
	
	for(int i = 0; i < 100; i++){
		
		valores[i] = rand() % 101; //crear valores entre 0 y 100.
		
	}
	
	cout<<"Ingrese un numero aleatorio entre 0 y 100"<<endl;
	cin>>num;
	
	while(num < 0 || num > 100){
		
		cout<<"Ingrese un numero aleatorio entre 0 y 100"<<endl;
		cin>>num;
		
	}
	
	for(int i = 0; i < 100; i++){
		
		if(num == valores[i]){
			
			repe++; //si el numero se repite, sumamos uno a la variable.
			
		}		
	}
	if(repe == 1){
		 
		cout<<"Su numero se repitio una vez"<<endl;
		
	}
	else if(repe > 0){
		
		cout<<"Su numero se repitio "<<repe<<" veces"<<endl; 
		
	}
	else{
		
		cout<<"Su numero no se repitio"<<endl;
		
	}
	
	return 0;
}
