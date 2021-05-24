/*Dep3_Prog4:
Garcia Gutierrez Alejandro
Equipo Los 8 Tristes Burros
19 mayo 21
Verificar si es vocal o letra*/
#include <stdio.h>

int main()
{ 
    int letra;
    printf("\n Introduce una letra");
    scanf("%c", &letra);

    if ( (letra == 'a' || letra == 'A') ||
         (letra == 'e' || letra == 'E') ||
         (letra == 'i' || letra == 'I') ||
         (letra == 'o' || letra == 'O') ||
         (letra == 'u' || letra == 'U') ||
       )
    {
        printf("\n Es una VOCAL");
    }
    else
    {
        printf("\n No es una VOCAL");
    }
}