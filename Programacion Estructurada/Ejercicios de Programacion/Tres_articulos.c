#include <stdio.h> // Entrada y salida estándar de C
#include <stdlib.h>
// Función principal
int main (){
 //Declaración de variables locales
 float articulo_1, articulo_2, articulo_3;
 //Darle instrucciones al usuario y pedirle los datos a ingresar
 printf("Proporcionar el precio de sus articulos \n");
 printf("Articulo 1: ");
 scanf("%f",&articulo_1);
 printf("Articulo 2: ");
 scanf("%f",&articulo_2);
 printf("Articulo 3: ");
 scanf("%f",&articulo_3);
 //Verificar cuál de los 2 artículos es más barato y darle una 
respuesta al usuario
 if (articulo_1 > articulo_2 && articulo_1 > articulo_3 ){
 float suma = articulo_2 + articulo_3;
 printf("El total que pagaras por llevarte estos 3 articulos es 
de %f", suma);
 printf("\n");
 }
 else if (articulo_2 > articulo_1 && articulo_2 > articulo_3){
 float suma = articulo_1 + articulo_3;
 printf("El total que pagaras por llevarte estos 3 articulos es 
de %f", suma);
 printf("\n");
 }
 else if (articulo_3 > articulo_1 && articulo_3 > articulo_2){
 float suma = articulo_1 + articulo_2;
 printf("El total que pagaras por llevarte estos 3 articulos es 
de %f", suma);
 printf("\n");
 }
 else{
 printf("El precio de tus articulos es el mismo, los siento no 
abra descuento para usted :( \n");
 }
 system("PAUSE");
}