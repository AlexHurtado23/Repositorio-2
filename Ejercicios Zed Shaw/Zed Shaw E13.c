//Alejandro Hurtado Data 1A
//Ejercicio 13

#include<stdio.h>
/*
int main(int argc, char *argv[]){

    if(argc != 2){

        printf("Error: You need one argument.\n");
        //This is how you abort a program
        return 1;
    }

    int i=0;
    for(i=0;argv[1][i]!='\0';i++){
        char letter=argv[1][i];

        switch(letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n",i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n",i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n",i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n",i);
                break;

            case 'u':
            case 'U':
                printf("%d: 'U'\n",i);
                break;

            case 'y':
            case 'Y':
                if(i>2){

                    //it is only sometimes Y
                    printf("%d: 'Y'\n",i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }
return 0;
}
*/

int main(int argc, char *argv[]){

    if(argc != 2){

        printf("Error: You need one argument.\n");
        //This is how you abort a program
        return 1;
    }

    int i=0;
    for(i=0;argv[1][i]!='\0';i++){
        char letter=argv[1][i];

        if(letter!='a' && letter !='A' && letter !='e' && letter !='E' && letter!='i'
           && letter!='I' && letter!='o' && letter!='O' && letter!='u' && letter!='U'
           && letter!='y' && letter!='Y'){

           printf("%d: %c is not a vowel\n", i, letter);
        }

        if(letter=='a' || letter =='A'){

            printf("%d: 'A'\n",i);
        }

        if(letter=='e' || letter =='E'){

            printf("%d: 'E'\n",i);
        }

        if(letter=='i' || letter =='I'){

            printf("%d: 'I'\n",i);
        }

        if(letter=='o' || letter =='O'){

            printf("%d: 'O'\n",i);
        }

        if(letter=='u' || letter =='U'){

            printf("%d: 'U'\n",i);
        }

        if(letter=='y' || letter =='Y'){

            printf("%d: 'Y'\n",i);
        }
    }
return 0;
}
/*
Puedo entender porque se invento la estructura del Switch Case, hacer este ejercicio con If
es bastante largo y tedioso, en especial la primera condicion.
*/
