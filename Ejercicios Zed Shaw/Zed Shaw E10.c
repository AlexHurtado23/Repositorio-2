//Alejandro Hurtado Data 1A
//Ejercicio 10

#include<stdio.h>

/*
int main (int argc, char *argv[]){

    int i= 0;

    //go through each string in argv
    //why am I skipping argv[0]?

    for(i=1;i<argc;i++){

        printf("arg %d: %s\n", i, argv[i]);
    }

    //let´s make our own array of strings
    char *states[]={"California","Oregon","Washington","Texas"};
    int num_states=4;

    for(i=0; i<num_states;i++){

        printf("State %d: %s\n",i,states[i]);
    }

return 0;
}
*/

//Extra Credit

int main (int argc, char *argv[]){

    int i= 0;

    //go through each string in argv
    //why am I skipping argv[0]?

    for(i=1;i<argc;i++){

        printf("arg %d: %s\n", i, argv[i]);
    }

    //let´s make our own array of strings
    char *states[]={"California",NULL,"Washington","Texas"};
    int num_states=4;

    for(i=0; i<num_states;i++){

        printf("State %d: %s\n",i,states[i]);
    }

return 0;
}
/*
No puedes usar ',' (coma) dentro de un cilo for para hacer las separaciones. Debe de ir ';'
El NULL lo toma como si fuera un valor vacio. Imprime state 1:(null)
*/

