//Juego de Ahorcado para 2 personas
//Teclear pista sobre la palabra
//El jugador 1 captura la pista y la palabra
//El jugador 2 tiene 7 intentos para adivinar

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

//Variable para leer el nombre
    char pista[50];
    char palabra[50];    //*LEJ*NDR*
    char adivina[50];    //A___A___O
    char original[50];

    //Indice
    int indice=0;

    //Control de intentos
    int intentos=7;

    //Para leer el caracter
    char caracter;

    //Encontro
    int encontroLetra;

    //Cuenta letras encontradas
    int letrasAdivinadas=0;


    //Dame la pista
    puts("Dame la pista:");
    gets(pista);

    //Dame la palabra
    puts("Digita la palabra y presiona enter para continuar");
    puts("No puedes equivcarte al digitar, no puedes corregir usando BackSpace");

    //Ciclo para leer la palabra Letra por letra
    do
    {
        //Lee el caracter
        caracter = getch();
        putchar('*');

        //Coloca el caracter
        if(caracter==13)
            break;

        //Coloca el caracter en la palabra en mayusculas
        palabra[indice]=toupper(caracter);
        original[indice]=toupper(caracter);

        //Colocamos la palabra visible
        adivina[indice]='_';

        //Incrementamos el indice
        indice++;
    }while(1);
    printf("\n");

    //Coloca el fin de la Cadena
    palabra[indice]='\x0';
    original[indice]='\x0';
    adivina[indice]='\x0';

    //Ciclo para capturar letra
    do
    {



        //Mensaje
        printf("La pista es: %s\n", pista);
        printf("La palabra a adivinar tiene es de %d letras y esta si:",strlen(palabra));
        puts(adivina);
        puts("Capture una letra");

        //Lee el caracter
        caracter=toupper(getche());
        printf("\n");

        //Inicializa la bandera de que encontro palabra
        encontroLetra=0;

        //Ciclo para buscar el caracter en la palabra
        for(indice=0; indice<strlen(palabra); indice++)
        {
            //Verifica que no sea una letra encontrada
            if(palabra[indice]!='*')
                //Verifica que sea la letra
                if(palabra[indice]==caracter)
                {
                    //Activa la bandera de que encontro
                    encontroLetra=1;

                    //Incrementa el Contador de las letras encontrdas
                    letrasAdivinadas ++;

                    //Coloca la letra en el vector de adivina
                    adivina[indice]=palabra[indice];

                    //La marca como encontrada
                    palabra[indice]='*';
                }
        }

        //Verifica si encontro
        if (encontroLetra==1)
        {
            //Mensaje de que es correcta la letra
            puts("La letra es correcta");

            if(letrasAdivinadas==strlen(palabra))
            {
                puts("! Has adivinado la palabra ¡");
                puts(adivina);
                break;
            }
        }
        else
        {
            if(intentos==1)
            {
                puts("!Has fallado ¡");
                printf("La palabra correcta era:%s",original);
                break;
            }
            else
            {
                puts("Error en letra");
                //Decrementa intentos
                intentos--;
                printf("Te quedan %i intentos\n\n",intentos);
            }
        }
    }while(1);

//Finaliza
return 0;
}
