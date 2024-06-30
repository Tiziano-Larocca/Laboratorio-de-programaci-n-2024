#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int val[10];
	float suma = 0;
	float prom = 0;
	int i = 0;
	
	for(i = 0; i < 10; i++){
		
		cout<<"Ingrese un numero"<<endl;
		cin>>val[i];
		suma = suma + val[i];
		
	}
	
	prom = suma / i; 
	cout<<"La sumatoria total es igual a "<<suma<<endl;
	cout<<"El promedio es igual a "<<prom<<endl;
	
	return 0;
}
