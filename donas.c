#include <stdio.h>


int main(){

int donas;

printf("Cuantas donas desea comprar \n");
scanf("%d", &donas);

if(donas > 0 && donas < 30){

    donas *= 10;

    printf("El total a pagar es: %d\n", donas);

}else if(donas >= 50){

    donas *= 8;
    printf("Tiene descuento y el total a pagar es: %d\n", donas);

}else if(donas >= 30){

    donas *= 9;
    printf("Tiene descuento y el total a pagar es: %d\n", donas);

}else{

    printf("Cantidad no valida");
}






return 0;
}
