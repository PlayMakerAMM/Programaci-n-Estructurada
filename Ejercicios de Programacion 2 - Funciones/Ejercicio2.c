/*
2. Implementar una función que, dado un número, regrese el valor calculado con la
ecuación siguiente: f(x) = x / (1 + x3)
*/
#include<stdio.h> //Biblioteca estandar de C
#include<math.h> //Para el uso de potencias

//Declaracion de Funcion
float f_De_x(float);

//Funcion principal
void main(){

    //Declaracion de variables locales
    float numero;
    printf("Ingresa un numero para resolver la siguiente ecuacion f(x) = x / (1 + x3)\n");
    printf("Donde tu numero sera x: ");
    scanf("%f",&numero);
    printf("%f",f_De_x(numero)); //Llamar a funcion f_De_x

}

//Deficion de la funcion
float f_De_x(float numero){
    float divicion, potencia;
    potencia = pow(numero,3) + 1;
    divicion = numero / potencia;
    //valor de retorno
    return divicion;
}
