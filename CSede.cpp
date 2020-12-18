#include "CSede.h"

vector<CConsultorio *> &CSede::get_consultorio() {
    return consultorios;
}

void CSede::agregar_consultorios(CConsultorio *consultorio) {
    consultorios.push_back(consultorio);
}

void CSede::agregar_consultorios() {
    string nombre;
    cout << "Nombre del consultorio : ";
}

CSede::CSede() {

}

CSede::CSede(string nombre) {
    this->nombre = nombre;
}

void CSede::informacion() {
    cout << "Nombre : "<<nombre<<endl;
}
