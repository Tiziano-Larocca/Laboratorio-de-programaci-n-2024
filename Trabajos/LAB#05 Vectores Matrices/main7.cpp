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
			
			for(j = f + 1; j < 5; j++){
				
				if(c == 2 && vec[c][f] < vec[c][j]){
					
					orden = vec[c][f];
					vec[c][f] = vec[c][j];
					vec[c][j] = orden; 
					
				}	
			} 
		}
	}
	
	cout<<"COLUMNA 3 ORDENADA DE FORMA DESCENDENTE:"<<endl;
	
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
			
			if(c == 2){
				
				cout<<vec[c][f]<<endl;	
				
			}
		}
	}

	return 0;
}
