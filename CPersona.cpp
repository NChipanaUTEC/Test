#include "CPersona.h"

CPersona::CPersona() {

}

CPersona::CPersona(string nombre1, string apellido1, string fecha_nacimiento1, string dni1, string sexo1, int edad1) {
    nombre = nombre1;
    apellido = apellido1;
    fecha_nacimiento = fecha_nacimiento1;
    dni = dni1;
    sexo = sexo1;
    edad = edad1;
}