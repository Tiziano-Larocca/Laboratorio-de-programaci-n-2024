# Manipulación de cadenas en C++
**Alumno:** Tiziano Larocca


**Profesor:** Vicente Cersosimo


**Curso:** 5to 4ta


**Fecha:** 31 / 07 / 2024


## 1. Introducción

Una cadena de caracteres en C++ es una secuencia de caracteres. Por ejemplo de tipo char, terminados con el carácter nulo, es decir el valor numérico 0. Internamente, en el ordenador, se almacenan en posiciones consecutivas de memoria. Como otra opción principal tenemos al string, siendo más moderno y mas sencillo de utilizar.

La diferencia entre el char y el string es que el primero se maneja mediante el uso de memoria, donde cada letra debe tener su propio espacio. En cambio, el string directamente representa una cadena de caracteres y segun su contenido gestionará el uso de la memoria. Pero puede esta gestión en algunos casos puede causar una sobrecarga en la memoria porque además de almacenar los caracteres, también gestiona metadatos adicionales como la capacidad y la longitud del string. Si al string le queremos asignar una palabra el programa sólo deberá leerla.   

## 2. Declaración e inicialización de cadenas

### Declaración e inicialización con la función "char[]"

```cpp
#include <iostream>
using namespace std;

int main(){

    //Definición e inicialización de valores.
    char palabra[5] = {'H', 'o', 'l', 'a', '\0'};
    char palabra2[] = "Chau"; 

    cout<<palabra[5]<<endl;
    cout<<palabra2[]<<endl;

    //Las cuatro primeras posiciones se usan para almacenar los caracteres "HOLA" y la posición extra, para el carácter nulo.

}

```

    Hola
    Chau

### Declaración e inicialización con la función "string"

```cpp
#include <iostream>
using namespace std;

int main(){

    //Definición e inicialización.
    string palabra = "HOLA"; //La palabra se almacenara en la variable. 

    cout<<palabra<<endl;

}
```

    HOLA

## 3. Concatenación de cadenas

### Concatenación de cadenas con la función "char[]"
La función strcat de la biblioteca "cstring" sirve para concatenar cadenas de texto. La función strcat concatena la cadena de destino con la cadena de origen y se utiliza generalmente con arrays de caracteres.

```cpp

    #include <iostream>
    #include <cstring> //Para la función strcat.
    using namespace std;

    int main() {
        //Definir dos arrays de caracteres.
        char saludo[50] = "Hola, "; //Asegúrate de que el tamaño sea suficiente para almacenar el resultado.
        char nombre[] = "Mundo!";

        //Concatenar nombre a saludo.
        strcat(saludo, nombre);

        //Imprimir el resultado.
        cout<<saludo<<endl; //Imprimirá por pantalla "Hola, Mundo!".

        return 0;
    }

```

    Hola, Mundo!

### Concatenación de cadenas con la función "string"
El string proporciona una forma mas sencilla para concatenar. Simplemente usaremos el operador "+".

```cpp

    #include <iostream>
    using namespace std;

    int main() {
        //Definir dos cadenas usando string.
        string saludo = "Hola, ";
        string nombre = "Mundo!";

        //Concatenar las cadenas usando el operador +.
        string mensaje = saludo + nombre;

        //Imprimir el resultado
        cout<<mensaje<<endl; //Imprimirá por pantalla "Hola, Mundo!".

        return 0;
    }

```

    Hola, Mundo!

## 4. Longitud de una cadena

### Obtener la longitud de cadena usando las funciones "char[]" y "strlen"

La función "strlen" sirve para obtener la longitud de la cadena tipo char en este caso.

```cpp

    #include <iostream>
    #include <cstring> //Necesario para la función strlen.
    using namespace std;

    int main() {
        //Declara e inicializa un arreglo de caracteres.
        char cadena[] = "Hola, mundo!"; 

        //Usa la función strlen para obtener la longitud de la cadena.
        int longitud = strlen(cadena); 

        //Imprime la longitud de la cadena.
        cout<<"La longitud de la cadena es: "<<longitud<<endl;

        return 0;
    }

```

    La longitud de la cadena es: 12

### Obtener la longitud de cadena usando las funciones "string" y "length"

La función "length" funciona muy similar a la función anterior. Sirve para obtener la longitud de la cadena tipo string en este caso.

```cpp

    #include <iostream>
    #include <cstring> //Necesario para la función.
    using namespace std;

    int main(int argc, char *argv[]) {

        string str1 = "Hola";

        cout<<"string: "<<str1<<endl;

        //Imprime la longitud de la cadena. En la misma linea se obtiene el valor de esta.
        cout<<"length: "<< str1.length()<<endl;

        return 0;
    }

```

    string: Hola
    length: 4

## 5. Subcadenas

### Obtener una subcadena usando las funciones "substr" y "string"

