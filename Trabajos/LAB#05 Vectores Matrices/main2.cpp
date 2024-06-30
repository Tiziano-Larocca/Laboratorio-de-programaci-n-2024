#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(NULL));
	const int F = 5;
	const int C = 5;
	int vec[C][F];
	int f;
	int c;
	float suma1 = 0;
	float suma2 = 0;
	float suma3 = 0;
	float suma4 = 0;
	float suma5 = 0;
	
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
			
			vec[c][f] = 1 + rand() % 100;
			cout<<vec[c][f]<<"\t";
			
			switch(c){
				
				case 0:
					
					if(vec[c][f] % 2 == 0){
						
						suma1 = suma1 + vec[c][f];
						
					}
					break;
					
				case 1:
					
					if(vec[c][f] % 2 == 0){
						
						suma2 = suma2 + vec[c][f];
						
					}
					break;
					
				case 2:
					
					if(vec[c][f] % 2 == 0){
						
						suma3 = suma3 + vec[c][f];
						
					}
					break;
					
				case 3:
					
					if(vec[c][f] % 2 == 0){
						
						suma4 = suma4 + vec[c][f];
						
					}
					break;
					
				case 4:
					
					if(vec[c][f] % 2 == 0){
						
						suma5 = suma5 + vec[c][f];
						
					}
					break;			
			}
			
		}
		
		cout<<endl;
		
	}
	
	cout<<"La suma de los pares de la columna 1 es igual a "<<suma1<<endl;
	cout<<"La suma de los pares de la columna 2 es igual a "<<suma2<<endl;
	cout<<"La suma de los pares de la columna 3 es igual a "<<suma3<<endl;
	cout<<"La suma de los pares de la columna 4 es igual a "<<suma4<<endl;
	cout<<"La suma de los pares de la columna 5 es igual a "<<suma5<<endl;

	return 0;
}
