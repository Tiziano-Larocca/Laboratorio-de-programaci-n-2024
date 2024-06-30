#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	
	srand(time(NULL));
	const int maxf = 3;
	const int maxc = 5;
	int vec[maxc][maxf];
	int f;
	int c;
	
	for(f = 0; f < 3; f++){
		
		for(c = 0; c < 5; c++){
			
			if(f == 1){
				
				vec[c][f] = 1 + rand() % 100;
				cout<<vec[c][f]<<"\t";
				
			}
			else{
				
				cout<<"X"<<"\t";
				
			}
			
		}
		
		cout<<endl;
		
	}
	
	return 0;
}