La función "substr" sirve para obtener una subcadena, esta función se usa con las posiciones de la cadena. Primero le indicaremos donde comienza y luego la longitud. Es decir, hasta donde se ejecutará.

```cpp

    #include <iostream>
    #include <cstring>
    using namespace std;

    int main() {

        string texto = "Hola, mundo!";

        //Obtener una subcadena comenzando en la posición 7 con una longitud de 5 caracteres.
        string subcadena = texto.substr(7, 5);

        //Imprimir la subcadena.
        cout<<"La subcadena es: "<<subcadena<<endl;

        //Imprimir la subcadena completa (Todo el texto).
        cout<<"La subcadena completa es: "<<texto<<endl;

        return 0;
    }

```

    La subcadena es: undo!
    La subcadena completa es: Hola, mundo!

## 6. Comparación de cadenas

### Comparación de cadenas usando las funciones "char[]" y "strcmp"

La función strcmp compara el contenido entre cadenas y mediante valores numéricos indica que tan diferente son: Si da un resultado igual a 0 las cadenas son iguales, si es menor a 0 la cadena 1 es menor a la cadena 2 y si el resultado es mayor a 0 la cadena 1 será mayor a la cadena 2. Es decir, son diferentes.

```cpp

    #include <iostream>
    #include <cstring>
    using namespace std;

    int main() {

        //Declara e inicializa dos arreglos de caracteres.
        char cadena1[] = "Hola";
        char cadena2[] = "Hola";
        char cadena3[] = "Mundo";

        //Compara cadena1 y cadena2.
        int resultado1 = strcmp(cadena1, cadena2);

        if (resultado1 == 0) {

            cout<<"cadena1 y cadena2 son iguales."<<endl;

        } else if (resultado1 < 0) {

            cout<<"cadena1 es menor que cadena2."<<endl;

        } else {

            cout<<"cadena1 es mayor que cadena2."<<endl;

        }

        //Compara cadena1 y cadena3.
        int resultado2 = strcmp(cadena1, cadena3);

        if (resultado2 == 0) {

            cout<<"cadena1 y cadena3 son iguales."<<endl;

        } else if (resultado2 < 0) {

            cout<<"cadena1 es menor que cadena3."<<endl;

        } else {

            cout<<"cadena1 es mayor que cadena3."<<endl;

        }

        return 0;
    }
```

    cadena1 y cadena2 son iguales.
    cadena1 es menor que cadena3.

### Comparación de cadenas usando la función "string" y los operadores relacionales

Los operadores relacionales se utilizan de manera muy sencilla: sólo debemos comparar entre cadenas con la función if.

```cpp

    #include <iostream>
    #include <cstring>
    using namespace std;

    int main() {

        //Declara e inicializa dos arreglos de caracteres.
        string cadena1 = "Hola";
        string cadena2 = "Hola";
        string cadena3 = "Mundo";

        //Compara cadena1 y cadena2.

        if (cadena1 == cadena2){

            cout<<"cadena1 es igual que cadena2."<<endl;

        } else {

            cout<<"Las cadenas son diferentes."<<endl;

        }

        //Compara cadena1 y cadena3.

        if (cadena1 == cadena3){

            cout<<"cadena1 es igual que cadena3."<<endl;

        } else {

            cout<<"Las cadenas son diferentes."<<endl;

        }

        return 0;
    }
```

    cadena1 es igual que cadena2.
    Las cadenas son diferentes.

## 7. Otras Operaciones Útiles

### Convertir una cadena de mayúsculas a minúsculas o viceversa con las funciones "string", "toupper" y "tolower"

La función "tolower" sirve para convertir cadenas de mayúsculas a minúsculas, en cambio, la función "toupper" es al revés; convierte cadenas de minúsculas a mayúsculas.

```cpp

    #include <iostream>
    #include <cctype>  //Función necesaria para toupper y tolower.
    using namespace std;

    int main() {

        string textoMayusculas = "HOLA, MUNDO!";
        string textoMinusculas = "hola, mundo!";

        //Convertir a minúsculas usando un bucle for.
        for(int i = 0; i < textoMayusculas.size(); ++i){ //El ".size()" sirve para conseguir el tamaño de la cadena.

            textoMayusculas[i] = tolower(textoMayusculas[i]);
            
        }
        cout<<"Texto en minúsculas: "<<textoMayusculas<<endl;

        //Convertir a mayúsculas usando un bucle for.
        for(int i = 0; i < textoMinusculas.size(); ++i){

            textoMinusculas[i] = toupper(textoMinusculas[i]);

        }
        cout<<"Texto en mayúsculas: "<<textoMinusculas<<endl;

        return 0;
    }

```

    Texto en minsculas: hola, mundo!
    Texto en maysculas: HOLA, MUNDO!

### Buscar caracteres o subcadenas en un string con la función "find"

