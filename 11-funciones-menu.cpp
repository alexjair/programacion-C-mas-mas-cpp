#include <iostream>
using namespace std;

//funciones para un cilindro
float A1(float r, float h) //funcion numero 1 para el area del rectangulo
{
    float S;
    S = 2*3.1415*r*h;
    return S;
}  
float A12(float r, float h) //funcion numero 2 para el area del circulo 
{
    float C;
    C = 2*3.1415*(r*r); 
    return C;
}   
float V(float r, float h)
{
    float vol;
    vol = 3.1415*r*r*h;
    return vol;
}
//funciones para un  cubo 
float S(float b)
{
    float s;
    s = b*b*6;
    return s;
}
float A21(float b)
{
    float a21;
    a21 = b*b*b;
    return a21;
}
//funciones para un prisma

//funciones para una esfera

//funcion principal
int main(int argc, char const *argv[])
{
    //usos del switch
    int option;
    cout <<"ingrese un numero para cada proceso"<<endl;
    cout <<"1 para el area, superficie y volumen de un cilindro"<<endl;
    cout <<"2 para el area, superficie y volumen de cubo "<<endl;
    cout <<"3 para el area, superficie y volumen de prisma"<<endl;
    cout << "4 para el area, superficie y volumen de una esfera"<<endl;
    cin >> option ;
    switch (option)
    {
    case 1://cilindro
        float SC, r, h, Vol;
        cout << "ingrese el valor del radio r"<< endl;
        cin>>r;
        cout<<"ingrese el valor de la altura"<<endl;
        cin>>h;
        SC = A1(r, h) + A12(r,h);//ponemos entre parentesis las variables que ingresamos 
        cout << "la superficie del cilindro es: " << SC << endl;
        Vol = V(r,h);
        cout << "el volumen del cilindro es:"<< Vol << endl;
        break;
    case 2: //cubo
        float v2, b, s2;
        cout << "ingrese el valor de la base b"<< endl;
        cin>>b;
        s2 = S(b);//ponemos entre parentesis las variables que ingresamos 
        cout << "la superficie del cubo es: " << s2 << endl;
        v2 = A21(b);
        cout << "el volumen del cubo es:"<< v2 << endl;
        break;
    case 3: //prisma
        cout <<"option 3";
        break;

    case 4: //esfera
        break;
    default:
        cout <<"opcion no valida";
        break;// los breaks terminan al switch 
    }
    return 0;
}
