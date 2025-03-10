
#include <stdio.h>
#include <math.h>

int main() {
    double L = 7;

    double at = pow(L, 2) + ((M_PI * pow(L / 2, 2)) / 2) + (2 * ((1.0 / 5.0) * L * (3.0 / 5.0) * L)) + (2 * pow((1.0 / 5.0) * L, 2));

    double pt = (M_PI * L / 2) + (2 * L) + (2 * (3.0 / 5.0) * L) + (7 * (1.0 / 5.0) * L);

    printf("Area total: %.4f\n", at);
    printf("Perimetro total: %.4f\n", pt);

    return 0;
}
