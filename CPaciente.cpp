
#include "CPaciente.h"
CPaciente::CPaciente(string nombre1, string apellido1, string fechaNacimiento1, string dni1, string sexo1, int edad1,
                     double peso, double talla) {
    this->nombre = nombre1;
    this->apellido = apellido1;
    this->fecha_nacimiento = fechaNacimiento1;
    this->dni = dni1;
    this->sexo =sexo1;
    this->edad = edad1;
    this->peso = peso;
    this->talla = talla;
}

void CPaciente::informacion() {
    cout << "Nombre :" << nombre<<endl;
    cout << "Apellido :"<<apellido<<endl;
    cout << "Fecha_nacimiento :"<<fecha_nacimiento<<endl;
    cout << "Dni :"<<dni<<endl;
    cout << "Sexo :"<<sexo<<endl;
    cout << "Edad :"<<edad<<endl;
    cout << "Peso :"<<peso<<endl;
    cout << "Talla :"<<talla<<endl;
}

string CPaciente::get_dni() {
    return this->dni;
}

CPaciente::CPaciente() {

}
