/*
6. Utilizando el maximo comun divisor, programar un simplificador de fracciones, esto es,
un quebrado solicitado al usuario, debe ponerse en su minima expresión: 16/4 -> 8(numerador)/2(denominador)
*/
#include<stdio.h> //Biblioteca estandar de C

//Declaracion de Funciones
int simplificar(int,int);
int auxiliar (int,int);

//Funcion principal
void main(){
    int numerador, denominador;
    puts("Calculadora para Simplificar fracciones");
    printf("Escribe el numerador: ");
    scanf("%d",&numerador);
    printf("Escribe el denominador: ");
    scanf("%d",&denominador);
    printf("Tu fraccion simplificada es: \n\n");
    simplicar(numerador,denominador);//Llamar a la funcion simplificar
}
//Deficion de la funcion simplificar
int simplicar(int numerador, int denominador){
	//Condicion para saber si el denominador es 1, por lo tanto la fraccion no se puede simplificar mas.
	if(denominador == 1){
		printf("%d\n", numerador);
		printf("---\n");
		printf("%d\n", denominador);
	}
	else{
        auxiliar (numerador,denominador); //Llamar a la funcion auxiliar
	}
}
//Deficion de la funcion auxiliar
int auxiliar (int numerador,int denominador){
    int auxiliar = 2;
    //Condicion para simplificar fracciones con denominador mayor o igual a 2
	while(auxiliar <= numerador){
        //Condicion para ambos denominador y numerador puedan ser simplificados por el mismo numero
        if(denominador%auxiliar == 0 && numerador%auxiliar == 0){
			denominador /= auxiliar;
			numerador /= auxiliar;
		}
		else{
		auxiliar++;
		}
	 }
    printf("%d\n",numerador);
    printf("---\n");
    printf("%d\n",denominador);
}
