#ifndef NEURONA_HPP
#define NEURONA_HPP

#include <iostream>
using namespace std;

class Neurona{
private:
    int id;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
    float voltaje;
public:
Neurona(){}
Neurona(int id, int posicion_x, int posicion_y, int red, int green, int blue, float voltaje){
    this -> id = id;
    this -> posicion_x = posicion_x;
    this -> posicion_y = posicion_y;
    this -> red = red;
    this -> green = green;
    this -> blue = blue;
    this -> voltaje = voltaje;
}
void set_id(int dato){
    id = dato;
}

int get_id(){
    return id;
}

void set_posicion_x(int dato){
    posicion_x = dato;
}

int get_posicion_x(){
    return posicion_x;
}

void set_posicion_y(int dato){
    posicion_y = dato;
}

int get_posicion_y(){
    return posicion_y;
}

void set_red(int dato){
    red = dato;
}

int get_red(){
    return red;
}

void set_green(int dato){
    green = dato;
}

int get_green(){
    return green;
}

void set_blue(int dato){
    blue = dato;
}

int get_blue(){
    return blue;
}

void set_voltaje(float dato){
    voltaje = dato;
}

float get_voltaje(){
    return voltaje;
}

friend istream& operator >> (istream& lectura,Neurona& Neur){
    cout << "Digite un Id a la neurona:";
    lectura >> Neur.id;

    cout << "Digite una posicion x:";
    lectura >> Neur.posicion_x;

    cout << "Digite una posicion y:";
    lectura >> Neur.posicion_y;

    cout << "Digite el red:";
    lectura >> Neur.red;

    cout << "Digite green:";
    lectura >> Neur.green;

    cout << "Digite blue:";
    lectura >> Neur.blue;

    cout << "Digite el voltaje:";
    lectura >> Neur.voltaje;

    return lectura;
}

   friend ostream& operator << (ostream& os, Neurona& Neur){
    os << "Id de la Neurona:"<< Neur.get_id();

    os << "posicion en x:" << Neur.get_posicion_x();

    os << "posicion en y:" << Neur.get_posicion_y();

    os << "Red:" << Neur.get_red();

    os << "Green:" << Neur.get_green();

    os << "Blue:" << Neur.get_blue();

    os << "Voltaje:" << Neur.get_voltaje();

    return os;

}

};

#endif

