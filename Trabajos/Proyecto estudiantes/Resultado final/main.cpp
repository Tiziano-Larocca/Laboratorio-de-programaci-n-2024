#include <iostream>
#include <fstream>
using namespace std;

struct student{
	
	int id;
	string name;
	float note;
	
};

int option;

void addStudent();
void viewStudents();
bool equalID(int id);
bool updateStudent();
bool deleteStudent();

int main(int argc, char** argv) {
	
	int option;
	
	do{
		
		cout<<"1. Agregar estudiante"<<endl;
		cout<<"2. Mostrar todos los estudiantes"<<endl;
		cout<<"3. Actualizar estudiante"<<endl;
		cout<<"4. Eliminar estudiantes"<<endl;
		cout<<"0. Para salir"<<endl;
		cout<<"\nIngrese la opcion a elegir: ";
		cin>>option;
		
		switch(option){
		
			case 0:
				
				cout<<"Good bye"<<endl;
				break;
			
			case 1:
				
				addStudent();
				break;
			
			case 2:
				
				viewStudents();
				break;
				
			case 3:
				
				if(updateStudent()){
					
					cout<<"Estudiante actualizado con exito\n";
					
				}else{
					
					cout<<"Estudiante no encontrado\n";
					
				}
				break;
				
			case 4:
			
				if(deleteStudent()){
					
					cout<<"Estudiante eliminado con exito\n";
					
				}else{
					
					cout<<"Estudiante no encontrado\n";
					
				};
				break;
				
			default:
			
				cout<<"Opcion no valida\n";
			 	break;
		}
	}while(option != 0);
	
	return 0;
}

void addStudent(){
	
	ofstream study;
	study.open("Students.txt", ios::app); //Al abrir el archivo en modo "ios::app", los datos se agregan al final del archivo sin eliminar el contenido previo.
	
	student students;
	int quantity;
	
	if(study.fail()){
		
		cout<<"Error de apertura del archivo"<<endl;
		return;
		
	}
	
	cout<<"\nIngrese la cantidad de alumnos a cargar: ";
	cin>>quantity;
		
	for(int i = 0; i < quantity; i++){
		
		cout<<"\nIngrese el nombre del estudiante: ";
		cin.ignore();
		getline(cin, students.name);
				
		do{
					
			cout<<"\nIngrese la ID del estudiante: ";
			cin>>students.id;
			
			if(equalID(students.id)){
				
				cout<<"Estudiante con ID "<<students.id<<" ya existente\n";
				students.id = 1000;
				
			}
					
		}while(students.id >= 1000 || students.id < 100);
				
		do{
					
			cout<<"\nIngrese la nota del estudiante (Entre 1 y 10): ";
			cin>>students.note;
					
		}while(students.note < 1 || students.note > 10);
				
		cout<<"Estudiante cargado con exito\n";
	
		study<<students.id<<" "<<students.name<<" "<<students.note<<endl;
			
		} 
	study.close();
}

void viewStudents(){

	ifstream study;
	study.open("Students.txt");
	string linea;
	
	if(study.fail()){
		
		cout<<"Error de apertura del archivo"<<endl;
		return;
		
	}
	
	while(getline(study, linea)){
		
		cout<<linea<<endl;
		
	}	
	study.close();
}

bool updateStudent(){
	
	ifstream study;
	study.open("Students.txt", ios::in); //ios::in es un modo de apertura que indica que el archivo solo debe abrirse para lectura.
	ofstream temp;
	temp.open("temp.txt");

	student upStu;
	int aux;
	bool found = false;

	if(study.fail() || temp.fail()){
		
		cout<<"Error de apertura del archivo"<<endl;
		return false;
		
	}
	
	cout<<"Ingrese la ID del estudiante a actualizar: ";
	
	do{
		
		cin>>aux;
		
	}while(aux >= 1000 || aux < 100);
	
	while(study>>upStu.id>>upStu.name>>upStu.note){
		
		if(upStu.id == aux){
			
			cout<<"\nIngrese el nuevo nombre del estudiante: ";
			cin.ignore();
			getline(cin, upStu.name);
			
			do{
					
			cout<<"\nIngrese la nueva nota del estudiante (Entre 1 y 10): ";
			cin>>upStu.note;
					
			}while(upStu.note < 1 || upStu.note > 10);
		
			found = true;
			
		}
		
		temp<<upStu.id<<" "<<upStu.name<<" "<<upStu.note<<endl;
		
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

bool deleteStudent(){
	
	ifstream study;
	study.open("Students.txt", ios::in);
	ofstream temp;
	temp.open("temp.txt");
	
	student delStu;
	int aux;
	bool found = false;	
	
	if(study.fail() || temp.fail()){
		
		cout<<"Error de apertura del archivo"<<endl;
		return false;
		
	}
	
	cout<<"Ingrese la ID del estudiante a eliminar: ";
	
	do{
		
		cin>>aux;
		
	}while(aux >= 1000 || aux < 100);
	
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

bool equalID(int id){
	
	ifstream study;
	study.open("Students.txt");
	
	if(study.fail()){
		
		cout<<"Error de apertura del archivo"<<endl;
		return false;
		
	}
	
	student stuID;
	
	while(study>>stuID.id>>stuID.name>>stuID.note){
		
		if(stuID.id == id){
			
			study.close();
			return true;
			
		}
	}
	study.close();
	return false;
}
