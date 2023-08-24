#include<iostream>



class Materia{

    private:

        int clave;
        std::string Nombre; 
        std::string ProfesorTit;
        std::string LibroTexto;

    public:

        Materia();
        Materia(int, std::string,std::string,std::string);

        void imprime();
        void CambiaClave(int);
        void CambiaProfesor(std::string);


};


Materia::Materia(){
    clave = 0;
    Nombre = "";
    ProfesorTit  = "";
    LibroTexto = "";
}


Materia::Materia(int c, std::string n, std::string p, std::string l){
    clave = c;
    Nombre  = n; 
    ProfesorTit = p;
    LibroTexto = l;
}


void Materia::imprime(){
    std::cout<<"\t --- Informacion de la materia \n";
    std::cout<<"Clave: "<<clave<<std::endl;
    std::cout<<"Nombre: "<<Nombre<<std::endl;
    std::cout<<"Profesor: "<<ProfesorTit<<std::endl;
    std::cout<<"Libro: "<<LibroTexto<<std::endl;

}


void Materia::CambiaClave(int num){
    std::cout<<"Clave actual: "<<clave<<std::endl;
    clave = num;
    std::cout<<"Nueva clave: "<<num<<std::endl;

}


void Materia::CambiaProfesor(std::string nuevoProfe){
    std::cout<<"Profesor actual: "<<ProfesorTit<<std::endl;
    ProfesorTit = nuevoProfe;
    std::cout<<"Nuevo domicilio: "<<nuevoProfe;
}
