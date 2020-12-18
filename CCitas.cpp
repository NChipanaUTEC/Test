#include "CCitas.h"

void CCitas::get_informacion() {
    cout << "Informacion del Paciente : "<<endl;
    paciente->informacion();
    cout << "Informacion de la Sede : "<<endl;
    sede->informacion();
    cout << "Informacion del Consultorio :"<<endl;
    consultorio->informacion();
}

CCitas::CCitas(CPaciente *paciente1, CSede *sede1, CConsultorio *consultorio1, string fecha1, string hora1) {
    paciente = paciente1;
    sede = sede1;
    consultorio = consultorio1;
    fecha = fecha1;
    hora = hora1;
}

CCitas::CCitas() {

}
