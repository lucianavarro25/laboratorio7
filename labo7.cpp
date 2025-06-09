#include <iostream>
using namespace std;
int main (){
    //se quema el numero secreto y se declara la variable opcion
    int numsecreto = 7, opcion;
    //se comienza el do while mostrando el menu de opcion
    do {
        cout << endl << "Selecciona una opcion del menu" << endl;
        cout << "1. Saludar"<< endl;
        cout << "2. Mostrar numero secreto"<< endl;
        cout << "3. Salir"<< endl;
        cin >> opcion;
        //si la opcion es 1 o 2 hace lo que se indica, un saludo o muestra el numero
           if (opcion == 1){
        cout << "Hola"<< endl;
       } else 
if (opcion == 2){
            cout << "El numero secreto es : " << numsecreto << endl;
        }     
    
    } while (opcion != 3);
//mientras la opcion sea diferente de 3 se repetira el menu y si selecciona 3 se sale del menu
    return 0;
}