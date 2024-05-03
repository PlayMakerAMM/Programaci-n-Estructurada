#include <stdio.h> // Entrada y salida estándar de C
#include <math.h> //Biblioteca para utilizar la función que eleve un 
numero al cuadrado
#include <stdlib.h>
// Función principal
void main (){
 //Declaración de variables locales
 float numero, suma, elevacion_Cuadrado;
 int i ; 
 //Darle instrucciones al usuario
 printf("Escribe 10 numeros este programa va sumar los cuadrados de 
los 10 numeros \n");
 printf("Favor de hacer click en enter despues de escribir el 
numero\n\n");
 //Bucle que hará las operaciones y condicionaran al usuario en 
escribir 10 dígitos
 for (i = 1; i <= 10; i++){
 printf("___________/\n");
 scanf("%f",&numero);
 elevacion_Cuadrado = pow(numero,2);
 suma += elevacion_Cuadrado;
 }
 //Resultado
 printf("El resultado de tu suma es: %f\n", suma);
system("PAUSE");
}