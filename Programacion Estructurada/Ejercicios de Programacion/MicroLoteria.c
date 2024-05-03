#include <windows.h>//Para el uso de la función sleep
#include <stdio.h> // Entrada y salida estándar de C
#include <stdlib.h>// Necesaria para usar la función para generar números 
aleatorios
#include <time.h> // Necesaria para usar el reloj de la computadora
// Función principal
int main(){
 //Declaración de variables locales
 int num_Rand[5], num[3], i, k, relleno = 0; //Las variables i, k, 
relleno son contadores para for
 // Inicializar la semilla pseudoaleatoria para generar números al 
azar
// con el reloj de la computadora usando time (0)
srand(time(0));
printf("*****Loteria Mexicana*****\n");
//Instrucciones para el usuario
printf("Escribe 3 numeros\n");
printf("Para mayor suerte tus numeros deben ser entre el 1 y el 
10\n");
printf("Si aciertas 2 numeros de la loteria, ganaras $100 \n");
 //Generar los numeros de loteria y almacenarlos en una matriz
 for( i=0; i<=4; i++){
 num_Rand[i] = rand() % 10 + 1; /*generar numeros aleatorios en un 
rango de 1-10*/
 }
//Numeros de usuario
 for(k=0; k<=2; k++){
 printf("______\n");
 printf("->");
 scanf("%d",&num[k]);/*Los numeros del usuario seran almacenados 
en una matriz*/
 }
 //Imprimir los numeros de la loteria
 printf("______/\n");
 printf("\n");
 printf("Los numeros de la loteria son\n");
 for(i=0; i<=4; i++){
 printf("|");
 printf(" %d\t",num_Rand[i]);
 printf("|");
 //Función para que el sistema tarde 1.5 segundos y luego mostrar 
un nuevo numero
 Sleep (1500);
 //Obtener los números del usuario guardados en la matriz
 for(k=0; k<=2; k++);
 //Condiciones para comparar los números aleatorios con los del 
usuario
 //Y cada vez que uno se acerté sumarle 1 al contador heap
 if(num[0]&&num[1] == num_Rand[i]){
 relleno++;
 }
 else if(num[0]&&num[2] == num_Rand[i]){
 relleno++;
 }
 else if (num[2]&&num[1] == num_Rand[i]){
 relleno++;
 }
 }
 printf("\n\n");
 //Condición de victoria o perdida para el usuario
 (relleno > 1) ? (printf("Felicidades, has ganado $100 
c:")):(printf("Que mala suerte no acertaste, debes $100"));
 printf("\n\n");
 system("PAUSE");
}