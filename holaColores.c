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
#define AGUA " ~ "
#define TAM 10

void imprimir_tablero(){

	printf( TLC HL TCL HL TRC "\n");
	printf( VL AGUA VL AGUA VL "\n");	
	printf(LCL HL CL HL RCL "\n");
	printf( VL AGUA VL AGUA VL "\n");	
	printf( BLC HL BCL HL BRC "\n");

}


int main (){

	imprimir_tablero();





	return 0;



}
