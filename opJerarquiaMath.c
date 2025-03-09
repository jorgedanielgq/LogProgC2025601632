#include <stdio.h>
#include <math.h>

    int main(){

    int x = 3;

    float res;

    float a = 1 / (float)2 * (x);
    float b = ((float)(3+x)/2) * (2 * pow(x, 2));
    float c = (float) (2+3) * x;

    res = (a + b) / c ;

    printf("el resultado de la operacion es: %.1f", res);



    return 0;
    }


