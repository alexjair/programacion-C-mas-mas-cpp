#include <iostream>
using namespace std;

int main() {
    //this is a comment haha
   while(true){
       char respuesta;
       cout << "Deseas terminar (y/Y/yes)?" << endl;
       cin >> respuesta;

       if(respuesta == 'y' || respuesta == 'Y' || respuesta == 'yes'){
           cout << "bye bye";
           break;
       }
   }
    return 0;
}
