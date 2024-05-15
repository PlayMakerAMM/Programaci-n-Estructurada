/*
10. Crear un programa que calcule una integral y = f(x) para un intervalo dado: a <= x <= b.
*/
#include<stdio.h>//Biblioteca estander de C
#include<math.h>

//Declaracion de Funciones
int xdx(int,int,int);
int dx (int,int,int);

//Funcion principal
void main(){
    int opcion;
    //ciclo/condicion para el usuario que ingrese un numero correcto segun el menu
    do {
    printf("Que integral realizaras ?\n");
    printf("Dado que a <= x <= b \n");
    printf("1. xdx\n");
    printf("2. dx\n");
    printf("0. Salir\n");
    scanf("%d",&opcion);
        //Condicion que indica al usuario que se equivoco de numero
        if (opcion < 0 || opcion > 2){
            printf("Error: La opcion elejida no esta en el menu de opciones\n\n");
        }
    }while(opcion < 0 || opcion > 2);

        if (opcion == 1){
            int limSuperior,x,limInferior;
            do{
                printf("Ingresa el limite superior de tu integral: ");
                scanf("%d",&limSuperior);
                printf("Ingresa el limite inferior de tu integral: ");
                scanf("%d",&limInferior);
                printf("Ingresa el valor de x: ");
                scanf("%d",&x);
                    //Condiciones de error en caso de que el usuario ingrese mal un numero y concuerde segun la condicion propuesta en el ejercicio
                    //a <= x <= b
                    if(limInferior > limSuperior){
                        printf("Error: El limite inferior no puede ser mayor que el limite superior\n");
                    }
                    else if(x > limSuperior){
                        printf("Error: x no puede se mayor que el limite superior\n");
                    }
                    else if(limInferior > x){
                        printf("Error: El limite inferior no puede ser mayor que x\n");
                    }
            }while(limInferior > limSuperior || x > limSuperior || limInferior > x);
            printf("El resultado de tu integral es: %d",xdx(limSuperior,x,limInferior));//Llamar a la funcion xdx
        }
        else if (opcion == 2){
            int limSuperior,x,limInferior;
                do{
                printf("Ingresa el limite superior de tu integral: ");
                scanf("%d",&limSuperior);
                printf("Ingresa el limite inferior de tu integral: ");
                scanf("%d",&limInferior);
                printf("Ingresa el valor de x: ");
                scanf("%d",&x);
                    //Condiciones de error en caso de que el usuario ingrese mal un numero y concuerde segun la condicion propuesta en el ejercicio
                    //a <= x <= b
                    if(limInferior > limSuperior){
                        printf("Error: El limite inferior no puede ser mayor que el limite superior\n");
                    }
                    else if(x > limSuperior){
                        printf("Error: x no puede se mayor que el limite superior\n");
                    }
                    else if(limInferior > x){
                        printf("Error: El limite inferior no puede ser mayor que x\n");
                    }
                }while(limInferior > limSuperior || x > limSuperior || limInferior > x);

                printf("El resultado de tu integral es: %d",dx(limSuperior,x,limInferior));//Llamar a la funcion dx
        }
        else if (opcion == 0){
            printf("Gracias por usar la mini-calculadora de integrales\n");
        }
}
//Deficion de la Funcion dx
int dx (int limSuperior,int x,int limInferior){
    int multiplicacion1 = x * limSuperior;
    int multiplicacion2 = x * limInferior;
    int resta = multiplicacion1 - multiplicacion2;
    return resta;
}
//Definicion de la Funcion xdx
int xdx(int limSuperior,int x,int limInferior){
    //Calculando los limites
    float superior = pow(limSuperior,2)/2;
    float inferior = pow(limInferior,2)/2;
    float resta = superior - inferior;
    float multiplicacion = x * resta;
        return multiplicacion;
}
