//Alejandro Hurtado Data 1A
//Ejercicio 7

#include <stdio.h>

int main(int argc, char *argv[]){

    int bugs=100;
    double bug_rate= 1.2;

    printf("You have %d bugs at the imaginary rate of %f. \n", bugs,bug_rate);

    unsigned long universe_of_defects= 1L * 1024L * 1024L * 32000L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs= bugs *bug_rate;
    printf("You expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe",part_of_universe);

    //this makes no sense, just a demo of something weird

    char nul_byte= '\0';
    int care_percentage = bugs * nul_byte;
    //printf("Which means you should care %s.\n",care_percentage);
    printf("Which means you should care %c.\n",care_percentage);

    /*You cannot multiply a char for an int because the int has a numerical value and
    the char is read as a character, you can only add it to an int. For example 6 + R = 6R*/

return 0;
}
