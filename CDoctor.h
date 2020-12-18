#ifndef CLINICABRISSA_CDOCTOR_H
#define CLINICABRISSA_CDOCTOR_H

#include "CEspecialidad.h"
#include "CPersona.h"

class CDoctor : public CPersona{
private:
    CEspecialidad * especialidad;
public:
    CDoctor();
    CDoctor(string nombre1, string apellido1, string fecha_nacimiento1, string dni1, string sexo1, int edad1, CEspecialidad *especialidad1);
    CEspecialidad * get_especialidad();
    void informacion() override ;
};


#endif //CLINICABRISSA_CDOCTOR_H
