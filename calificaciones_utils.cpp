#include "calificaciones_utils.h"

double CalcularPromedio(const double calificaciones[], int tamano) {
    //Se empieza en decimal
    double suma = 0.0;
    for (int i = 0; i <tamano;i++) {
        //Se necesita la suma acumulativa
        suma+=calificaciones[i];
    }
    return suma/tamano;
}

double ObtenerNotaBaja(const double calificaciones[],int tamano) {
    double Baja=calificaciones[0];
    //Ya se tomo el primer termino del arreglo, se empieza en 1
    for (int i = 1; i < tamano; i++) {
        if (calificaciones[i] < Baja) {
            Baja = calificaciones[i];
        }
    }
    //Devuelve el valor del valor encontrado
    return Baja;
}
double ObtenerNotaAlta(const double calificaciones[],int tamano) {
    double Alta=calificaciones[0];
    for (int i =1; i < tamano; i++) {
        if (calificaciones[i] > Alta) {
            Alta=calificaciones[i];
        }
    }
    return Alta;
}