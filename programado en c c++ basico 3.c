/*Dep3_Prog3:Basico
Garcia Gutierrez Alejandro
Equipo Los 8 Tristes Burros
19 mayo 21
Verificar si es par e impar*/
#include <stdio.h>

int main()
{
    int numero;
    printf("\n Introduce un numero");
    scanf("%d", &numero);

    if ( numero%2 == 0)
    {
        printf("\n El numero es PAR");
    }
    else
    {
        printf("\n El nnumero es IMPAR");
    }

    return 0;
}
