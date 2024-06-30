#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	
	srand(time(NULL));
	const int maxf = 3;
	const int maxc = 5;
	int vec[maxc][maxf];
	int f;
	int c;
	int j;
	int orden = 0;
	
	for(f = 0; f < 3; f++){
		
		for(c = 0; c < 5; c++){
			
			vec[c][f] = 1 + rand() % 100;
			cout<<vec[c][f]<<"\t";	
		
		}
		
		cout<<endl;	
					
	}
	
	for(f = 0; f < 3; f++){
		
		for(c = 0; c < 5; c++){
			
			for(j = f + 1; j < 3; j++){
				
				if(c == 0  && vec[c][f] > vec[c][j]){
					
					orden = vec[c][f];
					vec[c][f] = vec[c][j];
					vec[c][j] = orden;
				
				}
			}						
		}
	}
	
	cout<<"COLUMNA 1 DE MENOR A MAYOR:"<<endl;
	
	for(f = 0; f < 3; f++){
		
		for(c = 0; c < 5; c++){
			
			if(c == 0){
			
			cout<<vec[c][f]<<endl;	
			
			}
		}
	}

	return 0;
}