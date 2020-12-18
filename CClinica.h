#ifndef CLINICABRISSA_CCLINICA_H
#define CLINICABRISSA_CCLINICA_H

#include "Tipos.h"
#include "CPaciente.h"
#include "CCitas.h"
#include "CSede.h"
class CClinica {
private:
    vector<CPaciente *> pacientes;
    vector<CCitas *> citas;
    vector<CSede* > sedes;
public:
    CClinica();
    void menu();
    void agregar_paciente();
    void reservar_cita();
    void mostrar_citas();
};


#endif //CLINICABRISSA_CCLINICA_H
