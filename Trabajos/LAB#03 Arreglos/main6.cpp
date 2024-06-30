#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int vec[10];
	int suma = 0;
	int cont_15 = 0;
	int i;
	
	for(i = 0; i < 10; i++){
		
		cout<<"Ingrese un numero"<<endl;
		cin>>vec[i];
		suma = suma + vec[i];
		if (vec[i] > 15){
			
			cont_15++;
			
		}
		
	}
	
	cout<<"La suma de los numeros ingresados es igual a "<<suma<<endl;
	
	if(cont_15 == 0){
		
		cout<<"No hay numeros mayores que 15"<<endl;
		
	}
	else if(cont_15 == 1){
		
		cout<<"Hay "<<cont_15<<" numero mayor que 15"<<endl;
		
	}
	else{
		
		cout<<"Hay "<<cont_15<<" numeros mayores que 15"<<endl;
		
	}
	
	
	return 0;
}
