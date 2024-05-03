#include <stdio.h> // Entrada y salida estándar de C
#include <stdlib.h>
// Función principal
int main (){
 //Declaración de variables locales
 float angulo;
 //Darle instrucciones al usuario y pedirle los datos a ingresar
 printf("Escriba el angulo de su triangulo, nosotros le diremos si es 
agudo, obtuso o recto \n");
 scanf("%f",&angulo);
 printf("\n");
 //Verificar el ángulo dado por el usuario y darle una respuesta
 if (angulo < 90){
 printf("El angulo de tu triangulo es agudo \n");
 }
 else if (angulo > 90){
 printf("El angulo de tu triangulo es obtuso \n");
 }
 else {
 printf("El angulo de tu triangulo es recto \n");
 }
 system("PAUSE");
}
