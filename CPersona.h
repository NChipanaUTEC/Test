#ifndef CLINICABRISSA_CPERSONA_H
#define CLINICABRISSA_CPERSONA_H

#include "Tipos.h"
class CPersona {
protected:
    string nombre, apellido, fecha_nacimiento, dni, sexo;
    int edad;
public:
    CPersona();
    CPersona(string nombre1, string apellido1, string fecha_nacimiento1, string dni1, string sexo1, int edad1);
    virtual void informacion() = 0;
};


#endif //CLINICABRISSA_CPERSONA_H
