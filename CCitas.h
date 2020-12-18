#ifndef CLINICABRISSA_CCITAS_H
#define CLINICABRISSA_CCITAS_H


#include "CPaciente.h"
#include "CSede.h"
class CCitas {
private:
    CPaciente * paciente;
    CSede * sede;
    CConsultorio * consultorio;
    string fecha, hora;
public:
    CCitas();
    CCitas(CPaciente * paciente1, CSede *sede1, CConsultorio * consultorio1, string fecha1, string hora1);
    void get_informacion();
};


#endif //CLINICABRISSA_CCITAS_H
