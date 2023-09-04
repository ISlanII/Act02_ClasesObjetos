#ifndef LISTANEURONA_HPP
#define LISTANEURONA_HPP
#include "Neurona.hpp"
#include <list>

class lista_neurona{
    private:
    list<Neurona> lista_neuronas;
    public:
    lista_neurona(){}

        void agregar_inicio( Neurona& neurona){
            lista_neuronas.push_front (neurona);
            cout << "Neurona agregada al inicio" << endl;
        }

        void agregar_final( Neurona& neurona){
            lista_neuronas.push_back (neurona);
            cout << "Neurona agregada al final" << endl;
        }

        void mostrar_lista(){
            for (auto it = lista_neuronas.begin(); it != lista_neuronas.end(); it ++)
            {
                cout << "Id:" << (*it).get_id() << endl;
                cout << "Posicion x:" << (*it).get_posicion_x() << endl;
                cout << "Posicion y:" << (*it).get_posicion_y() << endl;
                cout << "Red:" << (*it).get_red() << endl;
                cout << "Green:" << (*it).get_green() << endl;
                cout << "Blue:"<< (*it).get_blue() << endl;
                cout << "Voltaje:" << (*it).get_voltaje() << endl << endl;
            }
        }
};

#endif
