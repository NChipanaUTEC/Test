
#include "CDoctor.h"

CEspecialidad *CDoctor::get_especialidad() {
    return especialidad;
}

CDoctor::CDoctor() {

}

CDoctor::CDoctor(string nombre1, string apellido1, string fecha_nacimiento1, string dni1, string sexo1, int edad1,
                 CEspecialidad *especialidad1) {
    nombre = nombre1;
    apellido = apellido1;
    fecha_nacimiento = fecha_nacimiento1;
    dni = dni1;
    sexo = sexo1;
    edad = edad1;
    especialidad = especialidad1;
}

void CDoctor::informacion() {
    cout << "Nombre : " << nombre<<endl;
    cout << "Apellido : "<<apellido<<endl;
    cout << "Especialidad : "<<especialidad<<endl;
}

