#include "ListaNeurona.hpp"

int main(){

    lista_neurona lista_Neurona;
    string opciones;
   

    while (true){
    
    cout << "\t--MENU--" << endl;
    cout << "Digite (1) para insertar al inicio:" << endl;
    cout << "Digite (2) parainsertar al final:" << endl;
    cout << "Digite (3) para mostrar:" << endl;
    cout << "Digite (4) para salie del programa:" << endl;

    cin >> opciones;

        if (opciones == "1"){
            Neurona NEURONA; 

            cin >>  NEURONA;
            cin.ignore();
          
            lista_Neurona.agregar_inicio(NEURONA);
            cout << endl;
            
        }
        
        else if(opciones =="2"){
            Neurona NEURONA;

            cin >> NEURONA;
            cin.ignore();

            lista_Neurona.agregar_final(NEURONA);
            cout << endl;
            
        } 

        else if(opciones == "3"){
            lista_Neurona.mostrar_lista();
            cout << endl;
            
        }

        else  if(opciones == "4"){
            cout << endl;
            break;
        }
    }


    system("pause");
    return 0;
}