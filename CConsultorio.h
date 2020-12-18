#ifndef CLINICABRISSA_CCONSULTORIO_H
#define CLINICABRISSA_CCONSULTORIO_H


#include "CDoctor.h"

class CConsultorio {
private:
    string nombre;
    CDoctor * doctor;
public:
    CConsultorio();
    CConsultorio(string nombre);
    CConsultorio(string nombre, CDoctor * doctor1);
    void informacion();
    CDoctor * get_doctor();
};


#endif //CLINICABRISSA_CCONSULTORIO_H
