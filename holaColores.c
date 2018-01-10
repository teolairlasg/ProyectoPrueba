#include <stdio.h>


#define AMARILLO "\033[1;5;3m"
#define AGUA "\033[1;94m ~"
#define RESET "\033[0m"

#define TLC "┌"
#define TRC "┐"
#define HL "─"
#define LCL "├"
#define RCL "┤"
#define CL "┼"
#define BCL "┴"
#define TCL "┬"
#define VL "│"
#define BLC "└"
#define BRC "┘"


int main (){

	fprintf(stdout,AMARILLO "Amarillo\n" RESET);
	fprintf(stdout,AGUA RESET);
	fprintf(stdout, "\nhola   \t \n");

	printf(TLC HL HL HL HL HL HL TRC "\n");
	printf(VL "      " VL "\n");
	printf(LCL HL HL HL HL HL HL RCL "\n");
	printf(VL "      " VL "\n");
	printf(BLC HL HL HL HL HL HL BRC "\n");





	return 0;



}
