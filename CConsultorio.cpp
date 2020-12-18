
#include "CConsultorio.h"

CDoctor *CConsultorio::get_doctor() {
    return doctor;
}

CConsultorio::CConsultorio() {

}

CConsultorio::CConsultorio(string nombre) {
    this->nombre = nombre;
}

CConsultorio::CConsultorio(string nombre, CDoctor *doctor1) {
    this->nombre = nombre;
    this->doctor = doctor1;
}

void CConsultorio::informacion() {
    cout << "Nombre : " << nombre<<endl;
    cout << "Informacion del Doctor : "<<endl;
    doctor->informacion();
}
