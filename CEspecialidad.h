#ifndef CLINICABRISSA_CESPECIALIDAD_H
#define CLINICABRISSA_CESPECIALIDAD_H
#include "Tipos.h"

class CEspecialidad {
private:
    string nombre;
public:
    CEspecialidad();
    CEspecialidad(string nombre);
    string get_nombre();
};


#endif //CLINICABRISSA_CESPECIALIDAD_H
