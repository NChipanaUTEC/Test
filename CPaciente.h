
#ifndef CLINICABRISSA_CPACIENTE_H
#define CLINICABRISSA_CPACIENTE_H

#include "Tipos.h"
#include "CPersona.h"

class CPaciente : public CPersona{
    double peso, talla;
    //vector< CCIta * > citas;
public:
    CPaciente(string nombre1,string apellido1,string fechaNacimiento1, string dni1,
              string sexo1, int edad1, double peso, double talla);
    void informacion() override;
    string get_dni();
    CPaciente();
};


#endif //CLINICABRISSA_CPACIENTE_H
