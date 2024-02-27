#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define log(X) cout << X << endl;

class Persona{
    int edad;

public:
    string nombre;
    Persona *ptrMejorAmigo;

    Persona();
    Persona(int edad, string nombre);

    int getEdad();

    /*
    agregar parámetros necesarios para poder recibir una Persona en específico
    y asignarla como mejor amigo. 
    */
    void asignarMejorAmigo(Persona* p);
    
};

int main(){
Persona p1,p2;
p1.nombre = "mario";
p2.nombre = "carlos";

p1.asignarMejorAmigo(&p2);
cout << p1.ptrMejorAmigo->nombre << endl;

int tam;
cin>> tam;
Persona personas[tam];

vector<Persona> gente;
gente.push_back(p1);
gente.push_back(p2);

log(gente[0].nombre);
log(gente[1].nombre);

    return 0;
}

Persona::Persona(){
    this->edad = 0;
    this->nombre = "";
}

Persona::Persona(int edad, string nombre){
    this->edad = edad;
    this->nombre = nombre;
}

int Persona::getEdad(){
    return this->edad;
}

void Persona::asignarMejorAmigo(Persona* p){
 this->ptrMejorAmigo = p;
}