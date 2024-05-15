/*
7. Reimplementar el problema 3, utilizando funciones externas (definidas por el
programador) añadiendo las siguientes funciones trigonométricas conforme sus
fórmulas siguientes (preguntar al usuario los datos requeridos y la función a ser
calculada en cada ocasión):
 Coseno(x): adyacente / hipotenusa
 Tangente(x): opuesto / adyacente
 Arcoseno(x): 1 / seno
 Arcocoseno(x): 1 / coseno
 Arcotangente(x): 1/ tangente
 Cosecante(x): hipotenusa / opuesto
 Secante(x): hipotenusa / adyacente
 Cotangente(x): adyacente / opuesto
 Seno(x): opuesto / hipotenusa
*/
/*
Se implimentaron unas restricciones extras en algunas funciones de acuerdo a la tabla de senos, cosenos y tangente del siguiente link
https://sites.google.com/site/matematicaexplicita/tabla-de-equivalencias-de-los-ngulos-de-seno-coseno-y-tangente
y con el teorema de pitagoras, para que algunas funciones no sean tan repetitivas.
*/
#include<stdio.h> //Biblioteca estandar de C
#include<math.h> //Para el uso cos, sin y tan

//Declaracion de Funciones
float Coseno(float adyacente, float hipotenusa);
float Tangente(float opuesto,float adyasente);
float Arcoseno(float seno);
float Arcocoseno(float coseno);
float Arcotangente(float tangente);
float Cosecante(float hipotenusa, float opuesto);
float Secante(float hipotenusa, float adyacente);
float Cotangente(float adyacente, float opuesto);
float Seno(float opuesto, float hipotenusa);

//Funcion principal
void main(){
    int opcion;
    float numero_1, numero_2;
    //Ciclo/condicion para que usuario ingrese un numero, con respecto la lista de la calculadora
   do {
    puts("Mini-Calculadora v2.0");
    printf("Ingresa la opcion con respecto al numero correspodinte de cada opcion \n");
    printf("1. Obtener coseno\n");
    printf("2. Obtener tangente\n");
    printf("3. Obtener arcoseno\n");
    printf("4. Obtener arcocoseno\n");
    printf("5. Obtener arcotangente\n");
    printf("6. Obtener cosecante\n");
    printf("7. Obtener secante\n");
    printf("8. Obtener cotangente\n");
    printf("9. Obtener seno\n");
    printf("0. Salir\n");
    scanf("%d",&opcion);

    switch(opcion){
    //Cada caso del 1-9 tiene una fucion de acuerdo al valor que se quiera obtener
    case 1:
        Coseno(numero_1,numero_2);
        printf("\n\n");
        break;
    case 2:
        Tangente(numero_1,numero_2);
        printf("\n\n");
        break;
    case 3:
        Arcoseno(numero_1);
        printf("\n\n");
        break;
    case 4:
        Arcocoseno(numero_1);
        printf("\n\n");
        break;
    case 5:
        Arcotangente(numero_1);
        printf("\n\n");
        break;
    case 6:
        Cosecante(numero_1,numero_2);
        printf("\n\n");
        break;
    case 7:
        Secante(numero_1,numero_2);
        printf("\n\n");
        break;
    case 8:
        Cotangente(numero_1,numero_2);
        printf("\n\n");
        break;
    case 9:
        Seno(numero_1,numero_2);
        printf("\n\n");
        break;
    case 0:
        printf("Gracias por usar la mini-calculadora v2.0\n");
        printf("\n\n");
        break;
    default:
        printf("Error: El numero %d",opcion);
        printf(" no esta en la lista de opciones");
        printf("\n\n");
    }
   }while(opcion != 0);
}

//Deficion de Funciones
float Coseno(float adyacente, float hipotenusa){
      do {
        printf("Coloca el cateto adyasente: ");
        scanf("%f",&adyacente);
        printf("Coloca la hipotenusa: ");
        scanf("%f",&hipotenusa);
            if (adyacente > hipotenusa){
                printf("Error: el cateto adyasente no puede ser mayor que la hipotenusa.\n");
            }
        }while(adyacente > hipotenusa);
    float coseno;
    coseno = adyacente / hipotenusa;
    printf("El coseno es: %f",coseno);
}
float Tangente(float opuesto,float adyasente){
    printf("Coloca el cateto opuesto: ");
        scanf("%f",&opuesto);
        printf("Coloca el cateto adyasente: ");
        scanf("%f",&adyasente);
    float tangente = opuesto / adyasente;
    printf("La tangente es: %f",tangente);
}
float Arcoseno(float seno){
    printf("Coloca el seno: ");
        scanf("%f",&seno);
    if (seno > 1){
        seno = sin(seno);
    }
    float arcoseno;
    arcoseno = 1 / seno;
    printf("El arcoseno es: %f",arcoseno);
}
float Arcocoseno(float coseno){
    printf("Coloca el coseno: ");
        scanf("%f",&coseno);
    if (coseno > 1){
        coseno = cos(coseno);
    }
    float arcocoseno = 1 / coseno;
    printf("El arcocoseno es: %f",arcocoseno);
}
float Arcotangente(float tangente){
    printf("Coloca la tangente: ");
        scanf("%f",&tangente);
    float arcotangente = 1 / tangente;
    printf("El arcotangente es: %f",arcotangente);
}
float Cosecante(float hipotenusa, float opuesto){
    do {
        printf("Coloca la Hipotenusa: ");
        scanf("%f",&hipotenusa);
        printf("Coloca el cateto opuesto: ");
        scanf("%f",&opuesto);
            if(opuesto > hipotenusa){
                printf("Error: El cateto opuesto no puede ser mayor que la hipotenusa.\n");
            }
        }while(opuesto > hipotenusa);
    float cosecante = hipotenusa / opuesto;
    printf("El cosecante es: %f",cosecante);
}
float Secante(float hipotenusa, float adyacente){
    do{
        printf("Coloca la Hipotenusa: ");
        scanf("%f",&hipotenusa);
        printf("Coloca el cateto adyasente: ");
        scanf("%f",&adyacente);
            if (adyacente > hipotenusa){
                printf("Error: El cateto adyasente no puede ser mayor que la hipotenusa.\n");
            }
        }while(adyacente > hipotenusa);
    float secante = hipotenusa / adyacente;
    printf("La secante es: %f",secante);
}
float Cotangente(float adyacente, float opuesto){
    printf("Coloca el cateto adyasente: ");
        scanf("%f",&adyacente);
        printf("Coloca el cateto opuesto: ");
        scanf("%f",&opuesto);
    float cotangente = adyacente / opuesto;
    printf("El cotangente es: %f",cotangente);
}
float Seno(float opuesto, float hipotenusa){
    do{
        printf("Coloca el cateto opuesto: ");
        scanf("%f",&opuesto);
        printf("Coloca la Hipotenusa: ");
        scanf("%f",&hipotenusa);
            if (opuesto > hipotenusa){
                printf("Error: El cateto opuesto no puede ser mayor que la hipotenusa.\n");
            }
        }while(opuesto > hipotenusa);
    float seno = opuesto / hipotenusa;
    printf("El seno es: %f",seno);
}
