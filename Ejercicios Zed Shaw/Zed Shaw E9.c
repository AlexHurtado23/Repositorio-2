//Alejandro Hurtado Data 1A
//Ejercicio 9

#include <stdio.h>

/*int main(int argc, char *argv[]){

    int numbers[4]={0};
    char name[4]={'a'};

    //first, print them out raw
    printf("Numbers: %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);

    printf("Name each: %c %c %c %c\n",name[0],name[1],name[2],name[3]);

    printf("Name: %s\n",name);


    //setup the numbers
    numbers[0] =1;
    numbers[1] =2;
    numbers[2] =3;
    numbers[3] =4;


    //setup the name
    name[0]='Z';
    name[1]='e';
    name[2]='d';
    name[3]='\0';

    //then print them out initialized
    printf("Numbers: %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);

    printf("name each: %c %c %c %c\n",name[0],name[1],name[2],name[3]);

    //print the name like a string
    printf("Name: %s\n",name);

    //another way to use name
    char *another= "Zed";

    printf("another: %s\n",another);

    printf("another each: %c %c %c %c\n",another[0],another[1],another[2],another[3]);

return 0;
}*/

//Extra Credit

int main(int argc, char *argv[]){

    int numbers[4]={0};
    char name[4]={'a'};

    //first, print them out raw
    printf("Numbers: %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);

    printf("Name each: %c %c %c %c\n",name[0],name[1],name[2],name[3]);

    printf("Name: %s\n",name);


    //setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;


    //setup the name
    name[0]='T';
    name[1]='o';
    name[2]='m';
    name[3]='\0';

    //then print them out initialized
    printf("Numbers: %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3]);

    printf("name each: %c %c %c %c\n",name[0],name[1],name[2],name[3]);

    //print the name like a string
    printf("Name: %s\n",*name);

    //another way to use name
    char *another= "Tom";

    printf("another: %s\n",another);

    printf("another each: %c %c %c %c\n",another[0],another[1],another[2],another[3]);

    //print name as if it was an array of ints
    printf("name as ints %d %d %d %d \n",another[0],another[1],another[2],another[3]);

return 0;
}
/*
No recibi ningun Warning, solo cambio el valor de los numeros por valores distintos.

No reconoce los numeros como caracteres y la maquina no los puede imprimir.

Arroja un Warning cuando convierto name a *name
Warning: "inizializtion makes pointer from integer without a cast (-Wint-conversion)"
*/
