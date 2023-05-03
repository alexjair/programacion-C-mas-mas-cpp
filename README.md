# <h1>🎭 Programación C++ cpp</h1>
**Lenguajes de Programación** más versátiles **(C++)** y maduros de la industria. Ya sean videojuegos, backend o hardware **C++** está presente.  Aprende a desarrollar la estructura básica de un programa y codifica tus primeras líneas para después ser compiladas directamente desde la termina con Visual Studio CODE.
<h2> Contacto: Alexander Jair Rojas Paria - alexjair@gmail.com</h2> 
<br>
<br>
<!-- Output copied to clipboard! -->

<!-- You have some errors, warnings, or alerts. If you are using reckless mode, turn it off to see inline alerts.
* ERRORs: 0
* WARNINGs: 0
* ALERTS: 3 -->


# 🙂 Curso de C++ Básico


# Tipos de datos



* **Bool **(Boolean):
    * Valor logico
    * Puede ser Verdadero o Falso
    * Tamaño de 4 bytes
* **Int **(Integer):
    * Numero enteros
    * Tamaño: 4 Bytes
* **Float**:
    * Numeros de decimales (punto flotante)
    * Tamaño: 4 bytes
* **Double**:
    * Numeros de punto flotante de doble precision
    * Tamaño: 8 bytes (4+4 = doble flotante)
* **Char **(Character):
    * Caracter (ASCII)
    * Muestra el caracter o su numero en ASCII
    * Tamaño: 4 bytes \
.

También tenemos:



* Short Int
* Unsign Int
* Long Double


![alt_text](images/image1.jpg "image_tooltip")



# Listas y Constantes

#**include** &lt;iostream>

**using namespace std;**

**int main() {**

    // Se imprime el Hola Mundo

**    cout &lt;< "Hola Mundo \n";**

    //Variables enteras

**    int edad = 0;       **

//Se declara una variable indicando el tipo, nombre y valor inicial 

 **   cout &lt;< "El valor inicial de la edad es: " &lt;< edad &lt;< endl;**

**    edad = 18;      **

//Se cambia el valor de la variable 

  **  cout &lt;< "El valor final de la edad es: " &lt;< edad &lt;< endl;**

    

    //Constantes

**    const char letra = 'A';     **

//Se declara con la palabra const, no se puede cambiar

   ** cout &lt;< "El valor de la letra es "&lt;< letra &lt;< endl;**

    //Listas 

  **  int lista_edades[] = { 18, 24, 16 };    **

//Se indica que es una lista con [] y entre {} van los valores separados por comas

  **  cout &lt;< "El valor de la edad 1 es: " &lt;< lista_edades[1] &lt;< endl;    **

//Se usan índices que empiezan en 0 

 **   lista_edades[1] = 26;       //Se modifica el valor**

**    cout &lt;< "El  nuevo valor de la edad 1 es: " &lt;< lista_edades[1] &lt;< endl;**

**}**




# La libreria iostream

Su nombre completo es Input/Output Stream y su función es manejar el flujo de entrada-salida de datos. \




* **cout**: Flujo de salida, usada para imprimir datos en la pantalla.
* **cin**: Flujo de entrada, usada para ingresar datos al programa, una de las tantas maneras de hacerlo es con el teclado.

**Operadores de direccionamiento**: Son los encargados de comunicar la o las fuentes de información con el objeto, en este caso, **cout **o **cin**. Conformado por el signo de mayor **(>)**, que sería para la entrada de datos y el signo de menor que **(&lt;)**, para la salida de datos.

int **main**() {

	int edad = 0;

	**cout **<&lt; "Edad: ";

	**cin **>> edad;

	**cout **<&lt; "Tu edad es: " &lt;< edad &lt;< **endl**;

}


# **El condicional if**


![alt_text](images/image2.png "image_tooltip")


**#include &lt;iostream>**

**using namespace std;**

// int variable.

**int age;**

**int main() {**

    // The program asks for the user's age.

 **   cout &lt;< "Please, enter your age: ";**

    // User's age is saved in the variable.

 **   cin >> age;**

    /* If the user's age is less than 18,

         he can't vote or if the user's age is

         greater than 40, he can't vote neither. */

 **   if ( age &lt; 18 || age > 40) {**

      **  cout &lt;< "You can't vote" &lt;< endl;**

**    }**

   ** else {**

     **   cout &lt;< "You can vote!" &lt;< endl;    **

**    }     **

**}**


# **El condicional switch**

**#include &lt;iostream>**

**using namespace std;**

**int main() {**

  int option;

  cout &lt;< "Enter one number from 0-2." &lt;< endl; cin >> option;

**  switch (option) {**

**  case 1:**

    cout &lt;< "You select option one." &lt;< endl;

    break;

**  case 2:**

    cout &lt;< "You select option two." &lt;< endl;

    break;

 ** default:**

    cout &lt;< "Incorrect." &lt;< endl;

    break;

**  }**

**}**


