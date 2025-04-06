#include <stdio.h>

int main() {
    char *ingrVegetariana[] = {"Pimiento", "Tofu"};
    char *ingrNoVegetariana[] = {"Pepperoni", "Jamon", "Salmon"};

    char opcion;
    int seleccion;


    printf("Deseas una pizza vegetariana? (s/n): \n");
    scanf("%c", &opcion);

    if(opcion == 's' || opcion == 'S') {


        printf("Ingredientes vegetarianos:\n");
        for(int i = 0; i < 2; i++) {
            printf("%d.- %s\n", i+1, ingrVegetariana[i]);
        }

        printf("Selecciona un numero de la lista el ingrediente extra (mozzarella y el tomate ya estan incluidos) \n");
        scanf("%d", &seleccion);
        switch(seleccion){

    case 1:

        printf("Eligiste la pizza vegetariana, los ingredientes (con el extra) son: Mozzarella, tomate, %s", ingrVegetariana[0]);
        break;

    case 2:

        printf("Eligiste la pizza vegetariana, los ingredientes (con el extra) son: Mozzarella, tomate, %s", ingrVegetariana[1]);
        break;

    default:
        printf("La opcion que eligiste no esta en la lista");
        break;

        }


    } else if(opcion == 'n' || opcion == 'N'){

        printf("Ingredientes no vegetarianos:\n");
        for(int i = 0; i < 3; i++) {
            printf("%d.- %s\n", i+1, ingrNoVegetariana[i]);
        }

        printf("Selecciona un numero de la lista el ingrediente extra (mozzarella y el tomate ya estan incluidos) \n");
        scanf("%d", &seleccion);
        switch(seleccion){

    case 1:

        printf("Eligiste la pizza no vegetariana, los ingredientes (con el extra) son: Mozzarella, tomate, %s", ingrNoVegetariana[0]);
        break;

    case 2:

        printf("Eligiste la pizza no vegetariana, los ingredientes (con el extra) son: Mozzarella, tomate, %s", ingrNoVegetariana[1]);
        break;

    case 3:

        printf("Eligiste la pizza no vegetariana, los ingredientes (con el extra) son: Mozzarella, tomate, %s", ingrNoVegetariana[2]);\
        break;


    default:
        printf("La opcion que eligiste no esta en la lista");
        break;

        }

    }

    return 0;
}
