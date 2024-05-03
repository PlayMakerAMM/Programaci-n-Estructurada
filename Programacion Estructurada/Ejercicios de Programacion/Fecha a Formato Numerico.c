/*Nota: El Programa no valida la entrada de letras en caso de que el usuario quiera colocar 
*letras en vez de números
*/

//Librerías 
#include <stdio.h> // Entrada y salida estándar de C
#include <stdlib.h> //Para utilizar la función 'system("PAUSE")'
#include <stdbool.h> // Para el uso de Booleanos
// Función principal
int main (){
 //Declaración de variables locales
 int Dia, Mes,Year;
 bool Febrero;
 //Condición para poder ingresar los datos, en caso de que estén 
erróneos
 do{
 //Inicializar el booleano en false, para no generar un bucle sin salida
 Febrero = false;
 //Darle instrucciones al usuario y pedirle los datos a ingresar
 printf("Ingresa la fecha en formato numerico: dd/mm/aa \n");
 printf("Para para poder hacer un cambio de formato \n");
 printf("Ejemplo 14/06/2020 \n");
 printf("Dia: \t");
 scanf("%d",&Dia, "\t");
 printf("Mes: \t");
 scanf("%d",&Mes);
 printf("Año: \t");
 scanf("%d",&Year);
 printf("\n");
 //Verificación que los datos estén correctos
 //Si el mes es mayor o igual a 13 es un error
 //Si el mes es igual o menor a 0 es un error
 if(Mes >= 13 || Mes <= 0){
 printf("Error el mes ingresado es incorrecto \n\n");
 }
//Excluir el mes de febrero que solo tiene 28 días, sin tomar en cuenta 
que sea un año bisiesto
 if (Mes == 2 && Dia >= 29){
 printf("Error el dia ingresado es incorrecto \n\n");
 Febrero = true;
 }
 //Si el día es mayor o igual a 32 es un error
 //Si el día es igual o menor a 0 es un error
 else if (Dia >= 32 || Dia <= 0){
 printf("Error el dia ingresado es incorrecto \n\n");
 }
 }while(Mes >= 13 || Dia >= 32 || Febrero == true); 
 //Switch para poder validar el mes ingresado
 //Y darle el resultado al usuario
 switch(Mes){
 case 1: printf("%d de Enero de %d\n", Dia, Year);
 break;
 case 2: printf("%d de Febrero de %d\n",Dia, Year);
 break;
 case 3: printf("%d de Marzo de %d \n", Dia, Year);
 break;
 case 4: printf("%d de Abril de %d \n", Dia, Year);
 break;
 case 5: printf("%d de Mayo de %d \n", Dia, Year);
 break;
 case 6: printf("%d de Junio de %d \n", Dia, Year);
 break;
 case 7: printf("%d de Julio de %d\n", Dia, Year);
 break;
 case 8: printf("%d de Agosto de %d\n", Dia, Year);
 break;
 case 9: printf("%d de Septiembre de %d\n", Dia, Year);
 break;
 case 10: printf("%d de Octubre de %d\n", Dia, Year);
 break;
 case 11: printf("%d de Noviembre de %d\n", Dia, Year);
 break;
 case 12: printf("%d de Diciembre de %d\n", Dia, Year);
 break;
 }
 //Función en caso de utilizar el símbolo de sistema (cmd)
 //Para que la ventana no se cierre al terminar la ejecución
 system("PAUSE");
}
