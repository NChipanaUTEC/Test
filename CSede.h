#ifndef CLINICABRISSA_CSEDE_H
#define CLINICABRISSA_CSEDE_H
#include "Tipos.h"
#include "CConsultorio.h"
class CSede {
private:
    string nombre;
    vector<CConsultorio *> consultorios;
public:
    CSede();
    CSede(string nombre);
    vector<CConsultorio * > &get_consultorio();
    void agregar_consultorios(CConsultorio * consultorio);
    void agregar_consultorios();
    void informacion();
};


#endif //CLINICABRISSA_CSEDE_H
