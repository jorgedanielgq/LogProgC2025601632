#include <stdio.h>

    enum DiaSemana{

    // Este seria como un array, los valores empiezan desde 0 y asi sucesivamente
    Lunes,
    Martes,
    Miercoles,
    Jueves,
    Viernes,
    Sabado,
    Domingo

    };


int main(){

    //Programa donde le daremos descuento a las mujeres por ser el dia viernes,

    enum DiaSemana hoy;

     hoy = Viernes;

     const int cover = 500;
     const float desc = 0.25;
     float result;
     int nMujeres, nHombres;

    if(hoy == Viernes){

     printf("Hoy si hay habra descuento. Solo para mujeres \n");

     printf("Ingresa el numero de Hombres: \n");
     scanf("%d", &nHombres);

     printf("Ingresa el numero de Mujeres: \n");
     scanf("%d", &nMujeres);


     result = (nHombres  * cover + nMujeres * cover) - (nMujeres * cover * desc);
     printf("El total a pagar es: %f\n", result);

    }else{
        printf("Hoy no hay habra descuento");
    }




    return 0;
}
