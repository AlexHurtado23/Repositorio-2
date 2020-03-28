//Emmanuel Alejandro Hurtado Alejndre  Data 1A
//Hangman Game
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
/*
Teacher I don´t know how to do it with argc and argv
and I had problems printing the list, but the program
has the other specifications that you said. It selects
the word randomly
*/
int main() {

	srand(time(NULL));
	char guessWords[][16] = {"china","canada","england","germany","france","russia","america","japan"};

	//printf("the list of words is: %s\n",guessWords[1][16]);

// index for random word
	int random = rand() % 8;

	int numLives = 5;
	int numCorrect = 0;
	int oldCorrect = 0;

	int lengthOfWord = strlen(guessWords[random]);

//array in which we break down the word
	int letterGuessed[15] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int i = 0;
	int reguessed = 0;
	char guess[16];
	char playerLetter;

//Main loop
	while ( numCorrect < lengthOfWord )
    {
		printf("\n\nHangman Word:");

		for( i= 0; i < lengthOfWord; i++)
        {
			if(letterGuessed[i] == 1)
			{
				printf("%c",guessWords[random][i]);
			}
            else
            {
				printf("*");
			}
		}
		printf("\n");

		printf("Number of lives:%d\n",numLives);
		printf("Give a letter:");
		fgets(guess, 16, stdin);

		playerLetter = guess[0];
	    reguessed = 0;
		printf("your letter:%c\n",playerLetter);
		oldCorrect = numCorrect;

		for(i = 0; i < lengthOfWord; i++)
        {
			if(letterGuessed[i] == 1)
			{
				if(guessWords[random][i] == playerLetter)
				{
					reguessed = 1;
					break;
				}
				continue;
			}
			if(playerLetter == guessWords[random][i])
            {
                letterGuessed[i] = 1;
				numCorrect++;
			}
		}

		if( oldCorrect == numCorrect && reguessed == 0)
        {
			numLives--;
			printf("Sorry, wrong letter!\n");
			if (numLives == 0)
			{
				break;
			}
		}
		else if( reguessed == 1)
		{
			printf("Already Founded!!\n");
			numLives--;
		}
		else
        {
			printf("Correct letter!\n");
		}
	}

	if (numLives == 0)
    {
		printf("\nSorry you lose, the word was: %s\n",
		guessWords[random]);
	}
	else
    {
		printf("\nYOU WIN!!!, the word was: %s\n",
		guessWords[random]);
	}
return 0;
}
