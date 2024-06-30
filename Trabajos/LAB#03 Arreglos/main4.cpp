#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	
	int alumnos = 0;
	int prom = 0;
	int suma = 0;
	int c_al_bajos = 0;
	int c_al_altos = 0;
	int i = 0;
	srand(time(NULL));
	
	cout<<"Ingrese la cantidad de alumnos del curso"<<endl;
	cin>>alumnos;
	
	int a_alumnos[alumnos]; //definimos un vector con la cantidad de espacios de los alumnos.
	
	for(i = 0; i < alumnos; i++){
		
		a_alumnos[i] = 140 + rand() % 61; //definimos una altura de cada alumno entre 140 y 200 cm.
		suma = suma + a_alumnos[i];
		
	}
	
	prom = suma / alumnos;
	
	for(i = 0; i < alumnos; i++){
		
		if(a_alumnos[i] < prom){ //evaluamos por cada alumno si es mas alto o bajo que el promdedio.
			
			c_al_bajos++;
			
		}
		else{
			
			c_al_altos++;
			
		}
		
	}
	
	cout<<"El promedio de altura son "<<prom<<" cm"<<endl;
	cout<<"La cantidad de alumnos mas altos que el promedio son "<<c_al_altos<<endl;
	cout<<"La cantidad de alumnos mas bajos que el promedio son "<<c_al_bajos<<endl;
	
	
	return 0;
}
