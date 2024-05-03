#include <stdio.h> // Entrada y salida estándar de C
#include <stdlib.h>
// Función principal
int main (){
 //Declaración de variables locales
 int gastos;
 float gastos_Dia, gastos_Total;
 int i = 0, x = 1; /*variables útiles como contadores que se utilizaran 
en el while de más adelante*/
 //Darle instrucciones al usuario
 printf("Escribe cuantos gastos hiciste en el dia de hoy\n");
 printf("2, 3 o 5 gastos ? \n");
 scanf("%d",&gastos);
 printf("\n");
 //Verificar si el usuario hizo algún gasto o no
 if (gastos > 0){
 //Crear un bucle para poder registrar los gastos del usuario y 
sumarlos
 while (i < gastos){
 printf("Escribe el gasto numero %d\t", x);
 scanf("%f",&gastos_Dia);
 /*Contadores*/
 x++; /*Tener el número de gasto del usuario*/
 i++; /*Darle fin al bucle hasta que termine de poner todos los gastos 
realizados en el día*/
 gastos_Total += gastos_Dia; /*Creación de la suma en el mismo bucle*/
 }
 }
 else {
 printf("No recibiras reembolso de parte de la empresa porque no 
hiciste ningun gasto\n");
 }
 //Condición para saber si gasto más de la cuenta y si recibirá algún
rembolso
 if (gastos_Total < 100){
 printf("No recibiras un reembolso de parte de la empresa\n");
 printf("Tu gastaste el dia de hoy %f\n", gastos_Total);
 }
 else if (gastos_Total <= 200){
 printf("Felicidades recibiras un reembolso de parte de la 
empresa !!\n");
 printf("Tu gastaste el dia de hoy %f\n", gastos_Total);
 }
 else if (gastos_Total > 200){
 printf("Recibiras reembolso de parte de la empresa, pero, has gastado 
mas de tu limite propuesto\n");
 printf("Tu gastaste el dia de hoy %f\n", gastos_Total);
 }
system("PAUSE");
}