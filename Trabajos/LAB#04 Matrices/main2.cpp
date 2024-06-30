#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(NULL));
	const int maxf = 4;
	const int maxc = 4;
	int vec[maxc][maxf];
	int f;
	int c;
	
	for(f = 0; f < 4; f++){
		
		for(c = 0; c < 4; c++){
			
			vec[c][f] = 1 + rand() % 100;
			cout<<vec[c][f]<<"\t";
			
			}	
			
		cout<<endl;
			
		}
		
	return 0;
}
