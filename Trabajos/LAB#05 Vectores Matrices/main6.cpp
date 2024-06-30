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
	int j;
	int orden = 0;
	
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
			
			vec[c][f] = 1 + rand() % 100;
			cout<<vec[c][f]<<"\t";
			
		}
		
		cout<<endl;
		
	}
	
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
			
			for(j = c + 1; j < 5; j++){
				
				if(f == 1 && vec[c][f] > vec[j][f]){
					
					orden = vec[c][f];
					vec[c][f] = vec[j][f];
					vec[j][f] = orden; 
					
				}	
			} 
		}
	}
	
	cout<<"FILA 2 ORDENADA DE FORMA ASCENDENTE:"<<endl;
	
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
			
			if(f == 1){
				
				cout<<vec[c][f]<<"\t";	
				
			}
		}
	}

	return 0;
}
