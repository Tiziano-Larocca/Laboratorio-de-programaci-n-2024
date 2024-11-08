#include <iostream>
#include <fstream>
using namespace std;

struct student{
	
	int id;
	string name;
	float note;
	
};

int cont = 0;

bool updateStudents();

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
			
		cont++;
	}
	updateStudents();

	return 0;
}

bool updateStudents(){
	
	ifstream study;
	study.open("Students.txt");
	ofstream temp;
	temp.open("temp.txt");

	int aux;
	student tempStu;
	bool found = false;
	
	if(study.fail() || temp.fail()){
		
		cout<<"Error de apertura del archivo"<<endl;
		return false;
		
	}
	
	cout<<"Ingrese la ID del estudiante a actualizar: ";
	cin>>aux;
	
	while(study>>tempStu.id>>tempStu.name>>tempStu.note){
		
		if(tempStu.id == aux){
			
			cout<<"Ingrese el nuevo nombre del estudiante: ";
			cin.ignore();
			getline(cin, tempStu.name);
			cout<<"Ingrese la nueva nota del estudiante: ";
			cin>>tempStu.note;
			found = true;
			
		}
		
		temp<<tempStu.id<<" "<<tempStu.name<<" "<<tempStu.note<<endl;
		
	}
	
	study.close();
	temp.close();
	
	if(found){
		
		remove("Students.txt");
		rename("temp.txt", "Students.txt");
		cout<<"Estudiante actualizado con exito\n";
		
	}else{
		
		remove("temp.txt");
		cout<<"Estudiante con ID "<<aux<<" no encontrado";
		
	}
	return found;
}
