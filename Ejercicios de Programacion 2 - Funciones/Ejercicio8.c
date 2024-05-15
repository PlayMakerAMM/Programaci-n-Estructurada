/*
8. Crear una función para calcular Seno(x), utilizando una función externa, conforme la
siguiente fórmula: Seno(x): x – x^3/3! + x^5 /3! + x^7 /3! + (hasta 17 términos). Utilizar las
otras funciones definidas por el programador, creadas en problemas anteriores.
*/

#include<stdio.h> //Biblioteca estandar de C
#include<math.h> //Para el uso de potencias

//Declaracion de Funciones
float Seno(float,float);
float Factorial(float);

//Funcion principal
void main(){
    float x,n;
    printf("Este programa obtendra el seno mediante la siguiente ecuacion \n");
    printf("-> Seno(x): x – x^3/3! + x^5 /3! + x^7 /3! + (un numero n de hasta 17 terminos)\n\n");
    printf("Ingrea el valor de x: ");
    scanf("%f",&x);
    printf("Ingresa el valor de n: ");
    scanf("%f",&n);
    printf("El Seno es: %f\n\n",Seno(x,n));//Llamar a la funcion seno
}

//Deficion de la Funcion factorial
float Factorial(float numero){
    float factorial = 1;
    numero = 3;
    for(int i=1; i <= numero; i++){
		factorial *= i;
	}
    return factorial;
}
//Deficion de la Funcion seno
float Seno(float x,float n){
    float potencia_Tres = pow(x,3);
    float potencia_Cinco = pow(x,5);
    float potencia_Siete = pow(x,7);
        //En cada una de estas se llama la funcion factorial que es la misma 3! para poder divirdir las potencias entre la funcion factorial
        float divicion_Primera = potencia_Tres/Factorial(x);
        float divicion_Segunda = potencia_Cinco/Factorial(x);
        float divicion_Tercera = potencia_Siete/Factorial(x);
            float suma = x - divicion_Primera + divicion_Segunda + divicion_Tercera + n;
                return suma;
}
