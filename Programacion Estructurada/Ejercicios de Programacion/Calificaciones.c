#include <stdio.h> // Entrada y salida estándar de C
#include <stdlib.h>
// Función principal
int main (){
 //Declaración de variables locales
 int i;
 float calificacion, calf_Max = 0.0f, calf_Min = 10.1f, promedio, suma;
 //Instrucciones al usuario
 printf("Introduzca las cuatro calificaciones del alumno\n");
 printf("Recuerda que la escala de calificaciones es del 0 - 10\n");
//Bucle para calcular el promedio, calificación máxima y mínima
 for (i = 1; i <= 4; i++){
 //Bucle que hará repetir una calificación en caso de esta no esté
en el rango de 0-10
 do {
 scanf("%f,\n",&calificacion);
 if (calificacion < 0 || calificacion > 10){
 printf("Error la calificacion no esta en el rango 
correcto\n");
 }
 }while(calificacion < 0 || calificacion > 10);
 //Condición para obtener la calificación máxima
 if (calificacion > calf_Max){
 calf_Max = calificacion;
 }
 //Condición para obtener la calificación mínima
 if (calificacion < calf_Min){
 calf_Min = calificacion;
 }
 //Sumar elementos ingresados para después obtener el promedio
 suma = suma + calificacion;
 }
 //Operación para obtener el promedio después de sumar las cuatro 
calificaciones
 promedio = suma / 4;
 //Obtención de los resultados
 printf("El promedio del alumno es %f\n",promedio);
 printf("La calificacion mayor del alumno es %f\n",calf_Max);
 printf("La calificacion minima del alumno es %f\n",calf_Min);
 system("PAUSE");
}
