//Alejandro Hurtado Data 1A
//Ejercicio 11

#include<stdio.h>
/*
int main(int argc, char *argv[]){

    int i=0;
    while(i<argc){

        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }

    //let´s make our own array of strings
    char *states[]={"California","Oregon","Washington","Texas"};

    int num_states=4;
    i=0; //watch for this
    while(i<num_states){

        printf("state %d: %s\n", i, states[i]);
        i++;
    }

return 0;
}
*/

//Extra Credit

int main(int argc, char *argv[]){

    int i=4;
    while(i<argc){

        printf("arg %d: %s\n", i, argv[i]);
        i--;
    }

    //let´s make our own array of strings
    char *states[]={"California","Oregon","Washington","Texas"};

    int num_states=4;
    i = (num_states - 1); //watch for this
    while(i>=0){

        printf("state %d: %s\n",i,states[i]);
        i--;
    }

return 0;
}
