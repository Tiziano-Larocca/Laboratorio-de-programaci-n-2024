# Test sobre estructuras y arreglos de estructuras
1. Dada la siguiente definición de una estructura de datos, ¿cómo se declara un vector de 10 elementos de tipo `product` y se asignan valores al primer elemento?
```cpp

    struct product {
        int id;
        string name;
        char description[100];
        float price;
        int quantity;
    };
    
```

Para declarar un vector de 10 elementos de tipo `product` y asignar valores a los primeros elementos se hace de la siguiente forma: 

```cpp

    #include <iostream>
    #include <string.h>
    using namespace std;

    struct product {
            
        int id;
        string name;
        char description[100];
        float price;
        int quantity;
            
        };
            

    int main(int argc, char** argv) {
            

        struct product p[10];
        p[0].id = 10;
        p[0].name = "Coca Cola";
        strcpy(p[0].description, "Coca Cola 500 pesos"); //La función "strcpy" copia en una cadena el contenido de otra.
        p[0].price = 500;
        p[0].quantity = 50;
            
        cout<<p[0].id<<endl;
        cout<<p[0].name<<endl;
        cout<<p[0].description<<endl;
        cout<<p[0].price<<endl;
        cout<<p[0].quantity<<endl;
            
        return 0;
    }
        
```

2. Indique qué afirmación en relación con el siguiente programa es correcta:

```cpp

    struct person {
        char name[50];
        int age;
    };

    struct filming {
        char place[50];
        float budget;
    };

    struct movie {
        struct person director;
        struct person actor1;
        struct person actor2;
        struct filming location;
    };

```

* a) Se producirá un error de compilación porque la estructura `person` está repetida
en tres miembros de la estructura `movie`.
* b) Se produce un error de compilación porque un miembro de una estructura no
puede ser otra estructura.
* c) La  sentencia `strcpy(my_movie.director.name, "Federico Fellini");`genera un error en tiempo de compilación.
* d) Todas las afirmaciones anteriores son falsas. **Esta afirmación es correcta**

El programa no tira errores al compilar el programa ni por la estructura "person" repetida ni por tener estructuras dentro de otras. Lo único que faltaría en este código es la línea "movie my_movie". Lo que hace esto es crear una instancia de la estructura "movie", esto es necesario para acceder a los miembros de la estructura.

3. Utilizando la estructura del punto 1a, analizá el siguiente programa.

```cpp

    cout << "enter product: " << endl;
    struct product p1;
    cout <<"enter id" << endl;
    cin >> p1.id;
    cout << "enter name" << endl;
    getline(cin, p1.name);
    cout << "enter description" << endl;
    cin.getline(p1.description, 100);
    cout << "enter price" << endl;
    cin >> p1.price;
    cout << "enter quantity" << endl;
    cin >> p1.quantity;
    cout << p1.id << endl;
    cout << p1.name << endl;
    cout << p1.description << endl;
    cout << p1.price << endl;
    cout << p1.quantity << endl;
    cout << "------------------" << endl;

```
* Ejecuta el codigo en el compilador
* Funciona correctamente? **No**
* En caso que no funcione, dar una solucion y fundamentarla.

El problema es que el programa no lee el nombre del producto. Esto se solucionaría con un "cin.ignore();" antes del "getline(cin, p1.name);". El "cin.ignore()" lo que hace es eliminar e ignorar el salto de línea (limpia el buffer). Esto lo hace ya que la función "getline" lee desde el buffer hasta un salto de línea. Si hay un salto de línea la función lo detecta y considera que no hay más datos para leerse.

# Ejercicio práctico
Te piden que realices un programa para la gestion de una biblioteca.
Los datos de los libros son los siguiente:
* título
* autor
* ISBN (cadena de 17 caracteres) 
* prestado (true/false)

Escribir el programa en C++ que:

* Defina una estructura para almacenar los datos de cualquier libro.
* Ingresa los datos de 2 libros por teclado y almacenarlos en un arreglo
* Verificar que los datos ingresados no representan ejemplares de un mismo tipo
* Imprimir los datos por pantalla

#### ***Nota*** 
Utilizar funciones para todas las operaciones

```cpp

    #include <iostream>
    #include <string.h>
    using namespace std;

    struct libro{
        
        string titulo;
        string autor;
        char ISBN[18];
        bool prestado;
        
    };

    void libros(struct libro &li);

    void mostrarDatos(struct libro &libro);

    bool librosIguales(const libro &libro1, const libro &libro2);

    int main(int argc, char** argv) {
        
        libro losLibros[2];
        
        cout<<"Ingrese los datos del primer libro"<<endl;
        libros(losLibros[0]);
        cout<<"Ingrese los datos del segundo libro"<<endl;
        libros(losLibros[1]);
        
        if(librosIguales(losLibros[0], losLibros[1])){
            
            cout<<"Error, el codigo de barra es el mismo"<<endl;
            
        }
        cout<<endl;
        cout<<"-----   Datos de los libros   -----"<<endl;
        cout<<endl;
        
        mostrarDatos(losLibros[0]);
        cout<<endl;
        mostrarDatos(losLibros[1]);
        
        return 0;
    }

    void libros(struct libro &li){
        
        cout<<"-----   LIBRO   -----"<<endl;
        cout<<"Ingrese el titulo del libro"<<endl;
        getline(cin, li.titulo);
        cout<<"Ingrese el nombre del autor"<<endl;
        getline(cin, li.autor);
        cout<<"Ingrese su ISBN"<<endl;
        cin.getline(li.ISBN, 18);
        cout<<"Es prestado el libro? (1 para si, 0 para no)"<<endl;
        cin>>li.prestado;
        cin.ignore();
        
    }

    bool librosIguales(const libro &libro1, const libro &libro2){
        
        return (strcmp(libro1.ISBN, libro2.ISBN) == 0); //Comparar los codigos de barra.
    }	

    void mostrarDatos(struct libro &lib){
        
        cout<<"Titulo: "<<lib.titulo<<endl;
        cout<<"Autor: "<<lib.autor<<endl;
        cout<<"ISBN: "<<lib.ISBN<<endl;
        cout<<"Prestado: "<<(lib.prestado ? "Si" : "No")<<endl; //El "?" esta para preguntar por una condicion. Luego segun esa condicion se hacen distintas expresiones: "Si" o "No".
        
    }

```