
#include "CEspecialidad.h"

string CEspecialidad::get_nombre() {
    return nombre;
}

CEspecialidad::CEspecialidad() {

}

CEspecialidad::CEspecialidad(string nombre) {
    this->nombre = nombre;
}
