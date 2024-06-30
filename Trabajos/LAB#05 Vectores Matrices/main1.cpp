#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argf){
	
	srand(time(NULL));
	const int F = 5;
	const int C = 5;
	int vec[C][F];
	int f;
	int c;
	float suma = 0;
	float prom = 0;
	
	for(f = 0; f < 5; f++){
		
		for(c = 0; c < 5; c++){
			
			vec[c][f] = 1 + rand() % 100;
			cout<<vec[c][f]<<"\t";
			suma = suma + vec[c][f];
		}
		
		cout<<endl;
		
	}
	
	prom = suma / 25;
	cout<<"El promedio general de la matriz es "<<prom<<endl;
	
	return 0;
}
