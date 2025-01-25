#include <string.h>
#include<stdio.h>

int main(void)
{
int j;
char caracter;
float valor2;
valor2=24.6789245;


printf("Introducir un caracter:");
caracter = getchar();

printf("\nEl codigo ASCII del caracter %c es %d (%x HEX) ",caracter,caracter,caracter);
fflush(stdin);
printf("\nPulsar INTRO para salir");
getchar();

return 0;
}

/*int main(void)
{
int valor1;
float valor2;
valor2=24.6789245;
valor1=1245;
printf("El valor es %10d \n",valor1);
printf("El valor es %10.2f \n",valor2);

getchar();
return 0;
}*/
