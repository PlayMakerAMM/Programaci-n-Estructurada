/*
9. Crear un conversor de números arábigos a números romanos: 1 = I, 2 = II, 3 = III, y así
sucesivamente, considerando números del 1 al 1000.
*/
#include<stdio.h>//Biblioteca estandar de C

//Declaracion de Funciones
int millares_Romano(int);
int intercambio_Millares(int);
int centenas_Romanas(int);
int intercambio_Centernas(int);
int decenas_Romanas(int);
int intercambio_Decenas(int);
int unidades_Romanas(int);
int intercambio_Unidades(int);

//Funcion principal
void main(){
  int numero;

	printf("Coloque un numero entero, para convertirlo en numero romano: ");
    scanf("%d",&numero);

    //Llamando a las funciones para hacer la convercion a numeros romanos
    //Cada funcion intecambio da numeros romanos segun el resultado de las funciones: millares,centenas,decenas y unidades
    millares_Romano(numero);
    intercambio_Millares(numero);
    centenas_Romanas(numero);
    intercambio_Centernas(numero);
    decenas_Romanas(numero);
    intercambio_Decenas(numero);
    unidades_Romanas(numero);
    intercambio_Unidades(numero);
}
//Deficion de Funciones Millares,centenas, decenas y unidades
int millares_Romano(int numero){
    int millares = numero / 1000;
    return millares;
}
int centenas_Romanas(int numero){
    numero %= 1000;
    int centenas = numero / 100;
    return centenas;
}
int decenas_Romanas(int numero){
    numero %= 100;
    int decenas = numero / 10;
    return decenas;
}
int unidades_Romanas(int numero){
    numero %= 10;
    int unidades = numero / 1;
    return unidades;
}
//Deficion de Funciones para el cambio a numeros romanos
int 
(int numero){
    switch (millares_Romano(numero)){
    case 1:
        printf("M");
        break;
    }
}
int intercambio_Centernas(int numero){
     switch(centenas_Romanas(numero)){
		case 1:
		    printf("C");
		    break;
		case 2:
		    printf("CC");
		    break;
		case 3:
		    printf("CCC");
		    break;
		case 4:
		    printf("CD");
		    break;
		case 5:
		    printf("D");
		    break;
		case 6:
		    printf("DC");
		    break;
		case 7:
		    printf("DCC");
		    break;
		case 8:
		    printf("DCCC");
		    break;
		case 9:
		    printf("CM");
		    break;
	}
}
int intercambio_Decenas(int numero){
    switch(decenas_Romanas(numero)){
		case 1:
		    printf("X");
		    break;
		case 2:
		    printf("XX");
		    break;
		case 3:
		    printf("XXX");
		    break;
		case 4:
		    printf("XL");
		    break;
		case 5:
		    printf("L");
		    break;
		case 6:
		    printf("LX");
		    break;
		case 7:
		    printf("LXX");
		    break;
		case 8:
		    printf("LXXX");
		    break;
		case 9:
		    printf("XC");
		    break;
	}
}
int intercambio_Unidades(int numero){
    switch(unidades_Romanas(numero)){
		case 1:
		    printf("I");
		    break;
		case 2:
		    printf("II");
		    break;
		case 3:
		    printf("III");
		    break;
		case 4:
		    printf("IV");
		    break;
		case 5:
		    printf("V");
		    break;
		case 6:
		    printf("VI");
		    break;
		case 7:
		    printf("VII");
		    break;
		case 8:
		    printf("VIII");
		    break;
		case 9:
		    printf("IX");
		    break;
	}
}
