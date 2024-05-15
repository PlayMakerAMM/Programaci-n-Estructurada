/*
4. Implementar una función para calcular la potencia n de un número x (potencia n de x).
Tanto la potencia n, como el número x deben ser dados por el usuario: y = xn
*/
#include<stdio.h> //Biblioteca estandar de C
#include<math.h> //Para el uso de potencias

//Declaracion de Funcion
float potencia(float,float);

//Funcion Principal
void main(){

    float x,n;
    printf("Ingresa un numero x: ");
    scanf("%f",&x);
    printf("Ingresa que pontencia n elevaras tu numero ");
    scanf("%f",&n);
    printf("El resultado de tu x elevado a la n es: %f", potencia(x,n));//Llamar a la funcion potencia

}
//Deficion de la funcion
float potencia(float x,float n){
   return  pow(x,n);
}
