#include "CClinica.h"

void CClinica::menu() {
    while (true) {
        cout << "MENU" << endl;
        cout << "1. Agregar Paciente"<<endl;
        cout << "2. Reservar Cita"<<endl;
        cout << "3. Mostrar citas"<<endl;
        cout << "0. Salir"<<endl;
        string opcion;cout<<"Opcion : ";cin>>opcion;
        if (opcion == "0"){
            break;
        }else if (opcion == "1"){
            agregar_paciente();
        }else if(opcion == "2"){
            reservar_cita();
        }else if(opcion == "3"){
            mostrar_citas();
        }
    }
}

void CClinica::agregar_paciente() {
    string nombre;
    string apellido;
    string fecha_nacimiento;
    string dni;
    string sexo;
    int edad;
    double peso;
    double talla;
    bool existe = false;
    do{
        cout << "DNI : ";cin>>dni;
        for (int i = 0; i < pacientes.size(); ++i) {
            if (pacientes[i]->get_dni() == dni){
                existe = true;
                break;
            }
        }
    }while (existe);
    cout << "Nombre : ";cin>>nombre;
    cout << "Apellido : ";cin>>apellido;
    cout << "Fecha nacimiento : ";cin>>fecha_nacimiento;
    cout << "Sexo : ";cin>>sexo;
    cout << "Edad : ";cin>>edad;
    cout << "Peso : ";cin>>peso;
    cout << "Talla : ";cin>>talla;
    auto paciente = new CPaciente(nombre, apellido, fecha_nacimiento, dni, sexo, edad, peso, talla);
    pacientes.push_back(paciente);
    cout << "Cliente Guardado ";
}

void CClinica::reservar_cita() {
#include "CEspecialidad.h"
    string dni;
    cout << "DNI del paciente :";cin>>dni;
    bool encontro_paciente = false;
    CPaciente * paciente = nullptr;
    for (int i = 0; i < pacientes.size(); ++i) {
        if (pacientes[i]->get_dni() == dni){
            encontro_paciente = true;
            paciente = pacientes[i];
            break;
        }
    }
    if (!encontro_paciente){ //Si en caso no encontro el paciente
        agregar_paciente();
        paciente = pacientes[pacientes.size()-1];
    }
    vector<CEspecialidad *> especialidades;
    for (int k = 0; k < sedes.size(); ++k) {
        for (int i = 0; i < sedes[i]->get_consultorio().size(); ++i) {
            especialidades.push_back(sedes[k]->get_consultorio()[i]->get_doctor()->get_especialidad());
        }
    }
    string especialidad_nombre;
    bool encontro_especialidad = false;
    CEspecialidad * especialidad = nullptr;
    do {
        cout << "Ingresar el nombre de la especialidad : ";
        cin >> especialidad_nombre;
        for (int j = 0; j < sedes.size(); ++j) {
            if (especialidades[j]->get_nombre() == especialidad_nombre) {
                especialidad = especialidades[j];
                encontro_especialidad = true;
            }
        }
    }while (!encontro_especialidad);
    CConsultorio * consultorio= nullptr;
    for(int l = 0; l < sedes.size(); ++l) {
        for (int i = 0; i < sedes[l]->get_consultorio().size(); ++i) {
            if (sedes[l]->get_consultorio()[i]->get_doctor()->get_especialidad() == especialidad){
                consultorio = sedes[l]->get_consultorio()[i];
                break;
            }
        }
    }
    CSede * sede = nullptr;
    for (int m = 0; m < sedes.size(); ++m) {
        for (int i = 0; i < sedes[m]->get_consultorio().size(); ++i) {
            if (sedes[m]->get_consultorio()[i] == consultorio){
                sede = sedes[m];
            }
        }
    }
    cout << "Fecha : "; string fecha;cin>>fecha;
    cout << "Hora : ";string hora;cin>>hora;
#include "CCitas.h"
    CCitas * cita = new CCitas(paciente, sede, consultorio, fecha, hora);
    citas.push_back(cita);
}

void CClinica::mostrar_citas() {
    for (int i = 0; i < citas.size(); ++i) {
        cout << "Paciente #"<<i+1<<endl;
        citas[i]->get_informacion();
        cout<<endl<<endl;
    }
}

CClinica::CClinica() {
    auto * sede1 = new CSede("San Borja");
    auto * sede2 = new CSede("San Isidro");
    auto * sede3 = new CSede("La Molina");
    auto * sede4 = new CSede("Salamanca");
    auto * sede5 = new CSede("Miraflores");
    auto * sede6 = new CSede("Barranco");


    auto *especialidad1 = new CEspecialidad("Pediatria");
    auto *especialidad2 = new CEspecialidad("Pediatria");
    auto *especialidad3 = new CEspecialidad("Odontologia");
    auto *especialidad4 = new CEspecialidad("Medicina General");
    auto *especialidad5 = new CEspecialidad("Cardiologia");
    auto *especialidad6 = new CEspecialidad("Neumologia");
    auto *especialidad7 = new CEspecialidad("Ginecologia");
    auto *especialidad8 = new CEspecialidad("Endocrinologia");
    auto *especialidad9 = new CEspecialidad("Psicologia");

    auto * doctor1 = new CDoctor("Juan", "Perez", "14/14/1950", "77896633", "Masculino", 70, especialidad1);
    auto * doctor2 = new CDoctor("Luis", "Perez", "14/14/1960", "77896633", "Masculino", 60, especialidad2);
    auto * doctor3 = new CDoctor("Erick", "Perez", "14/14/1970", "77896633", "Masculino", 50, especialidad3);
    auto * doctor4 = new CDoctor("Lucia", "Perez", "14/14/1965", "77896633", "Masculino", 55, especialidad4);
    auto * doctor5 = new CDoctor("Fabiola", "Perez", "14/14/1980", "77896633", "Masculino", 40, especialidad5);
    auto * doctor6 = new CDoctor("Deyanira", "Perez", "14/14/1990", "77896633", "Masculino", 30, especialidad6);
    auto * doctor7 = new CDoctor("Esperanza", "Perez", "14/14/1995", "77896633", "Masculino", 25, especialidad7);

    auto * consultorio1 = new CConsultorio("Consultorio 1", doctor1);
    auto * consultorio2 = new CConsultorio("Consultorio 2", doctor2);
    auto * consultorio3 = new CConsultorio("Consultorio 3", doctor3);
    auto * consultorio4 = new CConsultorio("Consultorio 4", doctor4);
    auto * consultorio5 = new CConsultorio("Consultorio 5", doctor5);
    auto * consultorio6 = new CConsultorio("Consultorio 6", doctor6);
    auto * consultorio7 = new CConsultorio("Consultorio 7", doctor7);

    sede1->agregar_consultorios(consultorio1);
    sede1->agregar_consultorios(consultorio2);
    sede2->agregar_consultorios(consultorio3);
    sede3->agregar_consultorios(consultorio4);
    sede4->agregar_consultorios(consultorio5);
    sede5->agregar_consultorios(consultorio6);
    sede6->agregar_consultorios(consultorio7);
    sedes.push_back(sede1);
    sedes.push_back(sede2);
    sedes.push_back(sede3);
    sedes.push_back(sede4);
    sedes.push_back(sede5);
    sedes.push_back(sede6);

}
