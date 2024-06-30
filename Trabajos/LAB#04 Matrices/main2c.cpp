#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(NULL));
	const int maxf = 4;
	const int maxc = 4;
	int vec[maxc][maxf];
	int v[4];
	float prom = 0;
	float suma = 0;
	int cont = 0;
	int cont2 = 0;
	int f;
	int c;
	int i;
	
	for(f = 0; f < 4; f++){
		
		for(c = 0; c < 4; c++){
			
			vec[c][f] = 1 + rand() % 100;
			cout<<vec[c][f]<<"\t";
			
			if(f == 0){
				
				suma = suma + vec[c][f]; 
				cont2++;
				
				if(cont2 == 4){
					
					prom = suma / 4;
					
					for(c = 0; c < 4; c++){
					
						if(vec[c][f] > prom){
							
							cont++;
							v[i] = vec[c][f];
							i++;
							
						}				
					}			
				}
			}
		}
		
		cout<<endl;
		
	}
	
	cout<<"El promedio de la fila 1 es igual a "<<prom<<endl;
	cout<<"Hay "<<cont<< " numero / s mas altos que el promedio:"<<endl;
	
	for(i = 0; i < cont; i++){
		
		cout<<v[i]<<"\t";
		
	}
		
	return 0;
}
