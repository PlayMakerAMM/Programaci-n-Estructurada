#include <stdio.h> // Entrada y salida estándar de C
#include <stdlib.h>
// Función principal
int main (){
 //Declaración de variables locales
 int i ;
 float numero, suma;
 //Darle instrucciones al usuario
 printf("Escribe 10 numeros, para ser sumados\n");
 printf("Favor de hacer click en enter despues de escribir el 
numero\n\n");
 //Bucle que hará las operaciones y condicionarán al usuario en 
escribir 10 dígitos
 for (i = 1; i <= 10; i++){
 printf("___________/\n");
 scanf("%f",&numero);
 suma += numero;
 }
 //Resultado
 printf("El resultado de tu suma es: %f \n", suma);
 system("PAUSE");
}