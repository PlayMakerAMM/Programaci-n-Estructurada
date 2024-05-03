#include <stdio.h> // Entrada y salida estándar de C
#include <stdlib.h>
// Función principal
int main(){
 //Declaración de variables locales
 int numero;
 //Instrucciones al usuario
 printf("Escribe un numero para obtener una sucesion a partir de La 
Conjetura de Collatz\n");
 scanf("%d",&numero);
 while(numero != 1){
 if (numero % 2 == 0){
 printf("%d", numero);
 printf(",");
 numero = numero / 2;
 }
 else {
 printf("%d",numero);
 printf(",");
 numero = ((numero*3)+1);
 }
 }
 if (numero == 1){
 printf("%d",numero);
 }
 printf("\n");
 system("PAUSE");
