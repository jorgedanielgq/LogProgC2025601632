#include <stdio.h>
#include <math.h>

int main(){

    float peso, estatura, imc;

    printf("Ingresa tu peso \n");
    scanf("%f", &peso);

    printf("Ingresa tu estatura \n");
    scanf("%f", &estatura);

    imc = peso / pow(estatura, 2);

    if (imc >= 40){
        printf("Estas en obesidad clase 3");
    }else if (imc >= 35){
        printf("Estas en obesidad clase 2");
    }else if (imc >= 30){
        printf("Estas en obesidad clase 1");
    }else if (imc >= 25){
        printf("Estas en sobrepeso");
    }else if (imc >= 18.5){
        printf("Estas en un peso normal");
    }else{
        printf("Estas en bajo peso");
    }


return 0;
}
