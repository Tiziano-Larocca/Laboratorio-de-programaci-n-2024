#include <iostream>
#include <fstream>
using namespace std;

struct student{
	
	int id;
	string name;
	float note;
	
};

int cont = 0;

void viewStudents();

int main(int argc, char** argv) {

	ofstream study;
	study.open("Students.txt");
	int quantity;
	
	cout<<"Ingrese la cantidad de alumnos a cargar: "<<endl;
	cin>>quantity;
	
	student students[quantity];
	
	if(study.fail()){
		
		cout<<"Error de apertura del archivo"<<endl;
		
	}
	
	for(int i = 0; i < quantity; i++){
	
		if(!study.eof()){
		
			cout<<"Ingrese el nombre del estudiante:"<<endl;
			cin.ignore();
			getline(cin, students[cont].name);
			
			do{
				
				cout<<"Ingrese la ID del estudiante: "<<endl;
				cin>>students[cont].id;	
				
				for(int i = 0; i < cont; i++){
					
					if(students[i].id == students[cont].id){
						
						cout<<"No pueden haber ID's iguales"<<endl;
						students[cont].id = 1000;
						break;
						
					}
				}
				
			}while(students[cont].id >= 1000 || students[cont].id < 100);
			
			do{
				
				cout<<"Ingrese la nota del estudiante (Entre 1 y 10):"<<endl;
				cin>>students[cont].note;
				
			}while(students[cont].note < 1 || students[cont].note > 10);
			
			cout<<"Estudiante cargado con exito"<<endl;
			
			study<<"Estudiante (ID): "<<students[cont].id<<endl;
			study<<"Nombre: "<<students[cont].name<<endl;
			study<<"Nota: "<<students[cont].note<<endl;
			
			cont++;
		} 
	}
	cout<<"Alumnos:"<<endl;
	viewStudents();
	
	return 0;
}

void viewStudents(){
	
	ifstream study;
	study.open("Students.txt");
	string linea;
	
	while(getline(study, linea)){
		
		cout<<linea<<endl;
		
	}	
	study.close();
	
}
