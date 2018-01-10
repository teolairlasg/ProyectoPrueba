#include <stdio.h>


#define AMARILLO "\033[1;5;3m"
#define AGUACOLOR "\033[1;94m ~"
#define RESET "\033[0m"

#define TLC "┌"
#define TRC "┐"
#define HL "───"
#define LCL "├"
#define RCL "┤"
#define CL "┼"
#define BCL "┴"
#define TCL "┬"
#define VL "│"
#define BLC "└"
#define BRC "┘"
#define AGUA "\033[1;94m\u2588\u2588\u2588\033[0m"
#define BARCO "\033[1;90m\u2588\u2588\u2588\033[0m"
#define TOCADO "\033[1;93m\u2588\u2588\u2588\033[0m"
#define HUNDIDO "\033[1;91m\u2588\u2588\u2588\033[0m"
#define TAM 20


char tablero[TAM][TAM];

void inicializar_tablero(){

	int i, j;
	for (int i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			tablero[i][j]='A';
		}
	}
}

void imprimir_tablero_2x2(){

	printf( TLC HL TCL HL TRC "\n");
	printf( VL AGUA VL AGUA VL "\n");	
	printf(LCL HL CL HL RCL "\n");
	printf( VL AGUA VL AGUA VL "\n");	
	printf( BLC HL BCL HL BRC "\n");

}

void imprimir_linea_superior(){
	printf(TLC);
	int i;
	for (i=0; i<(TAM - 1); i++){
		printf(HL TCL);
	}
	printf(HL TRC "\n");
}

void imprimir_linea_inferior(){
	printf(BLC);
	int i;
	for (i=0; i<(TAM - 1); i++){
		printf(HL BCL);
	}
	printf(HL BRC "\n");
}

void imprimir_linea_central(){
	printf(LCL);
	int i;
	for (i=0; i<(TAM - 1); i++){
		printf(HL CL);
	}
	printf(HL RCL "\n");
}

void imprimir_posicion(char c){
	switch (c){

		case 'A':
			printf(AGUA);
			break;
		case 'B':
			printf(BARCO);
			break;
		case 'T':
			printf(TOCADO);
			break;
		case 'H':
			printf(HUNDIDO);
			break;
		case 'O':
			printf("   ");
			break;
	}
}

void imprimir_fila_datos(int fila){
	printf(VL);
	int col;
	for (col=0; col<(TAM); col++){
		imprimir_posicion(tablero[fila][col]);
		printf(VL);
	}
	printf("\n");
}



void imprimir_cuerpo_tablero(){
	int i;
	for(i = 0; i<(TAM-1);i++){
		imprimir_fila_datos(i);
		imprimir_linea_central();
	}
	imprimir_fila_datos(i);
}



void imprimir_tablero(){

	imprimir_linea_superior();
	imprimir_cuerpo_tablero();
	imprimir_linea_inferior();
}


int main (){

	inicializar_tablero();
	tablero[0][0]='B';
	tablero[1][0]='T';
	tablero[2][0]='B';
	tablero[5][4]='H';
	tablero[4][4]='H';
	tablero[3][4]='H';
	imprimir_tablero();

	return 0;
}
