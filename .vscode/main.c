#include <stdio.h>
#include <math.h>

int main(){

float a, b, c;
printf("digite um numero A\n");
scanf("%f", &a);

printf("agora digite um numero B\n");
scanf("%f", &b);

c = pow(a+b, 2);

printf("A + B elevado ao quadrado e igual a: %f", c);

}