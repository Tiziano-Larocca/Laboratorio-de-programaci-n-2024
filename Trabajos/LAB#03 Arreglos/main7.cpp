#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int v[20];
	int numero;
	int cont = 0;
	int i;
	
	do{
		
		cout<<"Ingrese un numero"<<endl;
		cin>>numero;
		v[21 - i] = numero;
		cont++;
		i++;
			
	}while(numero != 0 && cont < 20);
	
	for(i = cont; i > 0; i--){
		
		if(v[i] == 0){
			
			cout<<""<<endl;
			
		}
		else{
			
			cout<<v[i]<<endl;
			
		}	
	}
	
	return 0;
}
