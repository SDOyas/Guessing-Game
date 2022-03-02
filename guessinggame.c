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
    printf("\nTo Play Game Press 1\n");
    printf("To Change Max Number Press 2\n");
    printf("To Quit Press 3\n");
}

int main()
{
    int max = 10;
    int choice = 0, inp, random;
    int guesses;
    char c[2];

        while(choice != 3)
        {
            menu();
            scanf("%d", &choice);
                if(choice == 1)
                {
                    guesses = 0;
                    srand(time(0));
                    random = (rand() %(max -0 +1) - 0);
                    
                        while(random != inp)
                        {
                            printf("Guess a number between 0 and %d: ", max);
                            scanf("%d", &inp);
                            if(c[0]=='q') return 0;
                                if(inp > random)
                                {
                                    printf("Your guess is too high! \n\n");
                                }
                                else if(inp < random)
                                {
                                    printf("Your guess is too low! \n\n");
                                }
                                else if(inp == random)
                                {
                                    printf("Nice! You won. :)\n");
                                    printf("Wrong Guesses: %d\n", guesses);
                                }
                                guesses++;
                        }
                }
                else if(choice == 2)
                {
                    printf("What number do you wish to be the new max? ");
                    scanf("%d", &max);
                        while(max < 0)
                        {
                            printf("Please enter a positive number. ");
                            scanf("%d", &max);
                        }
                }
                else if(choice == 3)
                {
                    return 0;
                }
        }
        return 0;
}