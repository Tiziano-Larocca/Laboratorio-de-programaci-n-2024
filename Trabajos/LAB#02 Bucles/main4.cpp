#include <iostream>

using namespace std;

bool vocal (char);

int main(int argc, char** argv) {
	
	char letra;
	
	cout<<"Ingrese una letra: "<<endl;
	cin>>letra;
	
	cout<<vocal(letra);
	
	return 0;
}

bool vocal(char letra){
	
	bool caracter;

	switch(letra){

		case 'A':

			caracter = true;
			break;

		case 'E':

			caracter = true;
			break;

		case 'I':

			caracter = true;
			break;

		case 'O':

			caracter = true;
			break;

		case 'U':

			caracter = true;
			break;

		case 'a':

			caracter = true;
			break;

		case 'e':

			caracter = true;
			break;

		case 'i':

			caracter = true;
			break;

		case 'o':

			caracter = true;
			break;

		case 'u':

			caracter = true;
			break;
			
		default:

			caracter = false;
			break;

	}

	return caracter;
}
