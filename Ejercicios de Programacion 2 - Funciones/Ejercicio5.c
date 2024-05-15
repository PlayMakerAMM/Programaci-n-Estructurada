/*
5. Implementar una función que permita al usuario calcular el factorial de un número n
dado por éste: y = n!
*/
#include<stdio.h> //Biblioteca estandar de C

//Declaracion de Funcion
int factorial (int);

//Funcion Principal
void main(){

   int numero;
   printf("Escriba un numero entero para calcular su factorial ");
   scanf("%d",&numero);
   printf("El factorial de tu numero es: %d\n",factorial(numero));

}

//Deficion de la funcion
int factorial (int numero){
    int factorial = 1;
    for(int i=1; i<=numero; i++){
		factorial *= i;
	}
    return factorial;
}
