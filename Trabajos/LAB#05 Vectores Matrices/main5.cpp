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
	int posc = 0;
	int posf = 0;
	int menor = 100;
	
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
			
			vec[c][f] = 1 + rand() % 100;
			cout<<vec[c][f]<<"\t";
		}
		
		cout<<endl;
		
	}
	
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
			
			if(vec[c][f] < menor){
				
				menor = vec[c][f];
				posc = c;
				posf = f;		
				
			}
		}
	}
	
	
	cout<<"El numero menor es "<<menor<<" en la columna "<<posc + 1<<", fila "<<posf + 1<<endl;
	
	return 0;
}
