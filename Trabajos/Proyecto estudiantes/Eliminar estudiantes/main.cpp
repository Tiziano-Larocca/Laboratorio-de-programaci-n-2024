#include <iostream>
#include <fstream>
using namespace std;

struct student{
	
	int id;
	string name;
	float note;
	
};

bool deleteStudents();

int main(int argc, char** argv) {

	ofstream study;
	study.open("Students.txt");
	student students;
	int quantity;
	
	cout<<"Ingrese la cantidad de alumnos a cargar: "<<endl;
	cin>>quantity;
	
	if(study.fail()){
		
		cout<<"Error de apertura del archivo"<<endl;
		
	}
	
	for(int i = 0; i < quantity; i++){
		
		cout<<"Ingrese el nombre del estudiante:"<<endl;
		cin.ignore();
		getline(cin, students.name);
			
		do{
				
			cout<<"Ingrese la ID del estudiante: "<<endl;
			cin>>students.id;	
				
		}while(students.id >= 1000 || students.id < 100);
			
		do{
				
			cout<<"Ingrese la nota del estudiante (Entre 1 y 10):"<<endl;
			cin>>students.note;
				
		}while(students.note < 1 || students.note > 10);
			
		cout<<"Estudiante cargado con exito"<<endl;
			
		study<<students.id<<" "<<students.name<<" "<<students.note<<endl;
	
	}
	if(deleteStudents()){
		
		cout<<"Estudiante eliminado con exito\n";
		
	}else{
		
		cout<<"No se ha encontrado la ID del estudiante\n";
		
	}

	return 0;
}

bool deleteStudents(){
	
	ifstream study;
	study.open("Students.txt");
	ofstream temp;
	temp.open("temp.txt");
	
	student delStu;
	int aux;
	bool found = false;
	
	if(study.fail() || temp.fail()){
		
		cout<<"Error ded apertura del archivo"<<endl;
		
	}
	
	cout<<"Ingrese la ID del estudiante a eliminar: ";
	cin>>aux;
	
	while(study>>delStu.id>>delStu.name>>delStu.note){
		
		if(delStu.id == aux){
			
			found = true;
			
		}else{
			
			temp<<delStu.id<<" "<<delStu.name<<" "<<delStu.note<<endl;
			
		}
	}
	
	study.close();
	temp.close();
	
	if(found){
		
		remove("Students.txt");
		rename("temp.txt", "Students.txt");
		
	}else{
		
		remove("temp.txt");
		
	}
	return found;
}
