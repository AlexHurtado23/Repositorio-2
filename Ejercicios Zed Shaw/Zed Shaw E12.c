//Alejandro Hurtado Data 1A
//Ejercicio 12

#include<stdio.h>

int main(int argc, char *argv[]){

    int i=0;

    if(argc==1){

        printf("You only have an argument. You suck.\n");

    }else if(argc>1 && argc <4){

        printf("Here is your arguments: \n");

        for(i=0;i<argc;i++){

            printf("%s ", argv[i]);
        }
        printf("\n");
    } else{
        printf("You have too many arguments. You suck.\n");
    }

return 0;
}
