/*
3. Utilizando funciones internas de C, crear un programa que permita calcular las
funciones trigonométricas: seno(x), coseno(x) y tangente(x)*, para un valor x de
ángulo, solicitado al usuario expresado en grados. El programa debe preguntar al
usuario qué función desea calcular, presentándole un menú. *La tangente se debe
implementar como una función externa, utilizando la fórmula: tan(x) = seno(x) /
coseno(x)
*/

#include<stdio.h> //Biblioteca estandar de C
#include<math.h> //Para el uso cos, sin

//Declaracion de Funcion
float tangente (float,float);

//Funcion Principal
void main(){

    int opcion;
    float seno, coseno;

    puts("Mini-Calculadora");
    puts("Todos los derechos reservados por PlayMaker");
    printf("\n");

    //Condicion para que el usuario ingrese un numero correcto segun el menu
    do {
    printf("Digita el numero con la opcion correspondiente\n");
    printf("1. Obtener el coseno de tu angulo\n");
    printf("2. Obtener el seno de tu angulo\n");
    printf("3. Obtener la tangente de tu angulo\n");
    printf("0. Salir\n");
    scanf("%d",&opcion);
        if(opcion == 1){
            printf("Coloca tu angulo en grados ");
            scanf("%f",&coseno);
            printf("El coseno de tu angulo es: %f",cos(coseno));
            printf("\n");
        }
        else if (opcion == 2){
            printf("Coloca tu angulo en grados ");
            scanf("%f",&seno);
            printf("El seno de tu angulo es: %f",sin(seno));
            printf("\n\n");
        }
        else if (opcion == 3){
            printf("Coloca el seno: ");
            scanf("%f",&seno);
            printf("Colca el coseno: ");
            scanf("%f",&coseno);
            printf("La tangente de tu triangulo es: %f",tangente(seno, coseno));//Llamar a la funcion tangente
            printf("\n\n");
        }
        else if (opcion == 0){
           printf("Gracias por usar la mini-calculadora\n");
            printf("\n\n");
        }
        //Declaracion de un error, en caso de que el usuario ponga otro numero diferente al del menu
        else {
             printf("Error: Vuelve a intentar con otro numero");
            printf("\n\n");
        }
    }while (opcion != 0);

}
//Deficion de la funcion
float tangente (float seno, float coseno){
    float tangente;
    if (seno > 1 ){
        seno = sin(seno);
    }
    if (coseno > 1 ){
        coseno = cos(coseno);
    }
    tangente = seno / coseno;
    return tangente;
}
