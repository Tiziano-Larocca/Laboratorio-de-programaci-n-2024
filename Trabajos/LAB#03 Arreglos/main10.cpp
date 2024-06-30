#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(NULL));
	int cont = 0;
	int cont_par = 0;
	int cont_impar = 0;
	int cont_p = 0;
	int cont_n = 0;
	int vec[100];
	int i;
	
	for(i = 0; i < 100; i++){
		
		vec[i] = -100 + rand() % 200; //sacamos numeros entre -100 y 100.
		cout<<vec[i]<<"\t";
		
		if(vec[i] % 2 == 0){
			
			cont_par++;
			
		}
		else{
			
			cont_impar++;
			
		}
		
		if(vec[i] >= 0){
			
			cont_p++;
			
		}
		else{
			
			cont_n++;
			
		}
		
		cont++;
		
	}
	
	cout<<"Hay "<<cont<<" numeros enteros"<<endl;
	cout<<"Hay "<<cont_par<<" numeros pares"<<endl;
	cout<<"Hay "<<cont_impar<<" numeros impares"<<endl;
	cout<<"Hay "<<cont_p<<" numeros positivos"<<endl;
	cout<<"Hay "<<cont_n<<" numeros negativos"<<endl;
	
	return 0;
}
