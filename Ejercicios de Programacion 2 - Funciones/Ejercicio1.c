/*
1. Implementar una función para calcular el cubo de un número n dado por el usuario.
*/
#include<stdio.h> //Biblioteca estandar de C
#include<math.h> //Para el uso de potencias


//Declaracion de Funcion
float cubo(float);


//Funcion principal
void main (){

    //Declaracion de variables locales
    float numero;
    puts("Ingresa un numero para elevarlo al cubo: ");
    scanf("%f",&numero);
    printf("%f",cubo(numero)); //Llamar a la funcion cubo

}

//Deficion de la funcion
float cubo(float numero){
    //Valor de retorno
    return pow(numero,3);
}
