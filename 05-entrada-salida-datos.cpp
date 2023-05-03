#include<iostream>
#include<string>
using namespace std; 

int main(){
    int age;
    string country;
    string name;
    
    cout << "Nombre: "; getline(cin,name);
    cout << "Pais: "; getline(cin,country);
    cout << "Edad: "; cin >> age;

    cout << "Hola, soy " << name << " de " << country << " y tengo " << age << endl;
} 