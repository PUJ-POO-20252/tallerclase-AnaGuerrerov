
#include <iostream>
#include <string>
#include "calificaciones_utils.h"

int main() {
    //Defino el número de calificaciones
    const int NUM_CALIFICACIONES=5;
    std::string nombre="Natalia Valencia";
    double calificaciones[NUM_CALIFICACIONES]={5.0, 3.8, 4.8, 2.8, 3.0};

    std::cout<<"---Reporte de Calificaciones--- \n" ;
    std::cout<<"Nombre estudiante: "<<nombre<< "\n";

    //Se llaman las funciones para pasar parametros
    double promedio=CalcularPromedio(calificaciones,NUM_CALIFICACIONES);
    double Alta=ObtenerNotaAlta(calificaciones,NUM_CALIFICACIONES);
    double Baja=ObtenerNotaBaja(calificaciones,NUM_CALIFICACIONES);

    //Imprime el texto en la consola
    std::cout << "El Promedio es de: " << promedio <<"\n";
    std::cout << "La nota mas Alta es de: " << Alta <<"\n";
    std::cout << "La nota mas baja es de: " << Baja <<"\n";


    //Devuelve el valor de cero, no hubo errores
    return 0;
}