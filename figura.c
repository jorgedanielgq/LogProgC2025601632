#include <stdio.h>
#include <math.h>

int main()
{

 float semi, t, r, v1, at, pt, l;


 l = 7;
 v1 = 21/2.0;
 float v2 = l *3;

 semi = (M_PI * pow (v1, 2)) /2;
 float t1 = (l * v2)/2.0;
 t= t1*2;
 r= (l*v2)*2;
 at = semi+t+r;

 semi = v1*(2+M_PI);
 t = pow(v2, 2) + pow(l,2);
 float t2 = (sqrt (t))* 2;

 r = (l*4);
 pt = semi+ t2 + r;



 printf("El area toal es: %f\n ", at);
 printf("El perimetro total es: %f", pt);


 return 0;
}
