#include <iostream>
using namespace std;
char X;
int main(int argc, char** argv) {
	
	cout<<"Ingrese una letra"<<endl;
	cin>>X;
	
	switch(X){
		case 'A':
			cout<<X<<" es una vocal"<<endl;
			break;
		case 'E':
			cout<<X<<" es una vocal"<<endl;
			break;
		case 'I':
			cout<<X<<" es una vocal"<<endl;
			break;
		case 'O':
			cout<<X<<" es una vocal"<<endl;
			break;
		case 'U':
			cout<<X<<" es una vocal"<<endl;
			break;
		case 'a':
			cout<<X<<" es una vocal"<<endl;
			break;
		case 'e':
			cout<<X<<" es una vocal"<<endl;
			break;
		case 'i':
			cout<<X<<" es una vocal"<<endl;
			break;
		case 'o':
			cout<<X<<" es una vocal"<<endl;
			break;
		case 'u':
			cout<<X<<" es una vocal"<<endl;
			break;
		
		default:
			cout<<X<<" es una consonante"<<endl;
			break;
	}
	
	return 0;
}
