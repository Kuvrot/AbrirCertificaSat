#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//Made by @Kuvrot
//11-01-2024

int main() {
	
	system ("color a");
	system("msg * Recuerda que necesitas tener instalado Java");
	
	char* input = (char*) malloc (20);
	char command[11] = "java -jar ";
	input[0] = '\0';
	
	printf ("Ingrese el nombre del archivo (incluyendo la extension.jar) y presione ENTER \n (si no funciona probar con la version de 32 bits) \n");
	scanf ("%s" , input);
	strcat(command , input);
	system(command);
	
	free(input);
	
	return 0;
}

