#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(NULL));
	const int maxf = 3;
	const int maxc = 5;
	int vec[maxc][maxf];
	int suma = 0;
	int f;
	int c;
	
	for(f = 0; f < 3; f++){
		
		for(c = 0; c < 5; c++){
			
			vec[f][c] = 1 + rand() % 100;
			cout<<vec[f][c]<<"\t";
			
			if(c == 0){
				
				suma = suma + vec[f][c];
				
			}	
		}
		
		cout<<endl;
		
	}
	cout<<"La sumatoria de la columna 1 es igual a "<<suma<<endl;
	
	return 0;
}
