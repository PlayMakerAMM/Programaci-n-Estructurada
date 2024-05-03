#include <stdio.h> // Entrada y salida estandar
#include <ctype.h> // Necesaria para usar la función de cambio de tipos: toupper();
#include <stdlib.h> // Necesaria para usar la función para generar números aleatorios
#include <time.h> // Necesaria para usar el reloj de la computadora
#include <unistd.h> // Necesaria para usar usleep()
// Agregar un retraso de 1 segundo (1000000 microsegundos) con usleep()

//Declaracion de funciones
void juegaDados(void);
int hacerTirada(void);
int seguirJugando(void);
int ganador(int,int);
int dineroContinuar(int);
int jugador(int,int);
int cpu(int,int);

int totalJugador_1, totalCPU;
int jugador_1 = 1000; 
char continuar;

//Funcion Principal
void main(void){

	//Llamando a la funcion de todo el juego
	juegaDados();

    system("PAUSE");
}

//Definicion de las funciones
//Funcion para jugar a los dados
void juegaDados(void){

    // Declarar variables
	int dadoJugador_1, dadoCPU, dado2Jugador_1, dado2CPU;
	char tirar;

	// Inicializar la semilla pseudoaleatoria para generar los nos. al azar
	// con el reloj de la computadora usando time(0)
	srand(time(0));

    printf("Bienvenido a Roll Dice \n");
    printf("Tines en tu cuenta inicial $1000 c:\n\n");

	// Repetir hasta que el jugador decida salir de juego
	do{

        //Llamar a la funcion hacerTirada
        hacerTirada();

        dadoJugador_1 = rand() % 6 + 1 ;
		dado2Jugador_1 = rand() % 6 + 1; // Genera números entre 1 y 6
		//El turno ahora es de la máquina
		dadoCPU = rand () % 6 + 1;
		dado2CPU = rand() % 6 + 1; // Genera números entre 1 y 6

		jugador( dadoJugador_1, dado2Jugador_1 );

		printf("\n\n");

		cpu( dadoCPU, dado2CPU);

        ganador(totalJugador_1,totalCPU);
        //Llamar a la funcion seguirJugando
        seguirJugando();


		getchar();
	}
	while(continuar == 'S'|| continuar != 'N');
}

int hacerTirada(void){
    char tirar;
    // Repetir hasta que el jugador decida tirar
		do{
			puts("¿Deseas tirar el dado? (S/Cualquier tecla) \n\n");
            puts("¿Si -> S / No -> N?");
			scanf("%c",&tirar);
			tirar = toupper(tirar);
			switch (tirar){
			case 'N': puts("No te noto muy convencido te volvere a preguntar despues...\n");
			usleep(3000000); //3 segundos
			break;
			case 'S': printf("Muy bien juguemos (: \n\n");
                break;
          default:  puts("Error! Intenta de nuevo.\n\n");
                }
			getchar();
		} // Importante: la condición aquí expresada se traduce a palabras como: "si tirar es distinto de s y de S"
		while(tirar != 'S');
}

int ganador(int totalJugador_1, int totalCPU){

    //Condicion para determinar al ganador
		if(totalJugador_1 > totalCPU){
			printf(" (: G a n a s t e !\n");
			jugador_1 += 10;
			printf("Ahora tienes en tu cuenta: %d\n", jugador_1);
        }
		else if(totalJugador_1 < totalCPU){
			printf(" :( P e r d i s t e!\n");
			jugador_1 -= 10;
			printf("\nAhora tienes en tu cuenta: %d\n",jugador_1);

        }
        else if(totalJugador_1 == totalCPU){
			printf("E M P A T E !\n");
        }
    return jugador_1;
}

//Funcion para verficar el dinero del jugador
int dineroContinuar(int Jugador_1){
    if (Jugador_1 > 1030){
            printf("Lo siento ya no puedes continuar tienes en tu cuenta mas de 1030\n");
            exit(EXIT_FAILURE);
		}
		if (Jugador_1 < 10){
            printf("Lo siento ya no puedes continuar tienes en tu cuenta menos de 10\n");
            exit(EXIT_FAILURE);
		}
    return Jugador_1;
}

//Funcion para continuar el juego
int seguirJugando(void){
        puts("¿Quieres continuar jugando? (S/Cualquier tecla)\n");
        puts("Ten en cuenta que no puedes seguir jugando si tienes mas de $1000 en tu cuenta o menos de 10");
        puts("¿Si -> S / No -> N?");
		scanf("%c",&continuar);
		continuar = toupper(continuar);
		switch (continuar){
            case 'N': puts("okey,pero se que volveras, hasta pronto, que tengas buen dia\n");
			exit(EXIT_FAILURE);
			case 'S':
			    dineroContinuar(jugador_1);
			    printf("Muy bien sigamos jugando. Iniciando juego nuevo (: \n\n");
                break;
          default:  puts("Error! Intenta de nuevo.\n\n");
		}
}

int jugador(int dadoJugador_1,int dado2Jugador_1 ){
    //Esperando una respuesta y obtener el valor de la tirada del dado
		printf("Turno del Jugador_1: tirando dados...\n");
		usleep(3000000); //Windows toma la exprecion en milisegundos por la cual 3000 serian 3 segundos
		printf("Dado 1 callo: %d", dadoJugador_1);
		usleep(1500000);
		printf("\n");
		printf("Dado 2 callo: %d", dado2Jugador_1);
		printf("\n");
		totalJugador_1 = dadoJugador_1 + dado2Jugador_1;
		usleep(1500000);
		printf("El resultado de tus dados es: %d", totalJugador_1);
    return totalJugador_1;
}

int cpu(int dadoCPU,int dado2CPU){
    printf("Turno de la maquina: tirando dados...\n");
		usleep(3000000); //Windows toma la exprecion en milisegundos por la cual 3000 serian 3 segundos
		printf("Dado callo: %d", dadoCPU);
		usleep(1537000);
		printf("\n");
		printf("Dado 2 callo: %d", dado2CPU);
		printf("\n");
		totalCPU = dadoCPU + dado2CPU;
		usleep(1524000);
		printf("El resultado de tus dados es: %d", totalCPU);
        printf("\n");
    return totalCPU;
}
