// First add includes
// Second add game menu
// Third make choice 1 loop
// Fourth make choice 2 loop
// Fifth make choice 3 loop
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
    printf("To Play Game Press 1\n");
    printf("To Change Max Number Press 2\n");
    printf("To Quit Press 3\n");
}

int main()
{
    int max = 10;
    int choice = 0, inp, random;

        while(choice != 3)
        {
            menu();
            scanf("%d", &choice);
                if(choice == 1)
                {
                    srand(time(0));
                    random = (rand() %(max - 0 + 1)) + 0;
                        while(random != inp)
                        {
                            printf("Guess a number between 0 and %d:", max);
                            scanf("%d", &inp);
                            if(inp > random)
                            {
                                printf("Your guess is too high!\n\n");
                            }
                            else if(inp < random)
                            {
                                printf("Your guess is too low!\n\n");
                            }
                            else if(inp == random)
                            {
                                printf("Bingo! You won. :)");
                            }
                        }
                }
        }
}