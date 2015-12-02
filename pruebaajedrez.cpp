#include <stdio.h>
#include <stdlib.h>

#define DIM 8

void caballo(int mapa[DIM][DIM], int posicionx, int posiciony){	//declaramos la funcion caballo
	if(mapa[posiciony -2][posicionx -1] == 1 or mapa[posiciony -2][posicionx +1] == 1 or mapa[posiciony +2][posicionx +1] == 1 or mapa[posiciony +2][posicionx -1] == 1 or mapa[posiciony -1][posicionx -2] == 1 or mapa[posiciony +1][posicionx -2] == 1 or mapa[posiciony -1][posicionx +2] == 1 or mapa[posiciony +1][posicionx +2] ==1)
		printf("Tu caballo comio ficha\n");
	else
		printf("tu caballo fallo\n");
}	//Movimiento caballo



void rey(int mapa[DIM][DIM], int posicionx, int posiciony){	//declaramos la funcion rey
	if(mapa[posiciony +1][posicionx +1] == 1 or mapa[posiciony +1][posicionx] == 1 or mapa[posiciony +1][posicionx -1] == 1 or mapa[posiciony -1][posicionx +1] == 1 or mapa[posiciony -1][posicionx -1] == 1 or mapa[posiciony -1][posicionx] == 1 or mapa[posiciony][posicionx +1] == 1 or mapa[posiciony +1][posicionx] ==1)
		printf("Tu Rey comio ficha\n");
	else
		printf("tu Rey fallo\n");
		}	//Movimiento Rey


void peon(int mapa[DIM][DIM], int posicionx, int posiciony){ 	//declaramos la funcion peon
			if(mapa[posiciony +1][posicionx +1] == 1 or mapa[posiciony +1][posicionx -1] == 1 or mapa[posiciony -1][posicionx +1] == 1 or mapa[posiciony +1][posicionx -1] == 1 or mapa[posiciony -1][posicionx -1] == 1)
				printf("Tu Peon comio ficha\n");
			else
				printf("Tu Peon fallo\n");
		}	//Movimiento Peon


		int main(int argc, char * argv[]){
			system("clear");
			system("toilet AJEDREZ");

			int mapa[DIM][DIM]={		//declaramos un array bidimensional de ints

				{1,0,1,0,0,1,1,0},
				{1,0,0,1,1,0,0,0},
				{0,1,1,1,0,1,0,0},
				{1,0,1,0,0,1,0,0},
				{0,1,0,1,0,1,0,0},
				{1,0,1,0,0,0,0,0},
				{1,0,1,0,0,0,0,0},
				{1,0,1,0,0,0,0,0},

			};

			int posicionx;
			int posiciony;
			int pieza;

			printf("Que pieza quieres usar:\n \n\t1 Caballo\n \t2 Peon\n \t3 Rey\n\n");

			scanf("%i", &pieza);

			printf("Dime la posicion x de la pieza \n");

			scanf("%i", &posicionx);

			printf("Dime la posicion y de la pieza \n");

			scanf("%i", &posiciony);


			switch(pieza)		//con este switch llamaremos a la funcion que necesitemos
			{
				case 1:
				pieza=1;
				caballo(mapa, posicionx, posiciony);
				break;

				case 2:
				pieza=2;
				peon(mapa, posicionx, posiciony);
				break;

				case 3:
				pieza=3;
				rey(mapa, posicionx, posiciony);
				break;

				default:
				printf("No elegiste un pieza disponible\n");
				break;
			};





			return EXIT_SUCCESS;
		}