La función find sirve para encontrar la primera aparición de un carácter o subcadena dentro de una cadena. Si encuentra alguno de estos, devuelve la posición de la primera aparición.

```cpp

    #include <iostream>
    using namespace std;

    int main() {

        string texto = "Hola, mundo!";
        
        //Buscar el carácter 'm'.
        int posicion = texto.find('m');
        
        if (posicion != 'm'){

            cout<<"Carácter 'm' encontrado en la posición: "<<posicion<<endl;

        } else{

            cout<<"Carácter 'm' no encontrado."<<endl;

        }

        //Buscar la subcadena 'ola'. Para buscar subcadenas deben ponerse comillas dobles.
        int posicion_sub = texto.find("ola");
        
        if (posicion_sub != 'ola'){

            cout<<"Carácter 'ola' encontrado en la posición: "<<posicion_sub<<endl;

        } else{

            cout<<"Carácter 'ola' no encontrado."<<endl;

        }

        return 0;
    }

```

    Carcter 'm' encontrado en la posicin: 6
    Carcter 'ola' encontrado en la posicin: 1

### Pasaje de cadenas a funciones

#### Pasaje de cadenas usando char[]

En este código se llama a una función para que imprima la longitud de un texto tipo char[]. 

```cpp

    #include <iostream>
    #include <cstring>
    using namespace std;

    //Función que recibe un puntero a char (equivalente a char[]) es decir, no se modificará la cadena.
    void imprimirLongitud(const char* cadena){
        //Usamos strlen para obtener la longitud de la cadena
        cout<<"La longitud de la cadena es: "<<strlen(cadena)<<endl;
    }

    int main() {
        
        char texto[] = "Hola, mundo!";
        imprimirLongitud(texto); //Llama a la función imprimirLongitud, pasando el arreglo texto como argumento.
        
        return 0;
    }

```

    La longitud de la cadena es: 12

#### Pasaje de cadenas usando string

En este código se llama a la función "imprimirCadena" para que muestre por pantalla el texto del string.

```cpp

    #include <iostream>
    using namespace std;

    //Función que recibe un string por valor.
    void imprimirCadena(string cadena) {
        cout<<"La cadena es: "<<cadena<<endl;
    }

    int main() {
        string texto = "Hola, mundo!";
        imprimirCadena(texto); //Pasar el string a la función.
        
        return 0;
    }

```

    La cadena es: Hola, mundo!

## 8. Conclusión

Tanto la función string como la función char[] son cadenas de carcteres. Sin embargo, por más que sean similares, cada una se diferencia de la otra en algunos aspectos.

Como diferencias principales entre estas funciones podemos mencionar:

### Char[]
* Usa espacios de memoria para cada letra.
* Si o si necesita terminar en caracter nulo (0).
* No es directamente una cadena de caracteres.
* Es una función anticuada para ser una cadena de caracteres.

### string
* Gestiona la memoria segun el contenido de la función.  
* No necesita terminar en caracter nulo (0).
* Es una cadena de caracteres.
* Es una función más moderna y sencilla a comparación del char[].

También se mencionan las ventajas y desventajas de cada función, como por ejemplo:

### Ventajas y desventajas de la función char[]
* Puede manejarse cada caractere como nosotros queramos y de forma sencilla.
* No optimiza la memoria para sus caracteres.
* No es directamente una cadena de caracteres.
* En varios casos requiere más codigo que la función string.

### Ventajas y desventajas de la función string
* Gestiona la memoria según su contenido.
* En varios casos es más sencillo de programar que la función char[].
* No tendremos tanta libertad para manipular los caracteres como el char[].
* En ciertos casos puede utilizar más memoria que la función char[].

Entonces si vamos a trabajar con cadenas de caracteres donde tengamos que manipular cada letra sería mejor usar la función char[], ya que con esta función es más sencillo manipular los caracteres. Ahora, si tenemos que hacer otras cosas como pasar una cadena a función, encontrar una letra o subcadena, obtener la longitud, etc. En mi opinión sería mucho mas sencillo con string. Esto no quita que con la función char[] sea viable, ya que a veces si bien requieren algo más de código que la función string no es algo muy dificil de utilizar.

## Referencias / Fuentes

* ChatGPT
* https://conclase.net/c/curso/cap8#:~:text=Una%20cadena%20en%20C%2B%2B%20es,en%20posiciones%20consecutivas%20de%20memoria.
* https://repositorio.konradlorenz.edu.co/micrositios/001-1618/array_char.html
* https://es.stackoverflow.com/questions/344648/diferencias-entre-stdstring-y-char
* https://www.delftstack.com/es/howto/cpp/length-of-a-string-in-cpp/#utilice-la-funci%c3%b3n-length-para-encontrar-la-longitud-de-una-cadena-en-c
* https://solucioningenieril.com/programacion_en_c/comparacion_de_cadenas_con_funcion_strcmp