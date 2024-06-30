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
	int aux;
			
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
			
			vec[c][f] = 1 + rand() % 100;
			cout<<vec[c][f]<<"\t";
			
		}
		
		cout<<endl;
		
	}
	
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
				
			if(c == 1){
				
				aux = vec[c][f];	
				vec[c][f] = vec[3][f];
				vec[3][f] = aux;		
						
			}			
		}
	}
	
	cout<<"COLUMNA 2 Y 4 INTERCAMBIADAS:"<<endl;

	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
				
				cout<<vec[c][f]<<"\t";
				
		}
		
		cout<<endl;	
	
	}

	return 0;
}