# **Ciclo for**

**#include &lt;iostream>**

**using namespace std;**

**int main() {**

  int limit;

  cout &lt;< "Enter the max number: "; cin >> limit;

**  for (int i = 0; i &lt;= limit; i++) {**

    cout &lt;< i &lt;< endl;

**  }**

**}**


# **Ciclos while y do-while**

**#include&lt;iostream>**

using namespace std;

**int main() {**

**    for(;;) {**

        cout &lt;< "Deseas terminar?\n";

        char respuesta;

        cin >> respuesta;

     **   if (respuesta == 'y') {**

            cout &lt;< "Bye bye\n";

            **break**;

        }

 **   }**

**}**

**#include &lt;iostream>**

**using namespace std;**

**int main() {**

    //this is a comment haha

**   while(true){**

       char respuesta;

       cout &lt;< "Deseas terminar?" &lt;< endl;

       cin >> respuesta;

     **  if(respuesta == 'y'){**

           cout &lt;< "bye bye";

           break;

**       }**

   }

    return 0;

**}**


# **funciones**

**#include &lt;iostream>**

**using namespace std;**

//funciones para un cilindro

**float A1**(float r, float h) //funcion numero 1 para el area del rectangulo

{

    float S;

    S = 2*3.1415*r*h;

    return S;

}  

**float A12**(float r, float h) //funcion numero 2 para el area del circulo 

{

    float C;

    C = 2*3.1415*(r*r); 

    return C;

}   

**float V**(float r, float h)

{

    float vol;

    vol = 3.1415*r*r*h;

    return vol;

}

//funciones para un  cubo 

**float S**(float b)

{

    float s;

    s = b*b*6;

    return s;

}

**float A21**(float b)

{

    float a21;

    a21 = b*b*b;

    return a21;

}

//funciones para un prisma

//funciones para una esfera

//funcion principal

**int main**(int argc, char const *argv[])

{

    //usos del switch

    int option;

**    cout &lt;<"ingrese un numero para cada proceso"&lt;<endl;**

**    cout &lt;<"1 para el area, superficie y volumen de un cilindro"&lt;<endl;**

**    cout &lt;<"2 para el area, superficie y volumen de cubo "&lt;<endl;**

**    cout &lt;<"3 para el area, superficie y volumen de prisma"&lt;<endl;**

**    cout &lt;< "4 para el area, superficie y volumen de una esfera"&lt;<endl;**

    cin >> option ;

**    switch (option)**

**    {**

    case 1://cilindro

        float SC, r, h, Vol;

        cout &lt;< "ingrese el valor del radio r"&lt;< endl;

        cin>>r;

        cout&lt;<"ingrese el valor de la altura"&lt;<endl;

        cin>>h;

        SC = **A1**(r, h) + A12(r,h);//ponemos entre parentesis las variables que ingresamos 

        cout &lt;< "la superficie del cilindro es: " &lt;< SC &lt;< endl;

        Vol = **V**(r,h);

        cout &lt;< "el volumen del cilindro es:"&lt;< Vol &lt;< endl;

        break;

    case 2: //cubo

        float v2, b, s2;

        cout &lt;< "ingrese el valor de la base b"&lt;< endl;

        cin>>b;

        s2 = **S**(b);//ponemos entre parentesis las variables que ingresamos 

        cout &lt;< "la superficie del cubo es: " &lt;< s2 &lt;< endl;

        v2 = **A21**(b);

        cout &lt;< "el volumen del cubo es:"&lt;< v2 &lt;< endl;

        break;

    case 3: //prisma

        cout &lt;<"option 3";

        break;

    case 4: //esfera

        break;

    default:

        cout &lt;<"opcion no valida";

        break;// los breaks terminan al switch 

    }

    return 0;

**}**


# **Biblioteca estandar de C++**


![alt_text](images/image3.png "image_tooltip")


**#include &lt;iostream>**

**#include &lt;string>**

using namespace std;

/* Para poder usar cadenas de texto tenemos la libreria string que nos permite hacer cadenas de texto con mayor facilidad */

**int main()**

**{**

    string texto = "Hola mundo!";

   ** cout &lt;< texto.size()** &lt;< endl; 

/* Así se obtiene el size de la cadena de texto */

    string textonum = "10";

 **   cout &lt;< stoi(textonum) **<&lt; endl; 

/* Así se convierte una cadena de texto valido como número, y devuelve  un entero */

    string textoflo = "10.5";

   ** cout &lt;< stof(textoflo**) &lt;< endl; 

/* Así se convierte una cadena de texto valido como número flotante, y devuelve un flotante */

**}**

