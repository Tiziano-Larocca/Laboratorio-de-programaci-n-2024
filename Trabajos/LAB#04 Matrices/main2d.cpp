#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	
	srand(time(NULL));
	const int maxf = 4;
	const int maxc = 4;
	int vec[maxc][maxf];
	int f;
	int c;
	int j;
	int orden = 0;
	
	for(f = 0; f < 4; f++){
		
		for(c = 0; c < 4; c++){
			
			vec[c][f] = 1 + rand() % 100;
			cout<<vec[c][f]<<"\t";	
		
		}
		
		cout<<endl;	
					
	}
	
	for(f = 0; f < 4; f++){
		
		for(c = 0; c < 4; c++){
			
			for(j = f + 1; j < 4; j++){
				
				if(c == 3  && vec[c][f] < vec[c][j]){
					
				orden = vec[c][f];
				vec[c][f] = vec[c][j];
				vec[c][j] = orden;
				
				}
			}						
		}
	}
	
	cout<<"COLUMNA 4 DE MAYOR A MENOR:"<<endl;
	
	for(f = 0; f < 4; f++){
		
		for(c = 0; c < 4; c++){
			
			if(c == 3){
			
			cout<<vec[c][f]<<endl;	
			
			}
		}
	}

	return 0;
}

