/*Dep3_Prog6:
Garcia Gutierrez Alejandro
Equipo Los 8 Tristes Burros
Un cuente el número de veces que ahorras y nos diga el acumulado de ahorro*/
#include <stdio.h>
int main()
{
    int banco; //acumular
    int monto; //monto a ahorrar por evento
    int numdepositos; // la cantidad de veces que fui al banco
    char respuesta; // para saber si queremos realizae otro deposito
    numdepositos=0;
    banco=0;
    monto=0;

    int banco:
    int monto;
    int numdepositos;
    char repuesta;printf
    numdepositos = 0;
    banco = 0;
    monto = 0
    respuesta = 's';

    do
    {
      //voy al banco
      respuesta = 's'
      printf("\n\n Monto a depositar");
      scanf("%d", &monto);
      banco = banco + monto; //acumulador
      numdepositos = numdepositos + 1; //contador
      printf("Quieres realizar otro deposito (s/n");
      scanf("&c", &respuesta)

        
    } while (respuesta != 'n');  // condition while = mientras
    printf("\n\n Dinero que tienes en el banco %d", banco);
    printf("\n\n Numero de depositos %d", numdepositos);
    
    

    return 0;
}