#include <stdio.h> // Entrada y salida estándar de C
#include <stdlib.h>
// Función principal
int main(){
 //Declaración de variables locales
 int alumnos_MB = 0, alumnos;
 float calificaciones;
 //Instrucciones al usuario
 printf("Recuerda que la escala de calificaciones es del 0 - 10\n");
 printf("Para que un alumno cuente como aprobado su calificacion debe 
ser igual o mayor a 7\n");
 printf("Escriba cuantos alumnos va ingresar: ");
 scanf("%d",&alumnos);
 //Bucle para registrar las calificaciones de n alumnos
 for (int i=1; i <= alumnos; i++){
 printf("Escriba la calificacion del alumno %d\n",i);
 do {
 scanf("%f",&calificaciones);
 //Condición para mandar un mensaje de error en caso de que la 
calificación no se valida
 if (calificaciones < 0 || calificaciones > 10){
printf("Error la calificacion no esta en el rango 
correcto\n");
 }
 }while(calificaciones < 0 || calificaciones > 10);
 //Condición (dado una calificación mínima aprobatoria) saber cuántos
alumnos aprobaron el examen
 if (calificaciones >= 7){
 alumnos_MB++;
 }
 }
 //Imprimir el resultado
 printf("La cantidad de alumnos aprobados son %d\n",alumnos_MB);
 system("PAUSE");
}
