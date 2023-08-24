#include<iostream>
#include<string>



class empleado{
    private:

        int ClaveEmpleado;
        std::string nombre;
        std::string domicilio;
        float sueldo;
        std::string ReportaA;
    
    public:
        empleado();
        empleado(int, std::string,std::string, float,std::string);
        void imprime();
        void cambiaDomicilio(std::string);
        void cambiaReportaA(std::string);
        void ActualSueldo(float);

        void setClave(int);
        void setNombre(std::string);
        void setDomicilio(std::string);
        void setSueldo(float);
        void setReporta(std::string);

        int getClave();
        std::string getNombre();
        std::string getDomicilio();
        float getSueldo();
        std::string getReporta();



};

void empleado::setClave(int num){ ClaveEmpleado = num;}

void empleado::setNombre(std::string nom){nombre = nom;}

void empleado::setDomicilio(std::string dom){domicilio = dom;}

void empleado::setSueldo(float sue){sueldo = sue;}

void empleado::setReporta(std::string repor){ReportaA = repor;}

int empleado::getClave(){return ClaveEmpleado;}

std::string empleado::getNombre(){return nombre;}

std::string empleado::getDomicilio(){return domicilio;}

float empleado::getSueldo(){return sueldo;}

std::string empleado::getReporta(){return ReportaA;}







empleado::empleado(){
    ClaveEmpleado = 0;
    nombre = "";
    domicilio = "";
    sueldo = 0.0;
    ReportaA = "";

}

empleado::empleado(int C, std::string N, std::string D, float S, std::string R){
    ClaveEmpleado  = C;
    nombre = N;
    domicilio = D;
    sueldo = S;
    ReportaA = R;
}



void empleado::imprime(){
    std::cout<<"\t --- Informacion del empleado --- "<<std::endl;
    std::cout<<"Clave: "<<ClaveEmpleado<<std::endl;
    std::cout<<"Nombre: "<<nombre<<std::endl;
    std::cout<<"Domicilio: "<<domicilio<<std::endl;
    std::cout<<"Sueldo: "<<sueldo<<std::endl;
    std::cout<<"Jefe: "<<ReportaA<<std::endl;

}


void empleado::cambiaDomicilio(std::string nuevoDom){
    std::cout<<"Domicilio actual: "<<domicilio<<std::endl;
    domicilio = nuevoDom;
    std::cout<<"Nuevo domicilio: "<<nuevoDom;
}


void empleado::ActualSueldo(float sal){
    std::cin.ignore();
    std::cout<<"El sueldo actual del empleado es: "<<sueldo<<std::endl;

    float sueldoActual;
    sueldoActual = sueldo;
    float aumento = sueldoActual * sal/100;
    float nueSueldo = sueldo + aumento;
    sueldo = nueSueldo;
    std::cout<<"El nuevo sueldo es: "<<nueSueldo<<std::endl;

   
}


void empleado::cambiaReportaA(std::string nuevoJefe){
    std::cout<<"Jefe actual: "<<ReportaA<<std::endl;
    ReportaA = nuevoJefe;
    std::cout<<"Nuevo jefe: "<<ReportaA<<std::endl;
}